#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float sum(float x, float y)
{
	float z = x + y;
	return z;
}
float minus(float x, float y)
{
	float z = x - y;
	return z;
}
float plus(float x, float y)
{
	float z = x * y;
	return z;
}
float division(float x, float y)
{
	float z = x / y;
	return z;
}
int main(void) 
{
	float a = 0;
	float b = 0;
	char c = 0;
	float key = 0;
	scanf("%f%c%f", &a, &c, &b);
	switch (c)
	{
	    case'+':
		    printf("key=%.2f\n", key = sum(a, b));
		    break;
		case'-':
			printf("key=%.2f\n", key = minus(a, b));
			break;
		case'*':
			printf("key=%.2f\n", key = plus(a, b));
			break; 
		case'/':
		    printf("key=%.2f\n", key = division(a, b));
		    break;
		default:
			printf("尚不支持此类运算\n");
			break;
	}
   return 0;

}
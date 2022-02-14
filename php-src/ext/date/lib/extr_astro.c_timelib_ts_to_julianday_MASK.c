
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timelib_sll ;



double FUNC_0(timelib_sll VAR_0)
{
 double VAR_1;

 VAR_1 = (double) VAR_0;
 VAR_1 /= (double) 86400;
 VAR_1 += (double) 2440587.5;

 return VAR_1;
}

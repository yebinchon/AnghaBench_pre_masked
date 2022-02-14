
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef double double_t ;


 double VAR_0 ;

double FUNC_0(double VAR_1)
{
 union {double f; uint64_t i;} VAR_2 = {VAR_1};
 int VAR_3 = VAR_2.i>>52 & 0x7ff;
 int VAR_4 = VAR_2.i>>63;
 double_t VAR_5;

 if (VAR_3 >= 0x3ff+52)
  return VAR_1;
 if (VAR_4)
  VAR_5 = VAR_1 - VAR_0 + VAR_0;
 else
  VAR_5 = VAR_1 + VAR_0 - VAR_0;
 if (VAR_5 == 0)
  return VAR_4 ? -0.0 : 0;
 return VAR_5;
}

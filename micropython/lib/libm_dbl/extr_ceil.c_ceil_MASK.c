
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ double_t ;


 int FUNC_0 (scalar_t__) ;
 double VAR_0 ;

double FUNC_1(double VAR_1)
{
 union {double f; uint64_t i;} VAR_2 = {VAR_1};
 int VAR_3 = VAR_2.i >> 52 & 0x7ff;
 double_t VAR_4;

 if (VAR_3 >= 0x3ff+52 || VAR_1 == 0)
  return VAR_1;

 if (VAR_2.i >> 63)
  VAR_4 = VAR_1 - VAR_0 + VAR_0 - VAR_1;
 else
  VAR_4 = VAR_1 + VAR_0 - VAR_0 - VAR_1;

 if (VAR_3 <= 0x3ff-1) {
  FUNC_0(VAR_4);
  return VAR_2.i >> 63 ? -0.0 : 1;
 }
 if (VAR_4 < 0)
  return VAR_1 + VAR_4 + 1;
 return VAR_1 + VAR_4;
}

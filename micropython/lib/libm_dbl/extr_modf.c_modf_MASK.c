
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



double FUNC_0(double VAR_0, double *VAR_1)
{
 union {double f; uint64_t i;} VAR_2 = {VAR_0};
 uint64_t VAR_3;
 int VAR_4 = (int)(VAR_2.i>>52 & 0x7ff) - 0x3ff;


 if (VAR_4 >= 52) {
  *VAR_1 = VAR_0;
  if (VAR_4 == 0x400 && VAR_2.i<<12 != 0)
   return VAR_0;
  VAR_2.i &= 1ULL<<63;
  return VAR_2.f;
 }


 if (VAR_4 < 0) {
  VAR_2.i &= 1ULL<<63;
  *VAR_1 = VAR_2.f;
  return VAR_0;
 }

 VAR_3 = -1ULL>>12>>VAR_4;
 if ((VAR_2.i & VAR_3) == 0) {
  *VAR_1 = VAR_0;
  VAR_2.i &= 1ULL<<63;
  return VAR_2.f;
 }
 VAR_2.i &= ~VAR_3;
 *VAR_1 = VAR_2.f;
 return VAR_0 - VAR_2.f;
}

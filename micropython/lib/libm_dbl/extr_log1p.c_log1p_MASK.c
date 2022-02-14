
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef double double_t ;


 int FUNC_0 (float) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;

double FUNC_1(double VAR_9)
{
 union {double f; uint64_t i;} VAR_10 = {VAR_9};
 double_t VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17,VAR_18,VAR_19,VAR_20;
 uint32_t VAR_21,VAR_22;
 int VAR_23;

 VAR_21 = VAR_10.i>>32;
 VAR_23 = 1;
 if (VAR_21 < 0x3fda827a || VAR_21>>31) {
  if (VAR_21 >= 0xbff00000) {
   if (VAR_9 == -1)
    return VAR_9/0.0;
   return (VAR_9-VAR_9)/0.0;
  }
  if (VAR_21<<1 < 0x3ca00000<<1) {

   if ((VAR_21&0x7ff00000) == 0)
    FUNC_0((float)VAR_9);
   return VAR_9;
  }
  if (VAR_21 <= 0xbfd2bec4) {
   VAR_23 = 0;
   VAR_13 = 0;
   VAR_12 = VAR_9;
  }
 } else if (VAR_21 >= 0x7ff00000)
  return VAR_9;
 if (VAR_23) {
  VAR_10.f = 1 + VAR_9;
  VAR_22 = VAR_10.i>>32;
  VAR_22 += 0x3ff00000 - 0x3fe6a09e;
  VAR_23 = (int)(VAR_22>>20) - 0x3ff;

  if (VAR_23 < 54) {
   VAR_13 = VAR_23 >= 2 ? 1-(VAR_10.f-VAR_9) : VAR_9-(VAR_10.f-1);
   VAR_13 /= VAR_10.f;
  } else
   VAR_13 = 0;

  VAR_22 = (VAR_22&0x000fffff) + 0x3fe6a09e;
  VAR_10.i = (uint64_t)VAR_22<<32 | (VAR_10.i&0xffffffff);
  VAR_12 = VAR_10.f - 1;
 }
 VAR_11 = 0.5*VAR_12*VAR_12;
 VAR_14 = VAR_12/(2.0+VAR_12);
 VAR_15 = VAR_14*VAR_14;
 VAR_17 = VAR_15*VAR_15;
 VAR_18 = VAR_17*(VAR_1+VAR_17*(VAR_3+VAR_17*VAR_5));
 VAR_19 = VAR_15*(VAR_0+VAR_17*(VAR_2+VAR_17*(VAR_4+VAR_17*VAR_6)));
 VAR_16 = VAR_19 + VAR_18;
 VAR_20 = VAR_23;
 return VAR_14*(VAR_11+VAR_16) + (VAR_20*VAR_8+VAR_13) - VAR_11 + VAR_12 + VAR_20*VAR_7;
}

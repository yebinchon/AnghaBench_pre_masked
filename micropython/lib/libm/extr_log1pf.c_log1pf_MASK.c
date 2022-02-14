
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef float float_t ;


 int FUNC_0 (float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;

float FUNC_1(float VAR_6)
{
 union {float f; uint32_t i;} VAR_7 = {VAR_6};
 float_t VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17;
 uint32_t VAR_18,VAR_19;
 int VAR_20;

 VAR_18 = VAR_7.i;
 VAR_20 = 1;
 if (VAR_18 < 0x3ed413d0 || VAR_18>>31) {
  if (VAR_18 >= 0xbf800000) {
   if (VAR_6 == -1)
    return VAR_6/0.0f;
   return (VAR_6-VAR_6)/0.0f;
  }
  if (VAR_18<<1 < 0x33800000<<1) {

   if ((VAR_18&0x7f800000) == 0)
    FUNC_0(VAR_6*VAR_6);
   return VAR_6;
  }
  if (VAR_18 <= 0xbe95f619) {
   VAR_20 = 0;
   VAR_10 = 0;
   VAR_9 = VAR_6;
  }
 } else if (VAR_18 >= 0x7f800000)
  return VAR_6;
 if (VAR_20) {
  VAR_7.f = 1 + VAR_6;
  VAR_19 = VAR_7.i;
  VAR_19 += 0x3f800000 - 0x3f3504f3;
  VAR_20 = (int)(VAR_19>>23) - 0x7f;

  if (VAR_20 < 25) {
   VAR_10 = VAR_20 >= 2 ? 1-(VAR_7.f-VAR_6) : VAR_6-(VAR_7.f-1);
   VAR_10 /= VAR_7.f;
  } else
   VAR_10 = 0;

  VAR_19 = (VAR_19&0x007fffff) + 0x3f3504f3;
  VAR_7.i = VAR_19;
  VAR_9 = VAR_7.f - 1;
 }
 VAR_11 = VAR_9/(2.0f + VAR_9);
 VAR_12 = VAR_11*VAR_11;
 VAR_14 = VAR_12*VAR_12;
 VAR_15= VAR_14*(VAR_1+VAR_14*VAR_3);
 VAR_16= VAR_12*(VAR_0+VAR_14*VAR_2);
 VAR_13 = VAR_16 + VAR_15;
 VAR_8 = 0.5f*VAR_9*VAR_9;
 VAR_17 = VAR_20;
 return VAR_11*(VAR_8+VAR_13) + (VAR_17*VAR_5+VAR_10) - VAR_8 + VAR_9 + VAR_17*VAR_4;
}

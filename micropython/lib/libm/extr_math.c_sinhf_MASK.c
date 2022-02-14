
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (float) ;
 float FUNC_1 (float) ;

float FUNC_2(float VAR_0)
{
 union {float f; uint32_t i;} VAR_1 = {.f = VAR_0};
 uint32_t VAR_2;
 float VAR_3, VAR_4, VAR_5;

 VAR_4 = 0.5;
 if (VAR_1.i >> 31)
  VAR_4 = -VAR_4;

 VAR_1.i &= 0x7fffffff;
 VAR_5 = VAR_1.f;
 VAR_2 = VAR_1.i;


 if (VAR_2 < 0x42b17217) {
  VAR_3 = FUNC_1(VAR_5);
  if (VAR_2 < 0x3f800000) {
   if (VAR_2 < 0x3f800000 - (12<<23))
    return VAR_0;
   return VAR_4*(2*VAR_3 - VAR_3*VAR_3/(VAR_3+1));
  }
  return VAR_4*(VAR_3 + VAR_3/(VAR_3+1));
 }


 VAR_3 = 2*VAR_4*FUNC_0(VAR_5);
 return VAR_3;
}

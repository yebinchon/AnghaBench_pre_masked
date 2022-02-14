
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int float_t ;


 int FUNC_0 (float) ;
 float FUNC_1 (int) ;

float FUNC_2(float VAR_0)
{
 union {float f; uint32_t i;} VAR_1 = {.f = VAR_0};
 unsigned VAR_2 = VAR_1.i >> 31;
 float_t VAR_3;


 VAR_1.i &= 0x7fffffff;
 VAR_3 = VAR_1.f;

 if (VAR_1.i < 0x3f800000 - (1<<23)) {
  if (VAR_1.i < 0x3f800000 - (32<<23)) {

   if (VAR_1.i < (1<<23))
    FUNC_0((float)(VAR_3*VAR_3));
  } else {

   VAR_3 = 0.5f*FUNC_1(2*VAR_3 + 2*VAR_3*VAR_3/(1-VAR_3));
  }
 } else {

  VAR_3 = 0.5f*FUNC_1(2*(VAR_3/(1-VAR_3)));
 }
 return VAR_2 ? -VAR_3 : VAR_3;
}

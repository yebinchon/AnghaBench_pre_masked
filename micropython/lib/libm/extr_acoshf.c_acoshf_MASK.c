
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;

float FUNC_3(float VAR_0)
{
 union {float f; uint32_t i;} VAR_1 = {VAR_0};
 uint32_t VAR_2 = VAR_1.i & 0x7fffffff;

 if (VAR_2 < 0x3f800000+(1<<23))


  return FUNC_0(VAR_0-1 + FUNC_2((VAR_0-1)*(VAR_0-1)+2*(VAR_0-1)));
 if (VAR_2 < 0x3f800000+(12<<23))

  return FUNC_1(2*VAR_0 - 1/(VAR_0+FUNC_2(VAR_0*VAR_0-1)));

 return FUNC_1(VAR_0) + 0.693147180559945309417232121458176568f;
}

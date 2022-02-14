
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (double) ;
 double FUNC_1 (double) ;

double FUNC_2(double VAR_0)
{
 union {double f; uint64_t i;} VAR_1 = {.f = VAR_0};
 uint32_t VAR_2;
 double VAR_3, VAR_4, VAR_5;

 VAR_4 = 0.5;
 if (VAR_1.i >> 63)
  VAR_4 = -VAR_4;

 VAR_1.i &= (uint64_t)-1/2;
 VAR_5 = VAR_1.f;
 VAR_2 = VAR_1.i >> 32;


 if (VAR_2 < 0x40862e42) {
  VAR_3 = FUNC_1(VAR_5);
  if (VAR_2 < 0x3ff00000) {
   if (VAR_2 < 0x3ff00000 - (26<<20))


    return VAR_0;
   return VAR_4*(2*VAR_3 - VAR_3*VAR_3/(VAR_3+1));
  }

  return VAR_4*(VAR_3 + VAR_3/(VAR_3+1));
 }



 VAR_3 = 2*VAR_4*FUNC_0(VAR_5);
 return VAR_3;
}

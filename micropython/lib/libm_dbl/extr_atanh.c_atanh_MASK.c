
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int double_t ;


 int FUNC_0 (float) ;
 double FUNC_1 (int) ;

double FUNC_2(double VAR_0)
{
 union {double f; uint64_t i;} VAR_1 = {.f = VAR_0};
 unsigned VAR_2 = VAR_1.i >> 52 & 0x7ff;
 unsigned VAR_3 = VAR_1.i >> 63;
 double_t VAR_4;


 VAR_1.i &= (uint64_t)-1/2;
 VAR_4 = VAR_1.f;

 if (VAR_2 < 0x3ff - 1) {
  if (VAR_2 < 0x3ff - 32) {

   if (VAR_2 == 0)
    FUNC_0((float)VAR_4);
  } else {

   VAR_4 = 0.5*FUNC_1(2*VAR_4 + 2*VAR_4*VAR_4/(1-VAR_4));
  }
 } else {

  VAR_4 = 0.5*FUNC_1(2*(VAR_4/(1-VAR_4)));
 }
 return VAR_3 ? -VAR_4 : VAR_4;
}

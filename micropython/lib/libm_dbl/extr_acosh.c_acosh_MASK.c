
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 double FUNC_0 (double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;

double FUNC_3(double VAR_0)
{
 union {double f; uint64_t i;} VAR_1 = {.f = VAR_0};
 unsigned VAR_2 = VAR_1.i >> 52 & 0x7ff;



 if (VAR_2 < 0x3ff + 1)

  return FUNC_1(VAR_0-1 + FUNC_2((VAR_0-1)*(VAR_0-1)+2*(VAR_0-1)));
 if (VAR_2 < 0x3ff + 26)

  return FUNC_0(2*VAR_0 - 1/(VAR_0+FUNC_2(VAR_0*VAR_0-1)));

 return FUNC_0(VAR_0) + 0.693147180559945309417232121458176568;
}

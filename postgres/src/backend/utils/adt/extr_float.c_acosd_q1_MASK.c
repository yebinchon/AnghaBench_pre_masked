
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double float8 ;


 double FUNC_0 (double) ;
 double volatile VAR_0 ;
 double FUNC_1 (double) ;
 double volatile VAR_1 ;

__attribute__((used)) static double
FUNC_2(double VAR_2)
{






 if (VAR_2 <= 0.5)
 {
  volatile float8 VAR_3 = FUNC_1(VAR_2);

  return 90.0 - (VAR_3 / VAR_1) * 30.0;
 }
 else
 {
  volatile float8 VAR_4 = FUNC_0(VAR_2);

  return (VAR_4 / VAR_0) * 60.0;
 }
}

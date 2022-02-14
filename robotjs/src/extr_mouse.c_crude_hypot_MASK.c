
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (double) ;

__attribute__((used)) static double FUNC_1(double VAR_1, double VAR_2)
{
 double VAR_3 = FUNC_0(VAR_1);
 double VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 > VAR_4) {
  double VAR_5 = VAR_3;
  VAR_3 = VAR_4;
  VAR_4 = VAR_5;
 }

 return ((VAR_0 - 1.0) * VAR_4) + VAR_3;
}

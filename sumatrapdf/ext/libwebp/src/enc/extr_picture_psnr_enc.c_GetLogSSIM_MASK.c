
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (int) ;

__attribute__((used)) static double FUNC_1(double VAR_1, double VAR_2) {
  VAR_1 = (VAR_2 > 0.) ? VAR_1 / VAR_2 : 1.;
  return (VAR_1 < 1.) ? -10.0 * FUNC_0(1. - VAR_1) : VAR_0;
}

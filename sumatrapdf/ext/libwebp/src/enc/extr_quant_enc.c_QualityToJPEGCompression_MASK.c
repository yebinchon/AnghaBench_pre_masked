
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,double const) ;

__attribute__((used)) static double FUNC_1(double VAR_0, double VAR_1) {




  const double VAR_2 = 0.30;
  const double VAR_3 = 0.85;
  const double VAR_4 = 0.4;
  const double VAR_5 = 0.9;
  const double VAR_6 = (VAR_4 - VAR_5) / (VAR_3 - VAR_2);


  const double VAR_7 = (VAR_1 > VAR_3) ? VAR_4
                    : (VAR_1 < VAR_2) ? VAR_5
                    : VAR_5 + VAR_6 * (VAR_1 - VAR_2);
  const double VAR_8 = FUNC_0(VAR_0, VAR_7);
  return VAR_8;
}

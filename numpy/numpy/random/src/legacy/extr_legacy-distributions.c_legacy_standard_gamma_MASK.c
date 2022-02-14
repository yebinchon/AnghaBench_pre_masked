
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aug_bitgen_t ;


 double FUNC_0 (int *) ;
 double FUNC_1 (int *) ;
 double FUNC_2 (int *) ;
 int FUNC_3 (double) ;
 double FUNC_4 (double,int) ;
 int FUNC_5 (int) ;

double FUNC_6(aug_bitgen_t *VAR_0, double VAR_1) {
  double VAR_2, VAR_3;
  double VAR_4, VAR_5, VAR_6, VAR_7;

  if (VAR_1 == 1.0) {
    return FUNC_2(VAR_0);
  }
  else if (VAR_1 == 0.0) {
    return 0.0;
  } else if (VAR_1 < 1.0) {
    for (;;) {
      VAR_4 = FUNC_0(VAR_0);
      VAR_5 = FUNC_2(VAR_0);
      if (VAR_4 <= 1.0 - VAR_1) {
        VAR_6 = FUNC_4(VAR_4, 1. / VAR_1);
        if (VAR_6 <= VAR_5) {
          return VAR_6;
        }
      } else {
        VAR_7 = -FUNC_3((1 - VAR_4) / VAR_1);
        VAR_6 = FUNC_4(1.0 - VAR_1 + VAR_1 * VAR_7, 1. / VAR_1);
        if (VAR_6 <= (VAR_5 + VAR_7)) {
          return VAR_6;
        }
      }
    }
  } else {
    VAR_2 = VAR_1 - 1. / 3.;
    VAR_3 = 1. / FUNC_5(9 * VAR_2);
    for (;;) {
      do {
        VAR_6 = FUNC_1(VAR_0);
        VAR_5 = 1.0 + VAR_3 * VAR_6;
      } while (VAR_5 <= 0.0);

      VAR_5 = VAR_5 * VAR_5 * VAR_5;
      VAR_4 = FUNC_0(VAR_0);
      if (VAR_4 < 1.0 - 0.0331 * (VAR_6 * VAR_6) * (VAR_6 * VAR_6))
        return (VAR_2 * VAR_5);
      if (FUNC_3(VAR_4) < 0.5 * VAR_6 * VAR_6 + VAR_2 * (1. - VAR_5 + FUNC_3(VAR_5)))
        return (VAR_2 * VAR_5);
    }
  }
}

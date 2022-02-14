
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aug_bitgen_t ;


 double FUNC_0 (double) ;
 double FUNC_1 (int *) ;
 double FUNC_2 (int *,double) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double,double) ;

double FUNC_5(aug_bitgen_t *VAR_0, double VAR_1, double VAR_2) {
  double VAR_3, VAR_4;

  if ((VAR_1 <= 1.0) && (VAR_2 <= 1.0)) {
    double VAR_5, VAR_6, VAR_7, VAR_8;


    while (1) {
      VAR_5 = FUNC_1(VAR_0);
      VAR_6 = FUNC_1(VAR_0);
      VAR_7 = FUNC_4(VAR_5, 1.0 / VAR_1);
      VAR_8 = FUNC_4(VAR_6, 1.0 / VAR_2);

      if ((VAR_7 + VAR_8) <= 1.0) {
        if (VAR_7 + VAR_8 > 0) {
          return VAR_7 / (VAR_7 + VAR_8);
        } else {
          double VAR_9 = FUNC_3(VAR_5) / VAR_1;
          double VAR_10 = FUNC_3(VAR_6) / VAR_2;
          double VAR_11 = VAR_9 > VAR_10 ? VAR_9 : VAR_10;
          VAR_9 -= VAR_11;
          VAR_10 -= VAR_11;

          return FUNC_0(VAR_9 - FUNC_3(FUNC_0(VAR_9) + FUNC_0(VAR_10)));
        }
      }
    }
  } else {
    VAR_3 = FUNC_2(VAR_0, VAR_1);
    VAR_4 = FUNC_2(VAR_0, VAR_2);
    return VAR_3 / (VAR_3 + VAR_4);
  }
}

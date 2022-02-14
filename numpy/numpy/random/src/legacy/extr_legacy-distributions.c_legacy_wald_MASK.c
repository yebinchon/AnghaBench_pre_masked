
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int aug_bitgen_t ;


 double FUNC_0 (int *) ;
 double FUNC_1 (int *) ;
 double FUNC_2 (int) ;

double FUNC_3(aug_bitgen_t *VAR_0, double VAR_1, double VAR_2) {
  double VAR_3, VAR_4, VAR_5;
  double VAR_6;

  VAR_6 = VAR_1 / (2 * VAR_2);
  VAR_5 = FUNC_1(VAR_0);
  VAR_5 = VAR_1 * VAR_5 * VAR_5;
  VAR_4 = VAR_1 + VAR_6 * (VAR_5 - FUNC_2(4 * VAR_2 * VAR_5 + VAR_5 * VAR_5));
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3 <= VAR_1 / (VAR_1 + VAR_4)) {
    return VAR_4;
  } else {
    return VAR_1 * VAR_1 / VAR_4;
  }
}

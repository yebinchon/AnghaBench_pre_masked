
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bit_generator; } ;
typedef TYPE_1__ aug_bitgen_t ;


 double VAR_0 ;
 double FUNC_0 (TYPE_1__*,double) ;
 double FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (double) ;
 long FUNC_3 (int ,double) ;
 double FUNC_4 (double) ;

double FUNC_5(aug_bitgen_t *VAR_1, double VAR_2,
                                   double VAR_3) {
  double VAR_4;
  if (VAR_3 == 0) {
    return FUNC_0(VAR_1, VAR_2);
  }
  if (1 < VAR_2) {
    const double VAR_5 = FUNC_0(VAR_1, VAR_2 - 1);
    const double VAR_6 = FUNC_1(VAR_1) + FUNC_4(VAR_3);
    return VAR_5 + VAR_6 * VAR_6;
  } else {
    const long VAR_7 = FUNC_3(VAR_1->bit_generator, VAR_3 / 2.0);
    VAR_4 = FUNC_0(VAR_1, VAR_2 + 2 * VAR_7);

    if (FUNC_2(VAR_3)){
      return VAR_0;
    } else {
    return VAR_4;
    }
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int has_gauss; double gauss; } ;
typedef TYPE_1__ rk_state ;


 double FUNC_0 (double) ;
 double FUNC_1 (TYPE_1__*) ;
 double FUNC_2 (double) ;

double FUNC_3(rk_state *VAR_0) {
  if (VAR_0->has_gauss) {
    const double VAR_1 = VAR_0->gauss;
    VAR_0->gauss = 0;
    VAR_0->has_gauss = 0;
    return VAR_1;
  } else {
    double VAR_2, VAR_3, VAR_4, VAR_5;

    do {
      VAR_3 = 2.0 * FUNC_1(VAR_0) - 1.0;
      VAR_4 = 2.0 * FUNC_1(VAR_0) - 1.0;
      VAR_5 = VAR_3 * VAR_3 + VAR_4 * VAR_4;
    } while (VAR_5 >= 1.0 || VAR_5 == 0.0);


    VAR_2 = FUNC_2(-2.0 * FUNC_0(VAR_5) / VAR_5);

    VAR_0->gauss = VAR_2 * VAR_3;
    VAR_0->has_gauss = 1;
    return VAR_2 * VAR_4;
  }
}

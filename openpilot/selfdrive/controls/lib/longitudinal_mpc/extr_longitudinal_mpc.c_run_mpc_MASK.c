
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {double x_l; double v_l; int a_ego; int v_ego; int x_ego; } ;
typedef TYPE_1__ state_t ;
struct TYPE_7__ {double* x_l; double* v_l; double* a_l; double* t; int cost; int * j_ego; int * a_ego; int * v_ego; int * x_ego; } ;
typedef TYPE_2__ log_t ;
struct TYPE_8__ {double* od; int * u; int * x; int * x0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 double FUNC_4 (double) ;

int FUNC_5(state_t * VAR_4, log_t * VAR_5, double VAR_6, double VAR_7){

  int VAR_8;
  double VAR_9 = 0.;
  double VAR_10 = 0.2;
  double VAR_11 = VAR_4->x_l;
  double VAR_12 = VAR_4->v_l;
  double VAR_13 = VAR_7;


  for (VAR_8 = 0; VAR_8 < VAR_0 + 1; ++VAR_8){
    if (VAR_8 > 4){
      VAR_10 = 0.6;
    }



    VAR_3.od[VAR_8*VAR_1] = VAR_11;
    VAR_3.od[VAR_8*VAR_1+1] = VAR_12;

    VAR_5->x_l[VAR_8] = VAR_11;
    VAR_5->v_l[VAR_8] = VAR_12;
    VAR_5->a_l[VAR_8] = VAR_13;
    VAR_5->t[VAR_8] = VAR_9;

    VAR_13 = VAR_7 * FUNC_4(-VAR_6 * VAR_9 * VAR_9 / 2);
    VAR_11 += VAR_12 * VAR_10;
    VAR_12 += VAR_13 * VAR_10;
    if (VAR_12 < 0.0){
      VAR_13 = 0.0;
      VAR_12 = 0.0;
    }

    VAR_9 += VAR_10;
  }

  VAR_3.x[0] = VAR_3.x0[0] = VAR_4->x_ego;
  VAR_3.x[1] = VAR_3.x0[1] = VAR_4->v_ego;
  VAR_3.x[2] = VAR_3.x0[2] = VAR_4->a_ego;

  FUNC_3();
  FUNC_0();

  for (VAR_8 = 0; VAR_8 <= VAR_0; VAR_8++){
    VAR_5->x_ego[VAR_8] = VAR_3.x[VAR_8*VAR_2];
    VAR_5->v_ego[VAR_8] = VAR_3.x[VAR_8*VAR_2+1];
    VAR_5->a_ego[VAR_8] = VAR_3.x[VAR_8*VAR_2+2];

    if (VAR_8 < VAR_0){
      VAR_5->j_ego[VAR_8] = VAR_3.u[VAR_8];
    }
  }
  VAR_5->cost = FUNC_2();




  return FUNC_1();
}

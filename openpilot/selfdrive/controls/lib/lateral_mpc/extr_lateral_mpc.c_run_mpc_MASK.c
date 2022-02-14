
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int delta; int psi; int y; int x; } ;
typedef TYPE_1__ state_t ;
struct TYPE_7__ {int cost; int * rate; int * delta; int * psi; int * y; int * x; } ;
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

int FUNC_4(state_t * VAR_4, log_t * VAR_5,
             double VAR_6[4], double VAR_7[4], double VAR_8[4],
             double VAR_9, double VAR_10, double VAR_11, double VAR_12, double VAR_13){

  int VAR_14;

  for (VAR_14 = 0; VAR_14 <= VAR_1 * VAR_0; VAR_14+= VAR_1){
    VAR_3.od[VAR_14] = VAR_11;
    VAR_3.od[VAR_14+1] = VAR_12;

    VAR_3.od[VAR_14+2] = VAR_6[0];
    VAR_3.od[VAR_14+3] = VAR_6[1];
    VAR_3.od[VAR_14+4] = VAR_6[2];
    VAR_3.od[VAR_14+5] = VAR_6[3];

    VAR_3.od[VAR_14+6] = VAR_7[0];
    VAR_3.od[VAR_14+7] = VAR_7[1];
    VAR_3.od[VAR_14+8] = VAR_7[2];
    VAR_3.od[VAR_14+9] = VAR_7[3];

    VAR_3.od[VAR_14+10] = VAR_8[0];
    VAR_3.od[VAR_14+11] = VAR_8[1];
    VAR_3.od[VAR_14+12] = VAR_8[2];
    VAR_3.od[VAR_14+13] = VAR_8[3];


    VAR_3.od[VAR_14+14] = VAR_9;
    VAR_3.od[VAR_14+15] = VAR_10;
    VAR_3.od[VAR_14+16] = VAR_13;

  }

  VAR_3.x0[0] = VAR_4->x;
  VAR_3.x0[1] = VAR_4->y;
  VAR_3.x0[2] = VAR_4->psi;
  VAR_3.x0[3] = VAR_4->delta;


  FUNC_3();
  FUNC_0();




  for (VAR_14 = 0; VAR_14 <= VAR_0; VAR_14++){
    VAR_5->x[VAR_14] = VAR_3.x[VAR_14*VAR_2];
    VAR_5->y[VAR_14] = VAR_3.x[VAR_14*VAR_2+1];
    VAR_5->psi[VAR_14] = VAR_3.x[VAR_14*VAR_2+2];
    VAR_5->delta[VAR_14] = VAR_3.x[VAR_14*VAR_2+3];
    if (VAR_14 < VAR_0){
      VAR_5->rate[VAR_14] = VAR_3.u[VAR_14];
    }
  }
  VAR_5->cost = FUNC_2();






  return FUNC_1();
}

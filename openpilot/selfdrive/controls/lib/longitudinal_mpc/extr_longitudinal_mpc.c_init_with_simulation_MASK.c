
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* x; double* u; double* y; double* yN; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_0(double VAR_6, double VAR_7, double VAR_8, double VAR_9, double VAR_10){
  int VAR_11;

  double VAR_12 = VAR_7;
  double VAR_13 = VAR_8;
  double VAR_14 = VAR_9;

  double VAR_15 = 0.0;
  double VAR_16 = -(VAR_6 - VAR_13) * (VAR_6 - VAR_13) / (2.0 * VAR_12 + 0.01) + VAR_14;

  if (VAR_16 > 0){
    VAR_16 = 0.0;
  }


  double VAR_17 = 0.2;
  double VAR_18 = 0.;

  for (VAR_11 = 0; VAR_11 < VAR_0 + 1; ++VAR_11){
    if (VAR_11 > 4){
      VAR_17 = 0.6;
    }


    VAR_5.x[VAR_11*VAR_2] = VAR_15;
    VAR_5.x[VAR_11*VAR_2+1] = VAR_6;
    VAR_5.x[VAR_11*VAR_2+2] = VAR_16;

    VAR_6 += VAR_16 * VAR_17;

    if (VAR_6 <= 0.0) {
      VAR_6 = 0.0;
      VAR_16 = 0.0;
    }

    VAR_15 += VAR_6 * VAR_17;
    VAR_18 += VAR_17;
  }

  for (VAR_11 = 0; VAR_11 < VAR_1 * VAR_0; ++VAR_11) VAR_5.u[ VAR_11 ] = 0.0;
  for (VAR_11 = 0; VAR_11 < VAR_3 * VAR_0; ++VAR_11) VAR_5.y[ VAR_11 ] = 0.0;
  for (VAR_11 = 0; VAR_11 < VAR_4; ++VAR_11) VAR_5.yN[ VAR_11 ] = 0.0;
}

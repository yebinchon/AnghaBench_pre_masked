
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* x; double* u; double* y; double* yN; double* x0; double* W; double* WN; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 () ;

void FUNC_1(double VAR_6, double VAR_7, double VAR_8, double VAR_9){
  FUNC_0();
  int VAR_10;
  const int VAR_11 = 3;


  for (VAR_10 = 0; VAR_10 < VAR_2 * (VAR_0 + 1); ++VAR_10) VAR_5.x[ VAR_10 ] = 0.0;
  for (VAR_10 = 0; VAR_10 < VAR_1 * VAR_0; ++VAR_10) VAR_5.u[ VAR_10 ] = 0.0;


  for (VAR_10 = 0; VAR_10 < VAR_3 * VAR_0; ++VAR_10) VAR_5.y[ VAR_10 ] = 0.0;
  for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) VAR_5.yN[ VAR_10 ] = 0.0;


  for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10) VAR_5.x0[ VAR_10 ] = 0.0;


  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
    int VAR_12 = 1;
    if (VAR_10 > 4){
      VAR_12 = VAR_11;
    }

    VAR_5.W[VAR_3*VAR_3*VAR_10 + (VAR_3+1)*0] = VAR_6 * VAR_12;
    VAR_5.W[VAR_3*VAR_3*VAR_10 + (VAR_3+1)*1] = VAR_7 * VAR_12;
    VAR_5.W[VAR_3*VAR_3*VAR_10 + (VAR_3+1)*2] = VAR_8 * VAR_12;
    VAR_5.W[VAR_3*VAR_3*VAR_10 + (VAR_3+1)*3] = VAR_9 * VAR_12;
  }
  VAR_5.WN[(VAR_4+1)*0] = VAR_6 * VAR_11;
  VAR_5.WN[(VAR_4+1)*1] = VAR_7 * VAR_11;
  VAR_5.WN[(VAR_4+1)*2] = VAR_8 * VAR_11;

}

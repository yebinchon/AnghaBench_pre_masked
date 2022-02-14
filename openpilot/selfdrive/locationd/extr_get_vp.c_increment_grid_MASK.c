
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (double*) ;
 int FUNC_1 (double*,double*,long long) ;
 scalar_t__ FUNC_2 (long long) ;

void FUNC_3(double *VAR_1, double *VAR_2, long long VAR_3) {
  double *VAR_4 = (double*) FUNC_2(VAR_3*VAR_3*2*sizeof(double));
  int VAR_5, VAR_6, VAR_7;
  VAR_7 = FUNC_1(VAR_2, VAR_4, VAR_3);
  for (int VAR_8=0; VAR_8 < VAR_7; VAR_8++) {
    VAR_6 = (int) (VAR_4[VAR_8*2 + 0] + 0.5);
    VAR_5 = (int) (VAR_4[VAR_8*2 + 1] + 0.5);
    VAR_1[VAR_5*(VAR_0+1) + VAR_6] += 1.;
  }
  FUNC_0(VAR_4);
}

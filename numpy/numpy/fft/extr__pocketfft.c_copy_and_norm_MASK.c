
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double*,double*,size_t) ;

__attribute__((used)) static void FUNC_1(double *VAR_0, double *VAR_1, size_t VAR_2, double VAR_3)
  {
  if (VAR_1!=VAR_0)
    {
    if (VAR_3!=1.)
      for (size_t VAR_4=0; VAR_4<VAR_2; ++VAR_4)
        VAR_0[VAR_4] = VAR_3*VAR_1[VAR_4];
    else
      FUNC_0 (VAR_0,VAR_1,VAR_2*sizeof(double));
    }
  else
    if (VAR_3!=1.)
      for (size_t VAR_5=0; VAR_5<VAR_2; ++VAR_5)
        VAR_0[VAR_5] *= VAR_3;
  }


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * cfft_plan ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,int,int ,int,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,double*,double) ;
 int FUNC_9 (int *,double*,double) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int) ;

__attribute__((used)) static PyObject *
FUNC_12(PyObject *VAR_9, int VAR_10, double VAR_11)
{
    PyArrayObject *VAR_12 = (PyArrayObject *)FUNC_3(VAR_9,
            FUNC_2(VAR_4), 1, 0,
            VAR_2 | VAR_0 |
            VAR_1 | VAR_3,
            ((void*)0));
    if (!VAR_12) return ((void*)0);

    int VAR_13 = FUNC_1(VAR_12, FUNC_4(VAR_12) - 1);
    cfft_plan VAR_14=((void*)0);

    int VAR_15 = FUNC_5(VAR_12)/VAR_13;
    double *VAR_16 = (double *)FUNC_0(VAR_12);
    int VAR_17=0;
    VAR_7;
    VAR_6;
    VAR_14 = FUNC_11(VAR_13);
    if (!VAR_14) VAR_17=1;
    if (!VAR_17)
      for (int VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
          int VAR_19 = VAR_10 ?
            FUNC_9(VAR_14, VAR_16, VAR_11) : FUNC_8(VAR_14, VAR_16, VAR_11);
          if (VAR_19!=0) { VAR_17=1; break; }
          VAR_16 += VAR_13*2;
      }
    if (VAR_14) FUNC_10(VAR_14);
    VAR_5;
    VAR_8;
    if (VAR_17) {
      FUNC_7(VAR_12);
      return FUNC_6();
    }
    return (PyObject *)VAR_12;
}

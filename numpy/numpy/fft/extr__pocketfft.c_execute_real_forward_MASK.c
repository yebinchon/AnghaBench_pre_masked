
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rfft_plan ;
typedef int npy_intp ;
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
 int FUNC_1 (int *,int) ;
 int* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int*,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int,int ,int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int VAR_7 ;
 int FUNC_9 (int *) ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int*) ;
 int * FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (char*,double*,int) ;
 scalar_t__ FUNC_16 (int *,double*,double) ;

__attribute__((used)) static PyObject *
FUNC_17(PyObject *VAR_9, double VAR_10)
{
    rfft_plan VAR_11=((void*)0);
    int VAR_12 = 0;
    PyArrayObject *VAR_13 = (PyArrayObject *)FUNC_5(VAR_9,
            FUNC_3(VAR_4), 1, 0,
            VAR_0 | VAR_1 | VAR_2,
            ((void*)0));
    if (!VAR_13) return ((void*)0);

    int VAR_14 = FUNC_6(VAR_13);
    const npy_intp *VAR_15 = FUNC_2(VAR_13);
    int VAR_16 = VAR_15[VAR_14 - 1];
    npy_intp *VAR_17=(npy_intp *)FUNC_14(VAR_14*sizeof(npy_intp));
    if (!VAR_17)
      { FUNC_10(VAR_13); return ((void*)0); }
    for (int VAR_18=0; VAR_18<VAR_14-1; ++VAR_18)
      VAR_17[VAR_18] = VAR_15[VAR_18];
    VAR_17[VAR_14-1] = VAR_16/2 + 1;
    PyArrayObject *VAR_19 = (PyArrayObject *)FUNC_4(VAR_14,
            VAR_17, FUNC_3(VAR_3), 0);
    FUNC_12(VAR_17);
    if (!VAR_19) VAR_12=1;
    if (!VAR_12) {
      int VAR_20 = FUNC_1(VAR_19, FUNC_6(VAR_19) - 1)*2;

      int VAR_21 = FUNC_7(VAR_13)/VAR_16;
      double *VAR_22 = (double *)FUNC_0(VAR_19),
             *VAR_23 = (double *)FUNC_0(VAR_13);

      VAR_7;
      VAR_6;
      VAR_11 = FUNC_13(VAR_16);
      if (!VAR_11) VAR_12=1;
      if (!VAR_12)
        for (int VAR_24 = 0; VAR_24 < VAR_21; VAR_24++) {
            VAR_22[VAR_20-1] = 0.0;
            FUNC_15((char *)(VAR_22+1), VAR_23, VAR_16*sizeof(double));
            if (FUNC_16(VAR_11, VAR_22+1, VAR_10)!=0) {VAR_12=1; break;}
            VAR_22[0] = VAR_22[1];
            VAR_22[1] = 0.0;
            VAR_22 += VAR_20;
            VAR_23 += VAR_16;
      }
      if (VAR_11) FUNC_11(VAR_11);
      VAR_5;
      VAR_8;
    }
    if (VAR_12) {
      FUNC_10(VAR_13);
      FUNC_10(VAR_19);
      return FUNC_8();
    }
    FUNC_9(VAR_13);
    return (PyObject *)VAR_19;
}

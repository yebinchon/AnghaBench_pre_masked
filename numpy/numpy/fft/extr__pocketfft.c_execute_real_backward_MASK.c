
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rfft_plan ;
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
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int,int ,int,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int VAR_7 ;
 int FUNC_9 (int *) ;
 int VAR_8 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int) ;
 int FUNC_13 (char*,double*,int) ;
 scalar_t__ FUNC_14 (int *,double*,double) ;

__attribute__((used)) static PyObject *
FUNC_15(PyObject *VAR_9, double VAR_10)
{
    rfft_plan VAR_11=((void*)0);
    PyArrayObject *VAR_12 = (PyArrayObject *)FUNC_5(VAR_9,
            FUNC_3(VAR_3), 1, 0,
            VAR_0 | VAR_1 | VAR_2,
            ((void*)0));
    if (!VAR_12) return ((void*)0);
    int VAR_13 = FUNC_1(VAR_12, FUNC_6(VAR_12) - 1);
    PyArrayObject *VAR_14 = (PyArrayObject *)FUNC_4(FUNC_6(VAR_12),
            FUNC_2(VAR_12), FUNC_3(VAR_4), 0);
    int VAR_15 = 0;
    if (!VAR_14) VAR_15=1;
    if (!VAR_15) {
      int VAR_16 = FUNC_7(VAR_14)/VAR_13;
      double *VAR_17 = (double *)FUNC_0(VAR_14),
             *VAR_18 = (double *)FUNC_0(VAR_12);

      VAR_7;
      VAR_6;
      VAR_11 = FUNC_12(VAR_13);
      if (!VAR_11) VAR_15=1;
      if (!VAR_15) {
        for (int VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
          FUNC_13((char *)(VAR_17 + 1), (VAR_18 + 2), (VAR_13 - 1)*sizeof(double));
          VAR_17[0] = VAR_18[0];
          if (FUNC_14(VAR_11, VAR_17, VAR_10)!=0) {VAR_15=1; break;}
          VAR_17 += VAR_13;
          VAR_18 += VAR_13*2;
        }
      }
      if (VAR_11) FUNC_11(VAR_11);
      VAR_5;
      VAR_8;
    }
    if (VAR_15) {
      FUNC_10(VAR_12);
      FUNC_10(VAR_14);
      return FUNC_8();
    }
    FUNC_9(VAR_12);
    return (PyObject *)VAR_14;
}

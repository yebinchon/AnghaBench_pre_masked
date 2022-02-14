
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyObject ;
typedef int PyArray_StridedUnaryOp ;
typedef int NpyAuxData ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int ,int ,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_2 ;
 int * FUNC_3 (char*) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(int VAR_3,
                            npy_intp VAR_4, npy_intp VAR_5,
                            int VAR_6, int VAR_7,
                            PyArray_StridedUnaryOp **VAR_8,
                            NpyAuxData **VAR_9)
{

    if (FUNC_6(VAR_6) &&
                    !FUNC_6(VAR_7) &&
                    !FUNC_5(VAR_7)) {
        PyObject *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
        int VAR_12;
        VAR_11 = FUNC_3("numpy.core");
        if (VAR_11) {
            VAR_10 = FUNC_4(VAR_11, "ComplexWarning");
            FUNC_7(VAR_11);
        }
        VAR_12 = FUNC_2(VAR_10,
                "Casting complex values to real discards "
                "the imaginary part", 1);
        FUNC_8(VAR_10);
        if (VAR_12 < 0) {
            return VAR_0;
        }
    }

    *VAR_8 = FUNC_0(VAR_3,
                                VAR_4, VAR_5,
                                VAR_6, VAR_7);
    *VAR_9 = ((void*)0);
    if (*VAR_8 == ((void*)0)) {
        FUNC_1(VAR_2,
                "unexpected error in GetStridedNumericCastFn");
        return VAR_0;
    }

    return VAR_1;
}

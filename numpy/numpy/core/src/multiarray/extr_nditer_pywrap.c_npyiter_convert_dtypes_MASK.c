
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t npy_intp ;
typedef int PyObject ;
typedef int PyArray_Descr ;


 int FUNC_0 (int *,int **) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(PyObject *VAR_0,
                        PyArray_Descr **VAR_1,
                        npy_intp VAR_2)
{
    npy_intp VAR_3;





    if ((!FUNC_5(VAR_0) && !FUNC_2(VAR_0)) ||
                                    FUNC_4(VAR_0) != VAR_2) {
        goto try_single_dtype;
    }

    for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
        PyObject *VAR_4 = FUNC_3(VAR_0, VAR_3);
        if (VAR_4 == ((void*)0)) {
            npy_intp VAR_5;
            for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5 ) {
                FUNC_7(VAR_1[VAR_5]);
            }
            return 0;
        }


        if (FUNC_0(VAR_4, &VAR_1[VAR_3]) != 1) {
            npy_intp VAR_6;
            for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6 ) {
                FUNC_7(VAR_1[VAR_6]);
            }
            FUNC_6(VAR_4);
            FUNC_1();
            goto try_single_dtype;
        }

        FUNC_6(VAR_4);
    }

    return 1;

try_single_dtype:
    if (FUNC_0(VAR_0, &VAR_1[0]) == 1) {
        for (VAR_3 = 1; VAR_3 < VAR_2; ++VAR_3) {
            VAR_1[VAR_3] = VAR_1[0];
            FUNC_8(VAR_1[VAR_3]);
        }
        return 1;
    }

    return 0;
}

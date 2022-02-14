
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufunc_full_args ;
typedef int PyUFuncObject ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_8 (int *,char*,int *,int *,int *,int) ;
 int FUNC_9 (int *) ;
 int * VAR_1 ;
 int * FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(PyUFuncObject *VAR_2,
                    PyArrayObject **VAR_3,
                    PyObject *VAR_4,
                    ufunc_full_args VAR_5,
                    int VAR_6)
{
    if (VAR_4 != ((void*)0) && VAR_4 != VAR_1) {
        PyObject *VAR_7;
        PyArrayObject *VAR_8;
        PyObject *VAR_9;


        VAR_9 = FUNC_10(VAR_5);
        if (VAR_9 == ((void*)0)) {
            return -1;
        }
        VAR_7 = FUNC_8(
            VAR_4, "O(OOi)", *VAR_3, VAR_2, VAR_9, VAR_6);
        FUNC_9(VAR_9);

        if (VAR_7 == ((void*)0)) {
            return -1;
        }
        else if (!FUNC_0(VAR_7)) {
            FUNC_7(VAR_0,
                    "__array_prepare__ must return an "
                    "ndarray or subclass thereof");
            FUNC_9(VAR_7);
            return -1;
        }
        VAR_8 = (PyArrayObject *)VAR_7;


        if (VAR_8 == *VAR_3) {
            FUNC_9(VAR_8);
        }

        else if (FUNC_5(VAR_8) != FUNC_5(*VAR_3) ||
                !FUNC_1(FUNC_3(VAR_8),
                                      FUNC_3(*VAR_3),
                                      FUNC_5(VAR_8)) ||
                !FUNC_1(FUNC_6(VAR_8),
                                      FUNC_6(*VAR_3),
                                      FUNC_5(VAR_8)) ||
                !FUNC_4(FUNC_2(VAR_8),
                                    FUNC_2(*VAR_3))) {
            FUNC_7(VAR_0,
                    "__array_prepare__ must return an "
                    "ndarray or subclass thereof which is "
                    "otherwise identical to its input");
            FUNC_9(VAR_8);
            return -1;
        }

        else {
            FUNC_9(*VAR_3);
            *VAR_3 = VAR_8;
        }
    }

    return 0;
}

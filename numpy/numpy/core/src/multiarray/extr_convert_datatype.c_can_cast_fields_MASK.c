
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int NPY_CASTING ;


 int FUNC_0 (int *,int *,int ) ;
 int * FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*,int **,int **) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(PyObject *VAR_0, PyObject *VAR_1, NPY_CASTING VAR_2)
{
    Py_ssize_t VAR_3;
    PyObject *VAR_4;
    PyObject *VAR_5, *VAR_6;

    if (VAR_0 == VAR_1) {
        return 1;
    }
    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
        return 0;
    }
    if (FUNC_3(VAR_0) != FUNC_3(VAR_1)) {
        return 0;
    }


    VAR_3 = 0;
    while (FUNC_2(VAR_0, &VAR_3, &VAR_4, &VAR_5)) {
        if ((VAR_6 = FUNC_1(VAR_1, VAR_4)) == ((void*)0)) {
            return 0;
        }

        if (!FUNC_0(
                        (PyArray_Descr *)FUNC_4(VAR_5, 0),
                        (PyArray_Descr *)FUNC_4(VAR_6, 0),
                        VAR_2)) {
            return 0;
        }
    }

    return 1;
}

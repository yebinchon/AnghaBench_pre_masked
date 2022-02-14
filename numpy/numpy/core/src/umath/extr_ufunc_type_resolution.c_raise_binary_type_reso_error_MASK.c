
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyUFuncObject ;
typedef int PyObject ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (char*,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int **) ;

__attribute__((used)) static int
FUNC_5(PyUFuncObject *VAR_0, PyArrayObject **VAR_1) {
    static PyObject *VAR_2 = ((void*)0);
    PyObject *VAR_3;

    FUNC_4(
        "numpy.core._exceptions", "_UFuncBinaryResolutionError",
        &VAR_2);
    if (VAR_2 == ((void*)0)) {
        return -1;
    }


    VAR_3 = FUNC_2(
        "O(OO)", VAR_0,
        (PyObject *)FUNC_0(VAR_1[0]),
        (PyObject *)FUNC_0(VAR_1[1])
    );
    if (VAR_3 == ((void*)0)){
        return -1;
    }
    FUNC_1(VAR_2, VAR_3);
    FUNC_3(VAR_3);

    return -1;
}

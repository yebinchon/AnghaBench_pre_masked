
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef int NPY_CLIPMODE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char**,int ,int **,int ,int *) ;
 int FUNC_1 (int *,char*,int **) ;
 scalar_t__ FUNC_2 (int *,int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static PyObject *
FUNC_5(PyArrayObject *VAR_3, PyObject *VAR_4, PyObject *VAR_5)
{
    static char *VAR_6[] = {"out", "mode", ((void*)0)};
    PyObject *VAR_7;
    PyArrayObject *VAR_8 = ((void*)0);
    NPY_CLIPMODE VAR_9 = VAR_0;
    Py_ssize_t VAR_10 = FUNC_4(VAR_4);

    if (VAR_10 <= 1) {
        if (!FUNC_1(VAR_4, "O:choose", &VAR_7)) {
            return ((void*)0);
        }
    }
    else {
        VAR_7 = VAR_4;
    }

    if (!FUNC_0(VAR_5, "|O&O&", VAR_6,
                VAR_2, &VAR_8,
                VAR_1, &VAR_9)) {
        return ((void*)0);
    }

    return FUNC_3((PyArrayObject *)FUNC_2(VAR_3, VAR_7, VAR_8, VAR_9));
}

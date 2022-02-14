
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,int *,char*,char**,int*,int*,int*) ;
 scalar_t__ FUNC_1 (int *,int,int,int) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_0, PyObject *VAR_1, PyObject *VAR_2)
{
    int VAR_3 = 0, VAR_4 = 1, VAR_5 = 0;
    static char *VAR_6[] = {"offset", "axis1", "axis2", ((void*)0)};
    PyArrayObject *VAR_7;

    if (!FUNC_0(VAR_1, VAR_2, "|iii:diagonal", VAR_6,
                                     &VAR_5,
                                     &VAR_3,
                                     &VAR_4)) {
        return ((void*)0);
    }

    VAR_7 = (PyArrayObject *)FUNC_1(VAR_0, VAR_5, VAR_3, VAR_4);
    return FUNC_2(VAR_7);
}

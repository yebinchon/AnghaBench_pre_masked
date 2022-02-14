
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,int *,char*,char**,int **,int ,int **,int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,int,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static PyObject *
FUNC_3(PyArrayObject *VAR_2, PyObject *VAR_3, PyObject *VAR_4)
{
    PyArray_Descr *VAR_5 = ((void*)0);
    int VAR_6 = 0;
    PyObject *VAR_7;
    static char *VAR_8[] = {"value", "dtype", "offset", 0};

    if (!FUNC_0(VAR_3, VAR_4, "OO&|i:setfield", VAR_8,
                                     &VAR_7,
                                     VAR_0, &VAR_5,
                                     &VAR_6)) {
        FUNC_2(VAR_5);
        return ((void*)0);
    }

    if (FUNC_1(VAR_2, VAR_5, VAR_6, VAR_7) < 0) {
        return ((void*)0);
    }
    VAR_1;
}

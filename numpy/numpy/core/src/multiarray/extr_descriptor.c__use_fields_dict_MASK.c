
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;


 int * FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char*,char*,int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static PyArray_Descr *
FUNC_3(PyObject *VAR_0, int VAR_1)
{
    PyObject *VAR_2;
    PyArray_Descr *VAR_3;

    VAR_2 = FUNC_0("numpy.core._internal");
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_3 = (PyArray_Descr *)FUNC_1(VAR_2,
            "_usefields", "Oi", VAR_0, VAR_1);
    FUNC_2(VAR_2);
    return VAR_3;
}

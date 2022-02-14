
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyTypeObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,char*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static PyArray_Descr *
FUNC_5(PyTypeObject *VAR_1)
{
    PyObject *VAR_2;
    PyObject *VAR_3;


    VAR_2 = FUNC_1("numpy.core._dtype_ctypes");
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_3 = FUNC_2(VAR_2, "dtype_from_ctypes_type", "O", (PyObject *)VAR_1);
    FUNC_4(VAR_2);
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }





    if (!FUNC_3(VAR_3, &VAR_0)) {
        FUNC_4(VAR_3);
        FUNC_0();
        return ((void*)0);
    }

    return (PyArray_Descr *)VAR_3;
}

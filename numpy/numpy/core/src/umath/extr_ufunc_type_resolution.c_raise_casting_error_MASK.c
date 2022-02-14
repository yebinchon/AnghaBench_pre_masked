
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyUFuncObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int NPY_CASTING ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (char*,int *,int *,int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(
        PyObject *VAR_0,
        PyUFuncObject *VAR_1,
        NPY_CASTING VAR_2,
        PyArray_Descr *VAR_3,
        PyArray_Descr *VAR_4,
        npy_intp VAR_5)
{
    PyObject *VAR_6;
    PyObject *VAR_7;

    VAR_7 = FUNC_3(VAR_2);
    if (VAR_7 == ((void*)0)) {
        return -1;
    }

    VAR_6 = FUNC_1(
        "ONOOi",
        VAR_1,
        VAR_7,
        (PyObject *)VAR_3,
        (PyObject *)VAR_4,
        VAR_5
    );
    if (VAR_6 == ((void*)0)){
        return -1;
    }
    FUNC_0(VAR_0, VAR_6);
    FUNC_2(VAR_6);

    return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyObject ;
typedef int PyArray_Descr ;


 int * FUNC_0 (int,int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int **) ;

__attribute__((used)) static PyObject *
FUNC_7(int VAR_0, npy_intp *VAR_1, PyArray_Descr *VAR_2)
{
    static PyObject *VAR_3 = ((void*)0);

    FUNC_6(
        "numpy.core._exceptions", "_ArrayMemoryError",
        &VAR_3);
    if (VAR_3 == ((void*)0)) {
        goto fail;
    }

    PyObject *VAR_4 = FUNC_0(VAR_0, VAR_1);
    if (VAR_4 == ((void*)0)) {
        goto fail;
    }


    PyObject *VAR_5 = FUNC_4(2, VAR_4, (PyObject *)VAR_2);
    FUNC_5(VAR_4);
    if (VAR_5 == ((void*)0)){
        goto fail;
    }
    FUNC_2(VAR_3, VAR_5);
    FUNC_5(VAR_5);
    return ((void*)0);

fail:

    FUNC_3(((void*)0));
    return FUNC_1();
}

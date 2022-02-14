
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_intp ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static PyObject *
FUNC_7(PyArrayObject *VAR_1)
{



    npy_intp VAR_2;
    if (!(FUNC_0(VAR_1))) {
        FUNC_5(VAR_0, "cannot get single-" "segment buffer for discontiguous array");

        return ((void*)0);
    }
    VAR_2 = FUNC_2(VAR_1);
    if (FUNC_1(VAR_1)) {
        return FUNC_4((PyObject *)VAR_1, 0, (Py_ssize_t) VAR_2);
    }
    else {
        return FUNC_3((PyObject *)VAR_1, 0, (Py_ssize_t) VAR_2);
    }

}

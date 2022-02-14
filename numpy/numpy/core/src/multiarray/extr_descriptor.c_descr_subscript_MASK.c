
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyArray_Descr ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static PyObject *
FUNC_11(PyArray_Descr *VAR_1, PyObject *VAR_2)
{
    if (FUNC_5(VAR_1) < 0) {
        return ((void*)0);
    }

    if (FUNC_1(VAR_2)) {
        return FUNC_8(VAR_1, VAR_2);
    }
    else if (FUNC_6(VAR_2)) {
        return (PyObject *)FUNC_9(VAR_1, VAR_2);
    }
    else {
        Py_ssize_t VAR_3 = FUNC_0(VAR_2);
        if (FUNC_10(VAR_3)) {

            PyObject *VAR_4 = FUNC_3();
            if (FUNC_2(VAR_4, VAR_0)) {
                FUNC_4(VAR_0,
                        "Field key must be an integer field offset, "
                        "single field name, or list of field names.");
            }
            return ((void*)0);
        }
        return FUNC_7(VAR_1, VAR_3);
    }
}

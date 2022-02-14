
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (scalar_t__,int *,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static PyObject *
FUNC_13(PyArrayObject *VAR_1, PyObject *VAR_2)
{
    PyObject *VAR_3;
    PyArrayObject *VAR_4;
    PyArray_Descr *VAR_5;

    if (FUNC_10(VAR_2) < 1) {
        FUNC_8(VAR_0,
                        "only accepts 1 argument");
        return ((void*)0);
    }
    VAR_3 = FUNC_9(VAR_2, 0);
    if (!FUNC_0(VAR_3)) {
        FUNC_8(VAR_0,
                        "can only be called with ndarray object");
        return ((void*)0);
    }
    VAR_4 = (PyArrayObject *)VAR_3;

    if (FUNC_12(VAR_1) == FUNC_12(VAR_4)) {

        FUNC_11(VAR_4);
        return (PyObject *)VAR_4;
    }

    VAR_5 = FUNC_2(VAR_4);
    FUNC_11(VAR_5);
    return FUNC_6(
            FUNC_12(VAR_1), VAR_5,
            FUNC_5(VAR_4), FUNC_3(VAR_4), FUNC_7(VAR_4),
            FUNC_1(VAR_4),
            FUNC_4(VAR_4), (PyObject *)VAR_1, (PyObject *)VAR_4);
}

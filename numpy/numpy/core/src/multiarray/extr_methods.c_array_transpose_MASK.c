
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyArray_Dims ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static PyObject *
FUNC_5(PyArrayObject *VAR_1, PyObject *VAR_2)
{
    PyObject *VAR_3 = VAR_0;
    Py_ssize_t VAR_4 = FUNC_3(VAR_2);
    PyArray_Dims VAR_5;
    PyObject *VAR_6;

    if (VAR_4 > 1) {
        VAR_3 = VAR_2;
    }
    else if (VAR_4 == 1) {
        VAR_3 = FUNC_2(VAR_2, 0);
    }

    if (VAR_3 == VAR_0) {
        VAR_6 = FUNC_1(VAR_1, ((void*)0));
    }
    else {
        if (!FUNC_0(VAR_3, &VAR_5)) {
            return ((void*)0);
        }
        VAR_6 = FUNC_1(VAR_1, &VAR_5);
        FUNC_4(VAR_5);
    }

    return VAR_6;
}

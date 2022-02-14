
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int * FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static PyObject *
FUNC_7(PyArrayObject *VAR_0, PyObject *VAR_1, PyObject *VAR_2,
                            PyObject *VAR_3)
{
    PyObject *VAR_4, *VAR_5;
    int VAR_6, VAR_7;


    VAR_7 = FUNC_2(VAR_1);
    VAR_4 = FUNC_3(VAR_7 + 1);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_6(VAR_0);
    FUNC_4(VAR_4, 0, (PyObject *)VAR_0);
    for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {
        PyObject *VAR_8 = FUNC_1(VAR_1, VAR_6);
        FUNC_6(VAR_8);
        FUNC_4(VAR_4, VAR_6+1, VAR_8);
    }


    VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2);
    FUNC_5(VAR_4);
    return VAR_5;
}

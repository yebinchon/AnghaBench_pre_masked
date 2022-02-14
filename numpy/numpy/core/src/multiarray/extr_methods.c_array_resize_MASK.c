
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyArray_Dims ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char**,int*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static PyObject *
FUNC_9(PyArrayObject *VAR_4, PyObject *VAR_5, PyObject *VAR_6)
{
    static char *VAR_7[] = {"refcheck", ((void*)0)};
    Py_ssize_t VAR_8 = FUNC_6(VAR_5);
    int VAR_9 = 1;
    PyArray_Dims VAR_10;
    PyObject *VAR_11, *VAR_12;


    if (!FUNC_0(VAR_6, "|i", VAR_7, &VAR_9)) {
        return ((void*)0);
    }

    if (VAR_8 == 0) {
        VAR_3;
    }
    else if (VAR_8 == 1) {
        VAR_12 = FUNC_5(VAR_5, 0);
        if (VAR_12 == VAR_2) {
            VAR_3;
        }
        VAR_5 = VAR_12;
    }
    if (!FUNC_1(VAR_5, &VAR_10)) {
        if (!FUNC_3()) {
            FUNC_4(VAR_1, "invalid shape");
        }
        return ((void*)0);
    }

    VAR_11 = FUNC_2(VAR_4, &VAR_10, VAR_9, VAR_0);
    FUNC_8(VAR_10);
    if (VAR_11 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_7(VAR_11);
    VAR_3;
}

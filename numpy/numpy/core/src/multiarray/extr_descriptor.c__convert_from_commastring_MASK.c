
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;


 int VAR_0 ;
 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,char*,char*,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int) ;

__attribute__((used)) static PyArray_Descr *
FUNC_11(PyObject *VAR_3, int VAR_4)
{
    PyObject *VAR_5;
    PyArray_Descr *VAR_6;
    PyObject *VAR_7;

    if (!FUNC_1(VAR_3)) {
        return ((void*)0);
    }
    VAR_7 = FUNC_4("numpy.core._internal");
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_5 = FUNC_8(VAR_7, "_commastring", "O", VAR_3);
    FUNC_9(VAR_7);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }
    if (!FUNC_5(VAR_5) || FUNC_7(VAR_5) < 1) {
        FUNC_3(VAR_1,
                "_commastring is not returning a list with len >= 1");
        FUNC_9(VAR_5);
        return ((void*)0);
    }
    if (FUNC_7(VAR_5) == 1) {
        int VAR_8;
        VAR_8 = FUNC_0(FUNC_6(VAR_5, 0),
                                                &VAR_6);
        if (VAR_8 == VAR_0) {
            VAR_6 = ((void*)0);
        }
    }
    else {
        VAR_6 = FUNC_10(VAR_5, VAR_4);
    }
    FUNC_9(VAR_5);
    if (!VAR_6 && !FUNC_2()) {
        FUNC_3(VAR_2,
                "invalid data-type");
        return ((void*)0);
    }
    return VAR_6;
}

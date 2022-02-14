
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;

__attribute__((used)) static PyObject *
FUNC_11(PyArrayObject *VAR_0)
{
    PyObject *VAR_1;
    PyObject *VAR_2;

    VAR_1 = FUNC_1();
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    if (FUNC_6(VAR_0) < 0) {
        FUNC_4(VAR_1);
        return ((void*)0);
    }


    VAR_2 = FUNC_5(VAR_0);
    FUNC_2(VAR_1, "data", VAR_2);
    FUNC_4(VAR_2);

    VAR_2 = FUNC_8(VAR_0);
    FUNC_2(VAR_1, "strides", VAR_2);
    FUNC_4(VAR_2);

    VAR_2 = FUNC_7(VAR_0);
    FUNC_2(VAR_1, "descr", VAR_2);
    FUNC_4(VAR_2);

    VAR_2 = FUNC_10(FUNC_0(VAR_0));
    FUNC_2(VAR_1, "typestr", VAR_2);
    FUNC_4(VAR_2);

    VAR_2 = FUNC_9(VAR_0);
    FUNC_2(VAR_1, "shape", VAR_2);
    FUNC_4(VAR_2);

    VAR_2 = FUNC_3(3);
    FUNC_2(VAR_1, "version", VAR_2);
    FUNC_4(VAR_2);

    return VAR_1;
}

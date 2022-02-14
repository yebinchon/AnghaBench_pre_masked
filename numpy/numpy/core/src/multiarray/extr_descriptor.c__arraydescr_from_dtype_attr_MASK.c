
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;


 int VAR_0 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 () ;

int
FUNC_7(PyObject *VAR_2, PyArray_Descr **VAR_3)
{
    PyObject *VAR_4;
    int VAR_5;


    VAR_4 = FUNC_3(VAR_2, "dtype");
    if (VAR_4 == ((void*)0)) {




        goto fail;
    }

    if (FUNC_5(
            " while trying to convert the given data type from its "
            "`.dtype` attribute.") != 0) {
        FUNC_4(VAR_4);
        return 1;
    }

    VAR_5 = FUNC_0(VAR_4, VAR_3);

    FUNC_4(VAR_4);
    FUNC_6();
    if (VAR_5 != VAR_0) {
        goto fail;
    }

    return 1;

  fail:

    if (!FUNC_2(VAR_1)) {
        FUNC_1();
        return 0;
    }
    return 1;
}

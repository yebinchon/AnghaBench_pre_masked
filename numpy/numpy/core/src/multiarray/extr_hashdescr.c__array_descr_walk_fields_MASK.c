
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyArray_Descr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static int FUNC_13(PyObject *VAR_1, PyObject* VAR_2, PyObject* VAR_3)
{
    PyObject *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8;
    Py_ssize_t VAR_9 = 0;
    int VAR_10;

    if (!FUNC_6(VAR_1)) {
        FUNC_3(VAR_0,
                "(Hash) names is not a tuple ???");
        return -1;
    }
    if (!FUNC_1(VAR_2)) {
        FUNC_3(VAR_0,
                "(Hash) fields is not a dict ???");
        return -1;
    }

    for (VAR_9 = 0; VAR_9 < FUNC_8(VAR_1); VAR_9++) {



        VAR_4 = FUNC_7(VAR_1, VAR_9);
        VAR_5 = FUNC_2(VAR_2, VAR_4);

        if (VAR_5 == ((void*)0)) {
            FUNC_3(VAR_0,
                    "(Hash) names and fields inconsistent ???");
            return -1;
        }
        if (!FUNC_9(VAR_4)) {
            FUNC_3(VAR_0,
                    "(Hash) key of dtype dict not a string ???");
            return -1;
        }
        if (!FUNC_6(VAR_5)) {
            FUNC_3(VAR_0,
                    "(Hash) value of dtype dict not a dtype ???");
            return -1;
        }
        if (FUNC_8(VAR_5) < 2) {
            FUNC_3(VAR_0,
                    "(Hash) Less than 2 items in dtype dict ???");
            return -1;
        }
        FUNC_5(VAR_3, VAR_4);

        VAR_7 = FUNC_7(VAR_5, 0);
        if (!FUNC_0(VAR_7)) {
            FUNC_3(VAR_0,
                    "(Hash) First item in compound dtype tuple not a descr ???");
            return -1;
        }
        else {
            FUNC_11(VAR_7);
            VAR_10 = FUNC_12((PyArray_Descr*)VAR_7, VAR_3);
            FUNC_10(VAR_7);
            if (VAR_10) {
                return -1;
            }
        }

        VAR_6 = FUNC_7(VAR_5, 1);
        if (!FUNC_4(VAR_6)) {
            FUNC_3(VAR_0,
                    "(Hash) Second item in compound dtype tuple not an int ???");
            return -1;
        }
        else {
            FUNC_5(VAR_3, VAR_6);
        }

        if (FUNC_8(VAR_5) > 2) {
            VAR_8 = FUNC_7(VAR_5, 2);
            FUNC_5(VAR_3, VAR_8);
        }
    }

    return 0;
}

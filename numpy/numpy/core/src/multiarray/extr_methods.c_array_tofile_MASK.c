
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_off_t ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef int FILE ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char*,char**,int **,char**,char**) ;
 scalar_t__ FUNC_2 (int *,int *,char*,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *,char*,int *) ;
 scalar_t__ FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static PyObject *
FUNC_11(PyArrayObject *VAR_1, PyObject *VAR_2, PyObject *VAR_3)
{
    int VAR_4;
    PyObject *VAR_5;
    FILE *VAR_6;
    char *VAR_7 = "";
    char *VAR_8 = "";
    npy_off_t VAR_9 = 0;
    static char *VAR_10[] = {"file", "sep", "format", ((void*)0)};

    if (!FUNC_1(VAR_2, VAR_3, "O|ss:tofile", VAR_10,
                                     &VAR_5,
                                     &VAR_7,
                                     &VAR_8)) {
        return ((void*)0);
    }

    VAR_5 = FUNC_0(VAR_5);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }
    if (FUNC_3(VAR_5) || FUNC_4(VAR_5)) {
        FUNC_6(VAR_5, FUNC_10(VAR_5, "wb"));
        if (VAR_5 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_4 = 1;
    }
    else {
        VAR_4 = 0;
    }

    VAR_6 = FUNC_8(VAR_5, "wb", &VAR_9);
    if (VAR_6 == ((void*)0)) {
        goto fail;
    }
    if (FUNC_2(VAR_1, VAR_6, VAR_7, VAR_8) < 0) {
        goto fail;
    }
    if (FUNC_9(VAR_5, VAR_6, VAR_9) < 0) {
        goto fail;
    }
    if (VAR_4 && FUNC_7(VAR_5) < 0) {
        goto fail;
    }
    FUNC_5(VAR_5);
    VAR_0;

fail:
    FUNC_5(VAR_5);
    return ((void*)0);
}

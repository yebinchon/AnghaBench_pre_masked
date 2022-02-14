
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _tmp_string_t ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;


 scalar_t__ FUNC_0 (int *,char**,scalar_t__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char) ;

__attribute__((used)) static int
FUNC_7(_tmp_string_t *VAR_1, PyObject *VAR_2)
{
    int VAR_3 = -1;
    char *VAR_4;
    Py_ssize_t VAR_5;
    PyObject *VAR_6;




    VAR_6 = VAR_2;
    FUNC_4(VAR_6);

    if (VAR_6 == ((void*)0) || FUNC_0(VAR_6, &VAR_4, &VAR_5) < 0) {
        FUNC_1();
        FUNC_2(VAR_0, "invalid field name");
        goto fail;
    }
    if (FUNC_6(VAR_1, ':') < 0) {
        goto fail;
    }
    while (VAR_5 > 0) {
        if (*VAR_4 == ':') {
            FUNC_2(VAR_0,
                            "':' is not an allowed character in buffer "
                            "field names");
            goto fail;
        }
        if (FUNC_6(VAR_1, *VAR_4) < 0) {
            goto fail;
        }
        ++VAR_4;
        --VAR_5;
    }
    if (FUNC_6(VAR_1, ':') < 0) {
        goto fail;
    }
    VAR_3 = 0;
fail:
    FUNC_5(VAR_6);
    return VAR_3;
}

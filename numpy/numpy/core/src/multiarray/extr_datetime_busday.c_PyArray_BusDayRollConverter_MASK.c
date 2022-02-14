
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int NPY_BUSDAY_ROLL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,char**,int*) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_8 ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(PyObject *VAR_9, NPY_BUSDAY_ROLL *VAR_10)
{
    PyObject *VAR_11 = VAR_9;
    char *VAR_12;
    Py_ssize_t VAR_13;


    FUNC_5(VAR_11);
    if (FUNC_3(VAR_11)) {

        PyObject *VAR_14;
        VAR_14 = FUNC_2(VAR_11);
        if (VAR_14 == ((void*)0)) {
            FUNC_4(VAR_11);
            return 0;
        }
        FUNC_4(VAR_11);
        VAR_11 = VAR_14;
    }

    if (FUNC_0(VAR_11, &VAR_12, &VAR_13) < 0) {
        FUNC_4(VAR_11);
        return 0;
    }


    switch (VAR_12[0]) {
        case 'b':
            if (FUNC_6(VAR_12, "backward") == 0) {
                *VAR_10 = VAR_0;
                goto finish;
            }
            break;
        case 'f':
            if (VAR_13 > 2) switch (VAR_12[2]) {
                case 'r':
                    if (FUNC_6(VAR_12, "forward") == 0) {
                        *VAR_10 = VAR_2;
                        goto finish;
                    }
                    break;
                case 'l':
                    if (FUNC_6(VAR_12, "following") == 0) {
                        *VAR_10 = VAR_1;
                        goto finish;
                    }
                    break;
            }
            break;
        case 'm':
            if (VAR_13 > 8) switch (VAR_12[8]) {
                case 'f':
                    if (FUNC_6(VAR_12, "modifiedfollowing") == 0) {
                        *VAR_10 = VAR_3;
                        goto finish;
                    }
                    break;
                case 'p':
                    if (FUNC_6(VAR_12, "modifiedpreceding") == 0) {
                        *VAR_10 = VAR_4;
                        goto finish;
                    }
                    break;
            }
            break;
        case 'n':
            if (FUNC_6(VAR_12, "nat") == 0) {
                *VAR_10 = VAR_5;
                goto finish;
            }
            break;
        case 'p':
            if (FUNC_6(VAR_12, "preceding") == 0) {
                *VAR_10 = VAR_6;
                goto finish;
            }
            break;
        case 'r':
            if (FUNC_6(VAR_12, "raise") == 0) {
                *VAR_10 = VAR_7;
                goto finish;
            }
            break;
    }

    FUNC_1(VAR_8,
            "Invalid business day roll parameter \"%s\"",
            VAR_12);
    FUNC_4(VAR_11);
    return 0;

finish:
    FUNC_4(VAR_11);
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef int Py_ssize_t ;
typedef int PyObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int *,char**,int*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_13 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * VAR_14 ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static int
FUNC_11(PyObject *VAR_15, npy_uint32 *VAR_16)
{
    npy_uint32 VAR_17 = 0;
    int VAR_18, VAR_19;

    PyObject *VAR_20;
    char *VAR_21 = ((void*)0);
    Py_ssize_t VAR_22 = 0;
    npy_uint32 VAR_23;

    if (VAR_15 == ((void*)0) || VAR_15 == VAR_14) {
        return 1;
    }

    if (!FUNC_6(VAR_15) && !FUNC_3(VAR_15)) {
        FUNC_2(VAR_13,
                "Iterator global flags must be a list or tuple of strings");
        return 0;
    }

    VAR_19 = FUNC_5(VAR_15);

    for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18) {
        VAR_20 = FUNC_4(VAR_15, VAR_18);
        if (VAR_20 == ((void*)0)) {
            return 0;
        }

        if (FUNC_8(VAR_20)) {

            PyObject *VAR_24;
            VAR_24 = FUNC_7(VAR_20);
            if (VAR_24 == ((void*)0)) {
                FUNC_9(VAR_20);
                return 0;
            }
            FUNC_9(VAR_20);
            VAR_20 = VAR_24;
        }

        if (FUNC_0(VAR_20, &VAR_21, &VAR_22) < 0) {
            FUNC_9(VAR_20);
            return 0;
        }

        VAR_23 = 0;
        switch (VAR_21[0]) {
            case 'b':
                if (FUNC_10(VAR_21, "buffered") == 0) {
                    VAR_23 = VAR_0;
                }
                break;
            case 'c':
                if (VAR_22 >= 6) switch (VAR_21[5]) {
                    case 'e':
                        if (FUNC_10(VAR_21, "c_index") == 0) {
                            VAR_23 = VAR_3;
                        }
                        break;
                    case 'i':
                        if (FUNC_10(VAR_21, "copy_if_overlap") == 0) {
                            VAR_23 = VAR_2;
                        }
                        break;
                    case 'n':
                        if (FUNC_10(VAR_21, "common_dtype") == 0) {
                            VAR_23 = VAR_1;
                        }
                        break;
                }
                break;
            case 'd':
                if (FUNC_10(VAR_21, "delay_bufalloc") == 0) {
                    VAR_23 = VAR_4;
                }
                break;
            case 'e':
                if (FUNC_10(VAR_21, "external_loop") == 0) {
                    VAR_23 = VAR_5;
                }
                break;
            case 'f':
                if (FUNC_10(VAR_21, "f_index") == 0) {
                    VAR_23 = VAR_6;
                }
                break;
            case 'g':




                if (FUNC_10(VAR_21, "grow_inner") == 0 ||
                            FUNC_10(VAR_21, "growinner") == 0) {
                    VAR_23 = VAR_7;
                }
                break;
            case 'm':
                if (FUNC_10(VAR_21, "multi_index") == 0) {
                    VAR_23 = VAR_8;
                }
                break;
            case 'r':
                if (FUNC_10(VAR_21, "ranged") == 0) {
                    VAR_23 = VAR_9;
                }
                else if (FUNC_10(VAR_21, "refs_ok") == 0) {
                    VAR_23 = VAR_11;
                }
                else if (FUNC_10(VAR_21, "reduce_ok") == 0) {
                    VAR_23 = VAR_10;
                }
                break;
            case 'z':
                if (FUNC_10(VAR_21, "zerosize_ok") == 0) {
                    VAR_23 = VAR_12;
                }
                break;
        }
        if (VAR_23 == 0) {
            FUNC_1(VAR_13,
                    "Unexpected iterator global flag \"%s\"", VAR_21);
            FUNC_9(VAR_20);
            return 0;
        }
        else {
            VAR_17 |= VAR_23;
        }
        FUNC_9(VAR_20);
    }

    *VAR_16 |= VAR_17;
    return 1;
}

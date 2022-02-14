
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
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int *,char**,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_15 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static int
FUNC_12(PyObject *VAR_16,
                         npy_uint32 *VAR_17)
{
    int VAR_18, VAR_19;
    npy_uint32 VAR_20;

    if (!FUNC_7(VAR_16) && !FUNC_4(VAR_16)) {
        FUNC_3(VAR_15,
                "op_flags must be a tuple or array of per-op flag-tuples");
        return 0;
    }

    VAR_19 = FUNC_6(VAR_16);

    *VAR_17 = 0;
    for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18) {
        PyObject *VAR_21;
        char *VAR_22 = ((void*)0);
        Py_ssize_t VAR_23 = 0;

        VAR_21 = FUNC_5(VAR_16, VAR_18);
        if (VAR_21 == ((void*)0)) {
            return 0;
        }

        if (FUNC_9(VAR_21)) {

            PyObject *VAR_24;
            VAR_24 = FUNC_8(VAR_21);
            if (VAR_24 == ((void*)0)) {
                FUNC_10(VAR_21);
                return 0;
            }
            FUNC_10(VAR_21);
            VAR_21 = VAR_24;
        }

        if (FUNC_0(VAR_21, &VAR_22, &VAR_23) < 0) {
            FUNC_1();
            FUNC_10(VAR_21);
            FUNC_3(VAR_15,
                   "op_flags must be a tuple or array of per-op flag-tuples");
            return 0;
        }


        VAR_20 = 0;
        switch (VAR_22[0]) {
            case 'a':
                if (VAR_23 > 2) switch(VAR_22[2]) {
                    case 'i':
                        if (FUNC_11(VAR_22, "aligned") == 0) {
                            VAR_20 = VAR_0;
                        }
                        break;
                    case 'l':
                        if (FUNC_11(VAR_22, "allocate") == 0) {
                            VAR_20 = VAR_1;
                        }
                        break;
                    case 'r':
                        if (FUNC_11(VAR_22, "arraymask") == 0) {
                            VAR_20 = VAR_2;
                        }
                        break;
                }
                break;
            case 'c':
                if (FUNC_11(VAR_22, "copy") == 0) {
                    VAR_20 = VAR_4;
                }
                if (FUNC_11(VAR_22, "contig") == 0) {
                    VAR_20 = VAR_3;
                }
                break;
            case 'n':
                switch (VAR_22[1]) {
                    case 'b':
                        if (FUNC_11(VAR_22, "nbo") == 0) {
                            VAR_20 = VAR_5;
                        }
                        break;
                    case 'o':
                        if (FUNC_11(VAR_22, "no_subtype") == 0) {
                            VAR_20 = VAR_7;
                        }
                        else if (FUNC_11(VAR_22, "no_broadcast") == 0) {
                            VAR_20 = VAR_6;
                        }
                        break;
                }
                break;
            case 'o':
                if (FUNC_11(VAR_22, "overlap_assume_elementwise") == 0) {
                    VAR_20 = VAR_8;
                }
                break;
            case 'r':
                if (VAR_23 > 4) switch (VAR_22[4]) {
                    case 'o':
                        if (FUNC_11(VAR_22, "readonly") == 0) {
                            VAR_20 = VAR_9;
                        }
                        break;
                    case 'w':
                        if (FUNC_11(VAR_22, "readwrite") == 0) {
                            VAR_20 = VAR_10;
                        }
                        break;
                }
                break;
            case 'u':
                switch (VAR_22[1]) {
                    case 'p':
                        if (FUNC_11(VAR_22, "updateifcopy") == 0) {
                            VAR_20 = VAR_11;
                        }
                        break;
                }
                break;
            case 'v':
                if (FUNC_11(VAR_22, "virtual") == 0) {
                    VAR_20 = VAR_12;
                }
                break;
            case 'w':
                if (VAR_23 > 5) switch (VAR_22[5]) {
                    case 'o':
                        if (FUNC_11(VAR_22, "writeonly") == 0) {
                            VAR_20 = VAR_14;
                        }
                        break;
                    case 'm':
                        if (FUNC_11(VAR_22, "writemasked") == 0) {
                            VAR_20 = VAR_13;
                        }
                        break;
                }
                break;
        }
        if (VAR_20 == 0) {
            FUNC_2(VAR_15,
                    "Unexpected per-op iterator flag \"%s\"", VAR_22);
            FUNC_10(VAR_21);
            return 0;
        }
        else {
            *VAR_17 |= VAR_20;
        }
        FUNC_10(VAR_21);
    }

    return 1;
}

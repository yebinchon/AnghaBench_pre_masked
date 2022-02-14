
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_7__ {int two; int nd; int* shape; } ;
struct TYPE_6__ {int ndim; int* shape; int len; } ;
typedef TYPE_1__ Py_buffer ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef TYPE_2__ PyArrayInterface ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *,char*) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,TYPE_1__*,int) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 (int *,char*) ;
 int * FUNC_20 (int *,int) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int *) ;
 int FUNC_25 (int *,int) ;
 int FUNC_26 (int *) ;
 scalar_t__ FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_31(PyObject *VAR_9, int *VAR_10, npy_intp *VAR_11, int VAR_12,
                                    int VAR_13, int VAR_14,
                                    int *VAR_15)
{
    PyObject *VAR_16;
    npy_intp VAR_17, VAR_18;
    Py_buffer VAR_19;
    PyObject * VAR_20;

    if (*VAR_10 == 0) {
        return 0;
    }


    if (FUNC_2(VAR_9)) {
        PyArrayObject *VAR_21 = (PyArrayObject *)VAR_9;

        if (FUNC_6(VAR_21) < *VAR_10) {
            *VAR_10 = FUNC_6(VAR_21);
        }

        for (VAR_18=0; VAR_18<*VAR_10; VAR_18++) {
            VAR_11[VAR_18] = FUNC_3(VAR_21,VAR_18);
        }
        return 0;
    }


    if (FUNC_4(VAR_9, VAR_0)) {
        *VAR_10 = 0;
        return 0;
    }


    if (!FUNC_18(VAR_9) ||
            FUNC_22(VAR_9) < 0) {
        *VAR_10 = 0;
        FUNC_11();
        return 0;
    }


    if (FUNC_23(VAR_9) ||


            FUNC_7(VAR_9) ||

            FUNC_27(VAR_9)) {
        if (VAR_13) {
            *VAR_10 = 0;
        }
        else {
            VAR_11[0] = FUNC_22(VAR_9);
            *VAR_10 = 1;
        }
        return 0;
    }


    if (VAR_14 && FUNC_24(VAR_9)) {
        *VAR_10 = 0;
        return 0;
    }



    if (FUNC_16(VAR_9) == 1) {
        FUNC_30(&VAR_19, 0, sizeof(Py_buffer));
        if (FUNC_17(VAR_9, &VAR_19,
                    VAR_4|VAR_3) == 0 ||
                FUNC_17(VAR_9, &VAR_19,
                    VAR_2|VAR_3) == 0) {
            int VAR_22 = VAR_19.ndim;

            if (VAR_22 < *VAR_10) {
                *VAR_10 = VAR_22;
            }
            for (VAR_18 = 0; VAR_18 < *VAR_10; VAR_18++) {
                VAR_11[VAR_18] = VAR_19.shape[VAR_18];
            }
            FUNC_8(&VAR_19);
            FUNC_29(VAR_9);
            return 0;
        }
        else if (FUNC_13()) {
            if (FUNC_12(VAR_5) ||
                    FUNC_12(VAR_8)) {
                FUNC_11();
            } else {
                return -1;
            }
        }
        else if (FUNC_17(VAR_9, &VAR_19, VAR_3) == 0) {
            VAR_11[0] = VAR_19.len;
            *VAR_10 = 1;
            FUNC_8(&VAR_19);
            FUNC_29(VAR_9);
            return 0;
        }
        else if (FUNC_13()) {
            if (FUNC_12(VAR_5) ||
                    FUNC_12(VAR_8)) {
                FUNC_11();
            } else {
                return -1;
            }
        }
    }


    VAR_16 = FUNC_5(VAR_9, "__array_struct__");
    if (VAR_16 != ((void*)0)) {
        int VAR_23 = -1;

        if (FUNC_1(VAR_16)) {
            PyArrayInterface *VAR_24;
            VAR_24 = (PyArrayInterface *)FUNC_0(VAR_16);
            if (VAR_24->two == 2) {
                VAR_23 = VAR_24->nd;
                if (VAR_23 >= 0) {
                    if (VAR_23 < *VAR_10) {
                        *VAR_10 = VAR_23;
                    }
                    for (VAR_18=0; VAR_18<*VAR_10; VAR_18++) {
                        VAR_11[VAR_18] = VAR_24->shape[VAR_18];
                    }
                }
            }
        }
        FUNC_28(VAR_16);
        if (VAR_23 >= 0) {
            return 0;
        }
    }
    else if (FUNC_13()) {
        FUNC_11();
    }



    VAR_16 = FUNC_5(VAR_9, "__array_interface__");
    if (VAR_16 != ((void*)0)) {
        int VAR_25 = -1;
        if (FUNC_9(VAR_16)) {
            PyObject *VAR_26;
            VAR_26 = FUNC_10(VAR_16, "shape");
            if (VAR_26 && FUNC_24(VAR_26)) {
                VAR_25 = FUNC_26(VAR_26);
                if (VAR_25 < *VAR_10) {
                    *VAR_10 = VAR_25;
                }
                for (VAR_18=0; VAR_18<*VAR_10; VAR_18++) {
                    VAR_11[VAR_18] = FUNC_15(FUNC_25(VAR_26, VAR_18));
                    if (VAR_11[VAR_18] < 0) {
                        FUNC_14(VAR_7,
                                "Invalid shape in __array_interface__");
                        FUNC_28(VAR_16);
                        return -1;
                    }
                }
            }
        }
        FUNC_28(VAR_16);
        if (VAR_25 >= 0) {
            return 0;
        }
    }
    else if (FUNC_13()) {
        FUNC_11();
    }

    VAR_20 = FUNC_19(VAR_9, "Could not convert object to sequence");
    if (VAR_20 == ((void*)0)) {
        if (FUNC_12(VAR_6)) {
            FUNC_11();
            *VAR_10 = 0;
            *VAR_15 = 1;
            return 0;
        }
        else {
            return -1;
        }
    }
    VAR_17 = FUNC_21(VAR_20);

    VAR_11[0] = VAR_17;


    if (VAR_17 == 0 || *VAR_10 == 1) {
        *VAR_10 = 1;
        FUNC_28(VAR_20);
        return 0;
    }
    else {
        int VAR_27 = *VAR_10 - 1;
        npy_intp *VAR_28 = VAR_11 + 1;
        int VAR_29 = 1;


        PyObject *VAR_30 = FUNC_20(VAR_20, 0);
        if (FUNC_31(
                VAR_30, &VAR_27, VAR_28, VAR_12,
                VAR_13, VAR_14, VAR_15) < 0) {
            FUNC_28(VAR_20);
            return -1;
        }


        for (VAR_18 = 1; VAR_18 < VAR_17; ++VAR_18) {
            int VAR_31;
            int VAR_32 = *VAR_10 - 1;
            npy_intp VAR_33[VAR_1];

            PyObject *VAR_34 = FUNC_20(VAR_20, VAR_18);
            if (FUNC_31(
                    VAR_34, &VAR_32, VAR_33, VAR_12,
                    VAR_13, VAR_14, VAR_15) < 0) {
                FUNC_28(VAR_20);
                return -1;
            }


            for (VAR_31 = 0; VAR_31 < VAR_32 && VAR_31 < VAR_27; ++VAR_31) {
                if (VAR_33[VAR_31] != VAR_28[VAR_31]) {
                    break;
                }
            }
            if (VAR_31 != VAR_32 || VAR_31 != VAR_27) {
                VAR_29 = 0;
            }
            VAR_27 = VAR_31;
        }
        *VAR_10 = VAR_27 + 1;
        if (!VAR_29) {

            *VAR_15 = 1;
        }
    }

    FUNC_28(VAR_20);

    return 0;
}

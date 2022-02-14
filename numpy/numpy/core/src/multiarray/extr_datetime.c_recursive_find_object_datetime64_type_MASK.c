
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int npy_datetime ;
struct TYPE_15__ {int num; int base; } ;
struct TYPE_14__ {scalar_t__ type_num; } ;
struct TYPE_13__ {TYPE_3__ obmeta; } ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_1__ PyDatetimeScalarObject ;
typedef TYPE_2__ PyArray_Descr ;
typedef TYPE_3__ PyArray_DatetimeMetaData ;
typedef int PyArrayObject ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 () ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (int *) ;
 int * FUNC_11 (int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (TYPE_3__*,TYPE_3__*,TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_17 (TYPE_3__*,int *,int ,int *) ;
 int FUNC_18 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_19 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_20(PyObject *VAR_11,
                        PyArray_DatetimeMetaData *VAR_12)
{

    if (FUNC_1(VAR_11)) {
        PyArrayObject *VAR_13 = (PyArrayObject *)VAR_11;
        PyArray_Descr *VAR_14 = FUNC_2(VAR_13);

        if (VAR_14->type_num == VAR_6 ||
                            VAR_14->type_num == VAR_8) {
            return FUNC_18(VAR_13, VAR_12);
        }

        else if (VAR_14->type_num == VAR_1 ||
                    VAR_14->type_num == VAR_7) {
            PyArray_DatetimeMetaData *VAR_15;


            VAR_15 = FUNC_19(VAR_14);
            if (VAR_15 == ((void*)0)) {
                return -1;
            }


            if (FUNC_16(VAR_12,
                            VAR_15, VAR_12, 0, 0) < 0) {
                return -1;
            }

            return 0;
        }

        else if (VAR_14->type_num != VAR_5) {
            return 0;
        }
    }

    else if (FUNC_3(VAR_11, VAR_0)) {
        PyDatetimeScalarObject *VAR_16 = (PyDatetimeScalarObject *)VAR_11;


        if (FUNC_16(VAR_12,
                        &VAR_16->obmeta, VAR_12, 0, 0) < 0) {
            return -1;
        }

        return 0;
    }

    else if (FUNC_4(VAR_11) || FUNC_13(VAR_11)) {
        npy_datetime VAR_17 = 0;
        PyArray_DatetimeMetaData VAR_18;

        VAR_18.base = VAR_3;
        VAR_18.num = 1;

        if (FUNC_17(&VAR_18, VAR_11,
                                        VAR_9, &VAR_17) < 0) {

            if (FUNC_9() &&
                    FUNC_8(FUNC_9(),
                                    VAR_10)) {
                FUNC_7();
                return 0;
            }

            else {
                return -1;
            }
        }


        if (FUNC_16(VAR_12,
                        &VAR_18, VAR_12, 0, 0) < 0) {
            return -1;
        }

        return 0;
    }

    else if (FUNC_5(VAR_11)) {
        PyArray_DatetimeMetaData VAR_19;

        VAR_19.base = VAR_4;
        VAR_19.num = 1;


        if (FUNC_16(VAR_12,
                        &VAR_19, VAR_12, 0, 0) < 0) {
            return -1;
        }

        return 0;
    }

    else if (FUNC_6(VAR_11)) {
        PyArray_DatetimeMetaData VAR_20;

        VAR_20.base = VAR_2;
        VAR_20.num = 1;


        if (FUNC_16(VAR_12,
                        &VAR_20, VAR_12, 0, 0) < 0) {
            return -1;
        }

        return 0;
    }


    if (FUNC_10(VAR_11)) {
        Py_ssize_t VAR_21, VAR_22 = FUNC_12(VAR_11);
        if (VAR_22 < 0 && FUNC_9()) {
            return -1;
        }

        for (VAR_21 = 0; VAR_21 < VAR_22; ++VAR_21) {
            int VAR_23;
            PyObject *VAR_24 = FUNC_11(VAR_11, VAR_21);
            if (VAR_24 == ((void*)0)) {
                return -1;
            }
            if (FUNC_0(" in recursive_find_object_datetime64_type") != 0) {
                FUNC_14(VAR_24);
                return -1;
            }
            VAR_23 = FUNC_20(VAR_24, VAR_12);
            FUNC_15();
            FUNC_14(VAR_24);
            if (VAR_23 < 0) {
                return VAR_23;
            }
        }

        return 0;
    }

    else {
        return 0;
    }
}

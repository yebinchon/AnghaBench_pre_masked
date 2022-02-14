
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type_num; } ;
struct TYPE_5__ {int obmeta; } ;
typedef scalar_t__ Py_ssize_t ;
typedef TYPE_1__ PyTimedeltaScalarObject ;
typedef int PyObject ;
typedef TYPE_2__ PyArray_Descr ;
typedef int PyArray_DatetimeMetaData ;
typedef int PyArrayObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;
 int * FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int VAR_3 ;
 scalar_t__ FUNC_16 (int *,int *,int *,int,int) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_19(PyObject *VAR_4,
                        PyArray_DatetimeMetaData *VAR_5)
{

    if (FUNC_1(VAR_4)) {
        PyArrayObject *VAR_6 = (PyArrayObject *)VAR_4;
        PyArray_Descr *VAR_7 = FUNC_2(VAR_6);


        if (VAR_7->type_num == VAR_0 ||
                    VAR_7->type_num == VAR_2) {
            PyArray_DatetimeMetaData *VAR_8;


            VAR_8 = FUNC_18(VAR_7);
            if (VAR_8 == ((void*)0)) {
                return -1;
            }


            if (FUNC_16(VAR_5,
                            VAR_8, VAR_5, 0, 0) < 0) {
                return -1;
            }

            return 0;
        }

        else if (VAR_7->type_num != VAR_1) {
            return 0;
        }
        else {
            if (FUNC_4(VAR_6) == 0) {






                PyObject *VAR_9, *VAR_10;

                VAR_10 = FUNC_12(0);
                if (VAR_10 == ((void*)0)) {
                    return 0;
                }
                VAR_9 = FUNC_8(VAR_4, VAR_10);
                FUNC_14(VAR_10);
                if (VAR_9 == ((void*)0)) {
                    return 0;
                }




                if (FUNC_6(VAR_9)) {
                    FUNC_14(VAR_9);
                    return FUNC_17(VAR_5);
                }
                FUNC_14(VAR_9);
            }
        }
    }

    else if (FUNC_3(VAR_4, VAR_3)) {
        PyTimedeltaScalarObject *VAR_11 = (PyTimedeltaScalarObject *)VAR_4;


        if (FUNC_16(VAR_5,
                        &VAR_11->obmeta, VAR_5, 1, 1) < 0) {
            return -1;
        }

        return 0;
    }

    else if (FUNC_5(VAR_4) || FUNC_13(VAR_4)) {

        return 0;
    }

    else if (FUNC_6(VAR_4)) {
        return FUNC_17(VAR_5);
    }


    if (FUNC_9(VAR_4)) {
        Py_ssize_t VAR_12, VAR_13 = FUNC_11(VAR_4);
        if (VAR_13 < 0 && FUNC_7()) {
            return -1;
        }

        for (VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12) {
            int VAR_14;
            PyObject *VAR_15 = FUNC_10(VAR_4, VAR_12);
            if (VAR_15 == ((void*)0)) {
                return -1;
            }
            if (FUNC_0(" in recursive_find_object_timedelta64_type") != 0) {
                FUNC_14(VAR_15);
                return -1;
            }
            VAR_14 = FUNC_19(VAR_15, VAR_5);
            FUNC_15();
            FUNC_14(VAR_15);
            if (VAR_14 < 0) {
                return VAR_14;
            }
        }

        return 0;
    }

    else {
        return 0;
    }
}

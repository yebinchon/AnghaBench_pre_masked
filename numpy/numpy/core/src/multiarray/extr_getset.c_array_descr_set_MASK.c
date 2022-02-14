
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_33__ {int* dimensions; int nd; int* strides; TYPE_1__* descr; } ;
struct TYPE_32__ {scalar_t__ type_num; int elsize; } ;
typedef TYPE_1__ PyObject ;
typedef TYPE_1__ PyArray_Descr ;
typedef TYPE_3__ PyArrayObject_fields ;
typedef TYPE_1__ PyArrayObject ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int *,TYPE_1__*,int,int*,int*,int ,int ,int *) ;
 int* FUNC_11 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_12 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_16 (TYPE_1__*,char*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 scalar_t__ FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (char*,char*,TYPE_1__**) ;
 int FUNC_21 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_22(PyArrayObject *VAR_6, PyObject *VAR_7)
{
    PyArray_Descr *VAR_8 = ((void*)0);

    if (VAR_7 == ((void*)0)) {
        FUNC_15(VAR_3,
                "Cannot delete array dtype");
        return -1;
    }

    if (!(FUNC_5(VAR_7, &VAR_8)) ||
        VAR_8 == ((void*)0)) {
        FUNC_15(VAR_4,
                "invalid data-type for array");
        return -1;
    }


    if (FUNC_19(FUNC_2(VAR_6)) || FUNC_19(VAR_8)) {
        static PyObject *VAR_9 = ((void*)0);
        PyObject *VAR_10;

        FUNC_20("numpy.core._internal", "_view_is_safe", &VAR_9);
        if (VAR_9 == ((void*)0)) {
            goto fail;
        }

        VAR_10 = FUNC_16(VAR_9, "OO",
                                     FUNC_2(VAR_6), VAR_8);
        if (VAR_10 == ((void*)0)) {
            goto fail;
        }
        FUNC_17(VAR_10);
    }





    if (VAR_8->type_num == VAR_1 &&
            FUNC_14(VAR_8) &&
            VAR_8->elsize != FUNC_2(VAR_6)->elsize) {
        FUNC_3(VAR_8);
        if (VAR_8 == ((void*)0)) {
            return -1;
        }
        VAR_8->elsize = FUNC_2(VAR_6)->elsize;
    }


    if (VAR_8->elsize != FUNC_2(VAR_6)->elsize) {
        int VAR_11;
        npy_intp VAR_12;


        if (FUNC_9(VAR_6) == 0) {
            FUNC_15(VAR_5,
                    "Changing the dtype of a 0d array is only supported "
                    "if the itemsize is unchanged");
            goto fail;
        }
        else if (FUNC_13(VAR_8)) {
            FUNC_15(VAR_5,
                    "Changing the dtype to a subarray type is only supported "
                    "if the total itemsize is unchanged");
            goto fail;
        }


        if (FUNC_7(VAR_6)) {
            VAR_11 = FUNC_9(VAR_6) - 1;
        }
        else if (FUNC_8(VAR_6)) {

            if (FUNC_0(
                        "Changing the shape of an F-contiguous array by "
                        "descriptor assignment is deprecated. To maintain the "
                        "Fortran contiguity of a multidimensional Fortran "
                        "array, use 'a.T.view(...).T' instead") < 0) {
                goto fail;
            }
            VAR_11 = 0;
        }
        else {

            FUNC_15(VAR_5,
                    "To change to a dtype of a different size, the array must "
                    "be C-contiguous");
            goto fail;
        }

        if (VAR_8->elsize < FUNC_2(VAR_6)->elsize) {

            if (VAR_8->elsize == 0 ||
                    FUNC_2(VAR_6)->elsize % VAR_8->elsize != 0) {
                FUNC_15(VAR_5,
                        "When changing to a smaller dtype, its size must be a "
                        "divisor of the size of original dtype");
                goto fail;
            }
            VAR_12 = FUNC_2(VAR_6)->elsize / VAR_8->elsize;
            FUNC_4(VAR_6)[VAR_11] *= VAR_12;
            FUNC_11(VAR_6)[VAR_11] = VAR_8->elsize;
        }
        else if (VAR_8->elsize > FUNC_2(VAR_6)->elsize) {

            VAR_12 = FUNC_4(VAR_6)[VAR_11] * FUNC_2(VAR_6)->elsize;
            if ((VAR_12 % VAR_8->elsize) != 0) {
                FUNC_15(VAR_5,
                        "When changing to a larger dtype, its size must be a "
                        "divisor of the total size in bytes of the last axis "
                        "of the array.");
                goto fail;
            }
            FUNC_4(VAR_6)[VAR_11] = VAR_12 / VAR_8->elsize;
            FUNC_11(VAR_6)[VAR_11] = VAR_8->elsize;
        }
    }


    if (FUNC_13(VAR_8)) {




        PyArrayObject *VAR_13;




        VAR_13 = (PyArrayObject *)
            FUNC_10(&VAR_2, VAR_8, FUNC_9(VAR_6),
                                 FUNC_4(VAR_6), FUNC_11(VAR_6),
                                 FUNC_1(VAR_6), FUNC_6(VAR_6), ((void*)0));
        if (VAR_13 == ((void*)0)) {
            return -1;
        }
        FUNC_21(VAR_6);
        ((PyArrayObject_fields *)VAR_6)->dimensions = FUNC_4(VAR_13);
        ((PyArrayObject_fields *)VAR_6)->nd = FUNC_9(VAR_13);
        ((PyArrayObject_fields *)VAR_6)->strides = FUNC_11(VAR_13);
        VAR_8 = FUNC_2(VAR_13);
        FUNC_18(FUNC_2(VAR_13));

        ((PyArrayObject_fields *)VAR_13)->nd = 0;
        ((PyArrayObject_fields *)VAR_13)->dimensions = ((void*)0);
        FUNC_17(VAR_13);
    }

    FUNC_17(FUNC_2(VAR_6));
    ((PyArrayObject_fields *)VAR_6)->descr = VAR_8;
    FUNC_12(VAR_6, VAR_0);
    return 0;

 fail:
    FUNC_17(VAR_8);
    return -1;
}

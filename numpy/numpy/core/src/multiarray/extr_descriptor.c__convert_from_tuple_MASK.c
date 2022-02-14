
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int npy_intp ;
struct TYPE_18__ {scalar_t__ type_num; int elsize; TYPE_10__* subarray; struct TYPE_18__* names; struct TYPE_18__* fields; int alignment; int flags; scalar_t__ metadata; } ;
struct TYPE_17__ {int member_1; int len; int* ptr; int * member_0; } ;
struct TYPE_16__ {int * shape; TYPE_2__* base; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Dims ;
typedef TYPE_2__ PyArray_Descr ;
typedef int PyArray_ArrayDescr ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__**) ;
 int FUNC_3 (int *,TYPE_2__**) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int *) ;
 TYPE_10__* FUNC_8 (int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__,int *,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char*) ;
 int VAR_4 ;
 int FUNC_16 (long) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int * FUNC_19 (int *,int) ;
 int FUNC_20 (int *) ;
 int * FUNC_21 (int) ;
 int FUNC_22 (int *,int,int ) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*) ;
 TYPE_2__* FUNC_25 (TYPE_2__*,int *,int*) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (TYPE_1__) ;
 int FUNC_28 (int*,int,int) ;

__attribute__((used)) static PyArray_Descr *
FUNC_29(PyObject *VAR_5, int VAR_6)
{
    PyArray_Descr *VAR_7, *VAR_8;
    PyObject *VAR_9;
    int VAR_10;

    if (FUNC_20(VAR_5) != 2) {
        return ((void*)0);
    }
    if (VAR_6) {
        if (!FUNC_2(FUNC_19(VAR_5, 0), &VAR_7)) {
            return ((void*)0);
        }
    }
    else {
        if (!FUNC_3(FUNC_19(VAR_5, 0), &VAR_7)) {
            return ((void*)0);
        }
    }
    VAR_9 = FUNC_19(VAR_5,1);

    VAR_8 = FUNC_25(VAR_7, VAR_9, &VAR_10);
    if (VAR_8 || VAR_10) {
        FUNC_23(VAR_7);
        return VAR_8;
    }
    FUNC_13();




    if (FUNC_9(VAR_7)) {

        int VAR_11 = FUNC_7(FUNC_19(VAR_5,1));

        if (FUNC_26(VAR_11)) {
            FUNC_15(VAR_4,
                    "invalid itemsize in generic type tuple");
            FUNC_23(VAR_7);
            return ((void*)0);
        }
        FUNC_1(VAR_7);
        if (VAR_7 == ((void*)0)) {
            return ((void*)0);
        }
        if (VAR_7->type_num == VAR_2) {
            VAR_7->elsize = VAR_11 << 2;
        }
        else {
            VAR_7->elsize = VAR_11;
        }
        return VAR_7;
    }
    else if (VAR_7->metadata && (FUNC_11(VAR_9) || FUNC_10(VAR_9))) {

        if (FUNC_12(VAR_7->metadata, VAR_9, 0) == -1) {
            FUNC_23(VAR_7);
            return ((void*)0);
        }
        return VAR_7;
    }
    else {





        PyArray_Dims VAR_12 = {((void*)0), -1};
        PyArray_Descr *VAR_13 = ((void*)0);
        npy_intp VAR_14;
        int VAR_15, VAR_16;
        int VAR_17;

        if (!(FUNC_5(VAR_9, &VAR_12)) || (VAR_12.len > VAR_0)) {
            FUNC_15(VAR_4,
                    "invalid shape in fixed-type tuple.");
            goto fail;
        }

        if (VAR_12.len == 0 && FUNC_18(VAR_9)) {
            FUNC_27(VAR_12);
            return VAR_7;
        }

        if (VAR_12.len == 1
                && VAR_12.ptr[0] == 1
                && FUNC_17(VAR_9)) {

            if (FUNC_0(
                        "Passing (type, 1) or '1type' as a synonym of type is "
                        "deprecated; in a future version of numpy, it will be "
                        "understood as (type, (1,)) / '(1,)type'.") < 0) {
                goto fail;
            }
            FUNC_27(VAR_12);
            return VAR_7;
        }


        for (VAR_15=0; VAR_15 < VAR_12.len; VAR_15++) {
            if (VAR_12.ptr[VAR_15] < 0) {
                FUNC_15(VAR_4,
                                "invalid shape in fixed-type tuple: "
                                "dimension smaller then zero.");
                goto fail;
            }
            if (VAR_12.ptr[VAR_15] > VAR_1) {
                FUNC_15(VAR_4,
                                "invalid shape in fixed-type tuple: "
                                "dimension does not fit into a C int.");
                goto fail;
            }
        }
        VAR_14 = FUNC_6(VAR_12.ptr, VAR_12.len);
        if (VAR_14 < 0 || VAR_14 > VAR_1) {
            VAR_16 = 1;
        }
        else {
            VAR_16 = FUNC_28(
                &VAR_17, VAR_7->elsize, (int) VAR_14);
        }
        if (VAR_16) {
            FUNC_15(VAR_4,
                            "invalid shape in fixed-type tuple: dtype size in "
                            "bytes must fit into a C int.");
            goto fail;
        }
        VAR_13 = FUNC_4(VAR_3);
        if (VAR_13 == ((void*)0)) {
            goto fail;
        }
        VAR_13->elsize = VAR_17;
        VAR_13->subarray = FUNC_8(sizeof(PyArray_ArrayDescr));
        if (VAR_13->subarray == ((void*)0)) {
            FUNC_14();
            goto fail;
        }
        VAR_13->flags = VAR_7->flags;
        VAR_13->alignment = VAR_7->alignment;
        VAR_13->subarray->base = VAR_7;
        VAR_7 = ((void*)0);
        FUNC_24(VAR_13->fields);
        FUNC_24(VAR_13->names);
        VAR_13->fields = ((void*)0);
        VAR_13->names = ((void*)0);





        VAR_13->subarray->shape = FUNC_21(VAR_12.len);
        if (VAR_13->subarray->shape == ((void*)0)) {
            goto fail;
        }
        for (VAR_15=0; VAR_15 < VAR_12.len; VAR_15++) {
            FUNC_22(VAR_13->subarray->shape, VAR_15,
                             FUNC_16((long)VAR_12.ptr[VAR_15]));

            if (FUNC_19(VAR_13->subarray->shape, VAR_15) == ((void*)0)) {
                goto fail;
            }
        }

        FUNC_27(VAR_12);
        return VAR_13;

    fail:
        FUNC_24(VAR_7);
        FUNC_24(VAR_13);
        FUNC_27(VAR_12);
        return ((void*)0);
    }
}

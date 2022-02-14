
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ npy_intp ;
struct TYPE_23__ {int * clone; int * free; } ;
struct TYPE_24__ {int * aip; int * aop; int * castfunc; TYPE_1__ base; } ;
typedef TYPE_2__ _strided_cast_data ;
struct TYPE_25__ {scalar_t__ elsize; int type_num; int byteorder; } ;
typedef int PyArray_VectorUnaryFunc ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_3__ PyArray_Descr ;
typedef int PyArrayObject ;
typedef int NpyAuxData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int ) ;
 int * FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*,int,scalar_t__*,int *,int *,int ,int *,int *,int ,int) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int,scalar_t__,scalar_t__,TYPE_3__*,TYPE_3__*,int **,int **,int*) ;
 int FUNC_12 (int,scalar_t__,scalar_t__,TYPE_3__*,TYPE_3__*,int **,int **) ;
 int FUNC_13 (int,scalar_t__,scalar_t__,int,int,int **,int **) ;
 int FUNC_14 (int,scalar_t__,scalar_t__,TYPE_3__*,TYPE_3__*,int **,int **) ;
 int FUNC_15 (int,scalar_t__,scalar_t__,TYPE_3__*,TYPE_3__*,int **,int **) ;
 int FUNC_16 (int,scalar_t__,scalar_t__,TYPE_3__*,TYPE_3__*,int **,int **,int*) ;

__attribute__((used)) static int
FUNC_17(int VAR_12,
                            npy_intp VAR_13, npy_intp VAR_14,
                            PyArray_Descr *VAR_15, PyArray_Descr *VAR_16,
                            int VAR_17,
                            PyArray_StridedUnaryOp **VAR_18,
                            NpyAuxData **VAR_19,
                            int *VAR_20,
                            int *VAR_21)
{
    _strided_cast_data *VAR_22;
    PyArray_VectorUnaryFunc *VAR_23;
    PyArray_Descr *VAR_24;
    npy_intp VAR_25 = 1, VAR_26 = VAR_15->elsize,
            VAR_27 = VAR_16->elsize;

    if (FUNC_8(VAR_15->type_num) &&
                    FUNC_8(VAR_16->type_num)) {
        *VAR_21 = !FUNC_2(VAR_15->byteorder) ||
                          !FUNC_2(VAR_16->byteorder);
        return FUNC_13(VAR_12,
                                    VAR_13, VAR_14,
                                    VAR_15->type_num, VAR_16->type_num,
                                    VAR_18, VAR_19);
    }

    if (VAR_15->type_num == VAR_0 ||
            VAR_15->type_num == VAR_5 ||
            VAR_16->type_num == VAR_0 ||
            VAR_16->type_num == VAR_5) {

        if ((VAR_15->type_num == VAR_0 &&
                    VAR_16->type_num == VAR_0) ||
                (VAR_15->type_num == VAR_5 &&
                    VAR_16->type_num == VAR_5)) {
            *VAR_21 = !FUNC_2(VAR_15->byteorder) ||
                              !FUNC_2(VAR_16->byteorder);
            return FUNC_12(VAR_12,
                                        VAR_13, VAR_14,
                                        VAR_15, VAR_16,
                                        VAR_18, VAR_19);
        }






        if (VAR_15->type_num == VAR_0) {
            switch (VAR_16->type_num) {
                case 130:
                    *VAR_20 = 1;
                    *VAR_21 = !FUNC_2(VAR_15->byteorder);
                    return FUNC_14(
                                        VAR_12,
                                        VAR_13, VAR_14,
                                        VAR_15, VAR_16,
                                        VAR_18, VAR_19);

                case 129:
                    return FUNC_11(
                                        VAR_12,
                                        VAR_13, VAR_14,
                                        VAR_15, VAR_16,
                                        VAR_18, VAR_19,
                                        VAR_20);
            }
        }
        else if (VAR_16->type_num == VAR_0) {
            switch (VAR_15->type_num) {
                case 130:
                    *VAR_20 = 1;
                    *VAR_21 = !FUNC_2(VAR_16->byteorder);
                    return FUNC_15(
                                        VAR_12,
                                        VAR_13, VAR_14,
                                        VAR_15, VAR_16,
                                        VAR_18, VAR_19);

                case 129:
                    return FUNC_16(
                                        VAR_12,
                                        VAR_13, VAR_14,
                                        VAR_15, VAR_16,
                                        VAR_18, VAR_19,
                                        VAR_20);
            }
        }
    }

    *VAR_21 = !VAR_12 ||
                      !FUNC_2(VAR_15->byteorder) ||
                      !FUNC_2(VAR_16->byteorder);


    switch (VAR_15->type_num) {
        case 131:
        case 130:
        case 129:
        case 128:
            if (VAR_20) {
                *VAR_20 = 1;
            }
            break;
    }
    switch (VAR_16->type_num) {
        case 131:
        case 130:
        case 129:
        case 128:
            if (VAR_20) {
                *VAR_20 = 1;
            }
            break;
    }

    if (FUNC_6(VAR_15, VAR_3) ||
            FUNC_6(VAR_16, VAR_3)) {
        if (VAR_20) {
            *VAR_20 = 1;
        }
    }


    VAR_23 = FUNC_1(VAR_15, VAR_16->type_num);
    if (!VAR_23) {
        *VAR_18 = ((void*)0);
        *VAR_19 = ((void*)0);
        return VAR_1;
    }


    VAR_22 = (_strided_cast_data *)FUNC_5(sizeof(_strided_cast_data));
    if (VAR_22 == ((void*)0)) {
        FUNC_7();
        *VAR_18 = ((void*)0);
        *VAR_19 = ((void*)0);
        return VAR_1;
    }
    VAR_22->base.free = &VAR_11;
    VAR_22->base.clone = &VAR_10;
    VAR_22->castfunc = VAR_23;






    if (FUNC_2(VAR_15->byteorder)) {
        VAR_24 = VAR_15;
        FUNC_10(VAR_24);
    }
    else {
        VAR_24 = FUNC_0(VAR_15, VAR_2);
        if (VAR_24 == ((void*)0)) {
            FUNC_4(VAR_22);
            return VAR_1;
        }
    }
    VAR_22->aip = (PyArrayObject *)FUNC_3(
            &VAR_6, VAR_24,
            1, &VAR_25, ((void*)0), ((void*)0),
            0, ((void*)0), ((void*)0),
            0, 1);
    if (VAR_22->aip == ((void*)0)) {
        FUNC_4(VAR_22);
        return VAR_1;
    }






    if (FUNC_2(VAR_16->byteorder)) {
        VAR_24 = VAR_16;
        FUNC_10(VAR_24);
    }
    else {
        VAR_24 = FUNC_0(VAR_16, VAR_2);
        if (VAR_24 == ((void*)0)) {
            FUNC_9(VAR_22->aip);
            FUNC_4(VAR_22);
            return VAR_1;
        }
    }
    VAR_22->aop = (PyArrayObject *)FUNC_3(
            &VAR_6, VAR_24,
            1, &VAR_25, ((void*)0), ((void*)0),
            0, ((void*)0), ((void*)0),
            0, 1);
    if (VAR_22->aop == ((void*)0)) {
        FUNC_9(VAR_22->aip);
        FUNC_4(VAR_22);
        return VAR_1;
    }


    if (VAR_17 && VAR_15->type_num == 131) {
        *VAR_18 = VAR_9;
    }
    else {





        if ((VAR_13 == VAR_26 && VAR_14 == VAR_27) ||
                        *VAR_21) {
            *VAR_18 = VAR_7;
        }
        else {
            *VAR_18 = VAR_8;
        }
    }
    *VAR_19 = (NpyAuxData *)VAR_22;

    return VAR_4;
}

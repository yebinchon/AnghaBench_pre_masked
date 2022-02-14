
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_15__ {int offset; int count; } ;
typedef TYPE_2__ _subarray_broadcast_offsetrun ;
struct TYPE_14__ {int * clone; int * free; } ;
struct TYPE_16__ {int src_N; int dst_N; int src_itemsize; int dst_itemsize; int run_count; int * stransfer_decdstref; int * stransfer_decsrcref; TYPE_2__ offsetruns; int * data_decdstref; int * data_decsrcref; int * data; TYPE_1__ base; int * stransfer; } ;
typedef TYPE_3__ _subarray_broadcast_data ;
struct TYPE_18__ {int elsize; } ;
struct TYPE_17__ {scalar_t__ len; int* ptr; } ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_4__ PyArray_Dims ;
typedef TYPE_5__ PyArray_Descr ;
typedef int NpyAuxData ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,int,int,TYPE_5__*,TYPE_5__*,int,int **,int **,int*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int FUNC_5 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(int VAR_6,
                            npy_intp VAR_7, npy_intp VAR_8,
                            PyArray_Descr *VAR_9, PyArray_Descr *VAR_10,
                            npy_intp VAR_11, npy_intp VAR_12,
                            PyArray_Dims VAR_13, PyArray_Dims VAR_14,
                            int VAR_15,
                            PyArray_StridedUnaryOp **VAR_16,
                            NpyAuxData **VAR_17,
                            int *VAR_18)
{
    _subarray_broadcast_data *VAR_19;
    npy_intp VAR_20, VAR_21, VAR_22, VAR_23,
             VAR_24, VAR_25, VAR_26, VAR_27;
    _subarray_broadcast_offsetrun *VAR_28;

    VAR_20 = sizeof(_subarray_broadcast_data) +
                        VAR_12*sizeof(_subarray_broadcast_offsetrun);


    VAR_19 = (_subarray_broadcast_data *)FUNC_3(VAR_20);
    if (VAR_19 == ((void*)0)) {
        FUNC_5();
        return VAR_0;
    }






    if (FUNC_1(VAR_6,
                    VAR_9->elsize, VAR_10->elsize,
                    VAR_9, VAR_10,
                    0,
                    &VAR_19->stransfer, &VAR_19->data,
                    VAR_18) != VAR_1) {
        FUNC_2(VAR_19);
        return VAR_0;
    }
    VAR_19->base.free = &VAR_5;
    VAR_19->base.clone = &VAR_4;
    VAR_19->src_N = VAR_11;
    VAR_19->dst_N = VAR_12;
    VAR_19->src_itemsize = VAR_9->elsize;
    VAR_19->dst_itemsize = VAR_10->elsize;


    if (VAR_15 && FUNC_4(VAR_9)) {
        if (FUNC_1(VAR_6,
                        VAR_9->elsize, 0,
                        VAR_9, ((void*)0),
                        1,
                        &VAR_19->stransfer_decsrcref,
                        &VAR_19->data_decsrcref,
                        VAR_18) != VAR_1) {
            FUNC_0(VAR_19->data);
            FUNC_2(VAR_19);
            return VAR_0;
        }
    }
    else {
        VAR_19->stransfer_decsrcref = ((void*)0);
        VAR_19->data_decsrcref = ((void*)0);
    }


    if (FUNC_4(VAR_10)) {
        if (FUNC_1(VAR_6,
                        VAR_10->elsize, 0,
                        VAR_10, ((void*)0),
                        1,
                        &VAR_19->stransfer_decdstref,
                        &VAR_19->data_decdstref,
                        VAR_18) != VAR_1) {
            FUNC_0(VAR_19->data);
            FUNC_0(VAR_19->data_decsrcref);
            FUNC_2(VAR_19);
            return VAR_0;
        }
    }
    else {
        VAR_19->stransfer_decdstref = ((void*)0);
        VAR_19->data_decdstref = ((void*)0);
    }


    VAR_28 = &VAR_19->offsetruns;
    VAR_27 = (VAR_13.len > VAR_14.len) ? VAR_13.len : VAR_14.len;
    for (VAR_21 = 0; VAR_21 < VAR_12; ++VAR_21) {
        npy_intp VAR_29 = 1;

        VAR_25 = VAR_21;
        VAR_24 = 0;
        for (VAR_26 = VAR_27-1; VAR_26 >= 0; --VAR_26) {
            npy_intp VAR_30 = 0, VAR_31;


            if (VAR_26 >= VAR_27 - VAR_14.len) {
                VAR_31 = VAR_14.ptr[VAR_26-(VAR_27-VAR_14.len)];
                VAR_30 = VAR_25 % VAR_31;
                VAR_25 /= VAR_31;
            }


            if (VAR_26 >= VAR_27 - VAR_13.len) {
                VAR_31 = VAR_13.ptr[VAR_26-(VAR_27-VAR_13.len)];
                if (VAR_31 == 1) {
                    VAR_30 = 0;
                }
                else {
                    if (VAR_30 < VAR_31) {
                        VAR_24 += VAR_29*VAR_30;
                        VAR_29 *= VAR_31;
                    }
                    else {

                        VAR_24 = -1;
                        break;
                    }
                }
            }
        }

        if (VAR_24 == -1) {
            VAR_28[VAR_21].offset = -1;
        }
        else {
            VAR_28[VAR_21].offset = VAR_24;
        }
    }


    VAR_22 = 0;
    VAR_23 = 1;
    for (VAR_21 = 1; VAR_21 < VAR_12; ++VAR_21) {
        if (VAR_28[VAR_22].offset == -1) {

            if (VAR_28[VAR_21].offset != -1) {
                VAR_28[VAR_22].count = VAR_23;
                VAR_22++;
                VAR_23 = 1;
                VAR_28[VAR_22].offset = VAR_28[VAR_21].offset;
            }
            else {
                VAR_23++;
            }
        }
        else {

            if (VAR_28[VAR_21].offset !=
                            VAR_28[VAR_21-1].offset + 1) {
                VAR_28[VAR_22].count = VAR_23;
                VAR_22++;
                VAR_23 = 1;
                VAR_28[VAR_22].offset = VAR_28[VAR_21].offset;
            }
            else {
                VAR_23++;
            }
        }
    }
    VAR_28[VAR_22].count = VAR_23;
    VAR_22++;
    VAR_19->run_count = VAR_22;


    while (VAR_22--) {
        if (VAR_28[VAR_22].offset != -1) {
            VAR_28[VAR_22].offset *= VAR_9->elsize;
        }
    }

    if (VAR_19->stransfer_decsrcref == ((void*)0) &&
                                VAR_19->stransfer_decdstref == ((void*)0)) {
        *VAR_16 = &VAR_2;
    }
    else {
        *VAR_16 = &VAR_3;
    }
    *VAR_17 = (NpyAuxData *)VAR_19;

    return VAR_1;
}

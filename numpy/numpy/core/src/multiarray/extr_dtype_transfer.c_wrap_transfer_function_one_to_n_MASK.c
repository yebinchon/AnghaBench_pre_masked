
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* npy_intp ;
struct TYPE_4__ {int * clone; int * free; } ;
struct TYPE_5__ {void* dst_itemsize; void* N; int * data_finish_src; int * stransfer_finish_src; int * data; int * stransfer; TYPE_1__ base; } ;
typedef TYPE_2__ _one_to_n_data ;
typedef int PyArray_StridedUnaryOp ;
typedef int NpyAuxData ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(
                            PyArray_StridedUnaryOp *VAR_6,
                            NpyAuxData *VAR_7,
                            PyArray_StridedUnaryOp *VAR_8,
                            NpyAuxData *VAR_9,
                            npy_intp VAR_10,
                            npy_intp VAR_11,
                            PyArray_StridedUnaryOp **VAR_12,
                            NpyAuxData **VAR_13)
{
    _one_to_n_data *VAR_14;


    VAR_14 = FUNC_0(sizeof(_one_to_n_data));
    if (VAR_14 == ((void*)0)) {
        FUNC_1();
        return VAR_0;
    }

    VAR_14->base.free = &VAR_3;
    VAR_14->base.clone = &VAR_2;
    VAR_14->stransfer = VAR_6;
    VAR_14->data = VAR_7;
    VAR_14->stransfer_finish_src = VAR_8;
    VAR_14->data_finish_src = VAR_9;
    VAR_14->N = VAR_11;
    VAR_14->dst_itemsize = VAR_10;

    if (VAR_8 == ((void*)0)) {
        *VAR_12 = &VAR_4;
    }
    else {
        *VAR_12 = &VAR_5;
    }
    *VAR_13 = (NpyAuxData *)VAR_14;

    return VAR_1;
}

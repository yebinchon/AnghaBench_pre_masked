
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_9__ {int * clone; int * free; } ;
struct TYPE_11__ {int swap; int * arr; int copyswapn; TYPE_1__ base; } ;
typedef TYPE_3__ _wrap_copy_swap_data ;
struct TYPE_12__ {TYPE_2__* f; } ;
struct TYPE_10__ {int copyswapn; } ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_4__ PyArray_Descr ;
typedef int PyArrayObject ;
typedef int NpyAuxData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__*,int,int*,int *,int *,int ,int *,int *,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(int VAR_6,
                npy_intp VAR_7, npy_intp VAR_8,
                PyArray_Descr *VAR_9,
                int VAR_10,
                PyArray_StridedUnaryOp **VAR_11,
                NpyAuxData **VAR_12)
{
    _wrap_copy_swap_data *VAR_13;
    npy_intp VAR_14 = 1;


    VAR_13 = (_wrap_copy_swap_data *)FUNC_2(sizeof(_wrap_copy_swap_data));
    if (VAR_13 == ((void*)0)) {
        FUNC_3();
        *VAR_11 = ((void*)0);
        *VAR_12 = ((void*)0);
        return VAR_0;
    }

    VAR_13->base.free = &VAR_5;
    VAR_13->base.clone = &VAR_4;
    VAR_13->copyswapn = VAR_9->f->copyswapn;
    VAR_13->swap = VAR_10;





    FUNC_4(VAR_9);
    VAR_13->arr = (PyArrayObject *)FUNC_0(
            &VAR_2, VAR_9,
            1, &VAR_14, ((void*)0), ((void*)0),
            0, ((void*)0), ((void*)0),
            0, 1);
    if (VAR_13->arr == ((void*)0)) {
        FUNC_1(VAR_13);
        return VAR_0;
    }

    *VAR_11 = &VAR_3;
    *VAR_12 = (NpyAuxData *)VAR_13;

    return VAR_1;
}

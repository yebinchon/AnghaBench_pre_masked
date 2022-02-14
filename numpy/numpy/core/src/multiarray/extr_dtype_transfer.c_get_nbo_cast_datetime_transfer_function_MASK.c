
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int npy_intp ;
typedef scalar_t__ npy_int64 ;
struct TYPE_12__ {int * clone; int * free; } ;
struct TYPE_13__ {int dst_meta; int src_meta; int * tmp_buffer; scalar_t__ denom; scalar_t__ num; TYPE_1__ base; } ;
typedef TYPE_2__ _strided_datetime_cast_data ;
struct TYPE_15__ {scalar_t__ base; } ;
struct TYPE_14__ {scalar_t__ type_num; } ;
typedef int PyObject ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_3__ PyArray_Descr ;
typedef TYPE_4__ PyArray_DatetimeMetaData ;
typedef int NpyAuxData ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*,scalar_t__*,scalar_t__*) ;
 TYPE_4__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_4__*,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(int VAR_10,
                            npy_intp VAR_11, npy_intp VAR_12,
                            PyArray_Descr *VAR_13, PyArray_Descr *VAR_14,
                            PyArray_StridedUnaryOp **VAR_15,
                            NpyAuxData **VAR_16)
{
    PyArray_DatetimeMetaData *VAR_17, *VAR_18;
    npy_int64 VAR_19 = 0, VAR_20 = 0;
    _strided_datetime_cast_data *VAR_21;

    VAR_17 = FUNC_4(VAR_13);
    if (VAR_17 == ((void*)0)) {
        return VAR_1;
    }
    VAR_18 = FUNC_4(VAR_14);
    if (VAR_18 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_3(VAR_17, VAR_18, &VAR_19, &VAR_20);

    if (VAR_19 == 0) {
        return VAR_1;
    }


    VAR_21 = (_strided_datetime_cast_data *)FUNC_0(
                                    sizeof(_strided_datetime_cast_data));
    if (VAR_21 == ((void*)0)) {
        FUNC_1();
        *VAR_15 = ((void*)0);
        *VAR_16 = ((void*)0);
        return VAR_1;
    }
    VAR_21->base.free = &VAR_7;
    VAR_21->base.clone = &VAR_6;
    VAR_21->num = VAR_19;
    VAR_21->denom = VAR_20;
    VAR_21->tmp_buffer = ((void*)0);






    if (VAR_13->type_num == VAR_0 &&
            (VAR_17->base == VAR_3 ||
             VAR_17->base == VAR_2 ||
             VAR_18->base == VAR_3 ||
             VAR_18->base == VAR_2)) {
        FUNC_5(&VAR_21->src_meta, VAR_17, sizeof(VAR_21->src_meta));
        FUNC_5(&VAR_21->dst_meta, VAR_18, sizeof(VAR_21->dst_meta));
        *VAR_15 = &VAR_9;
    }
    else if (VAR_10) {
        *VAR_15 = &VAR_5;
    }
    else {
        *VAR_15 = &VAR_8;
    }
    *VAR_16 = (NpyAuxData *)VAR_21;
    return VAR_4;
}

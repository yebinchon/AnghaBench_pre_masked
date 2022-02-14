
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_7__ {int * clone; int * free; } ;
struct TYPE_8__ {int src_meta; int * tmp_buffer; int dst_itemsize; TYPE_1__ base; } ;
typedef TYPE_2__ _strided_datetime_cast_data ;
struct TYPE_9__ {int elsize; } ;
typedef int PyObject ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_3__ PyArray_Descr ;
typedef int PyArray_DatetimeMetaData ;
typedef int NpyAuxData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(int VAR_5,
                            npy_intp VAR_6, npy_intp VAR_7,
                            PyArray_Descr *VAR_8, PyArray_Descr *VAR_9,
                            PyArray_StridedUnaryOp **VAR_10,
                            NpyAuxData **VAR_11)
{
    PyArray_DatetimeMetaData *VAR_12;
    _strided_datetime_cast_data *VAR_13;

    VAR_12 = FUNC_3(VAR_8);
    if (VAR_12 == ((void*)0)) {
        return VAR_0;
    }


    VAR_13 = (_strided_datetime_cast_data *)FUNC_0(
                                    sizeof(_strided_datetime_cast_data));
    if (VAR_13 == ((void*)0)) {
        FUNC_1();
        *VAR_10 = ((void*)0);
        *VAR_11 = ((void*)0);
        return VAR_0;
    }
    VAR_13->base.free = &VAR_3;
    VAR_13->base.clone = &VAR_2;
    VAR_13->dst_itemsize = VAR_9->elsize;
    VAR_13->tmp_buffer = ((void*)0);

    FUNC_4(&VAR_13->src_meta, VAR_12, sizeof(VAR_13->src_meta));

    *VAR_10 = &VAR_4;
    *VAR_11 = (NpyAuxData *)VAR_13;
    return VAR_1;
}

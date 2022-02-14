
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int npy_intp ;
typedef int npy_int ;
struct TYPE_10__ {int dst_offset; scalar_t__ src_itemsize; scalar_t__ src_offset; int data; int stransfer; } ;
typedef TYPE_2__ _single_field_transfer ;
struct TYPE_9__ {int * clone; int * free; } ;
struct TYPE_11__ {int field_count; TYPE_2__ fields; TYPE_1__ base; } ;
typedef TYPE_3__ _field_transfer_data ;
struct TYPE_12__ {int fields; int * names; } ;
typedef int PyObject ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_4__ PyArray_Descr ;
typedef int NpyAuxData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,TYPE_4__**,int*,int **) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_4__*,int *,int *,int*) ;

__attribute__((used)) static int
FUNC_9(int VAR_5,
                            npy_intp VAR_6,
                            PyArray_Descr *VAR_7,
                            PyArray_StridedUnaryOp **VAR_8,
                            NpyAuxData **VAR_9,
                            int *VAR_10)
{
    PyObject *VAR_11, *VAR_12, *VAR_13, *VAR_14;
    PyArray_Descr *VAR_15;
    npy_int VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20;
    _field_transfer_data *VAR_21;
    _single_field_transfer *VAR_22;

    VAR_11 = VAR_7->names;
    VAR_17 = FUNC_7(VAR_7->names);

    VAR_18 = VAR_17;
    VAR_19 = sizeof(_field_transfer_data) +
                    VAR_18 * sizeof(_single_field_transfer);

    VAR_21 = (_field_transfer_data *)FUNC_3(VAR_19);
    if (VAR_21 == ((void*)0)) {
        FUNC_5();
        return VAR_0;
    }
    VAR_21->base.free = &VAR_3;
    VAR_21->base.clone = &VAR_2;
    VAR_22 = &VAR_21->fields;

    for (VAR_16 = 0; VAR_16 < VAR_17; ++VAR_16) {
        VAR_12 = FUNC_6(VAR_11, VAR_16);
        VAR_13 = FUNC_4(VAR_7->fields, VAR_12);
        if (!FUNC_1(VAR_13, "Oi|O", &VAR_15,
                                                &VAR_20, &VAR_14)) {
            FUNC_2(VAR_21);
            return VAR_0;
        }
        if (FUNC_8(0,
                                VAR_6,
                                VAR_15,
                                &VAR_22[VAR_16].stransfer,
                                &VAR_22[VAR_16].data,
                                VAR_10) != VAR_1) {
            for (VAR_16 = VAR_16-1; VAR_16 >= 0; --VAR_16) {
                FUNC_0(VAR_22[VAR_16].data);
            }
            FUNC_2(VAR_21);
            return VAR_0;
        }
        VAR_22[VAR_16].src_offset = 0;
        VAR_22[VAR_16].dst_offset = VAR_20;
        VAR_22[VAR_16].src_itemsize = 0;
    }

    VAR_21->field_count = VAR_18;

    *VAR_8 = &VAR_4;
    *VAR_9 = (NpyAuxData *)VAR_21;

    return VAR_1;
}

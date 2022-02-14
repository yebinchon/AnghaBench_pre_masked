
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int npy_intp ;
typedef int npy_int ;
struct TYPE_15__ {int src_offset; int dst_offset; int data; int src_itemsize; int stransfer; } ;
typedef TYPE_2__ _single_field_transfer ;
struct TYPE_14__ {int * clone; int * free; } ;
struct TYPE_16__ {int field_count; TYPE_2__ fields; TYPE_1__ base; } ;
typedef TYPE_3__ _field_transfer_data ;
struct TYPE_17__ {int elsize; int fields; int names; } ;
typedef int PyObject ;
typedef int PyArray_StridedUnaryOp ;
typedef TYPE_4__ PyArray_Descr ;
typedef int NpyAuxData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,TYPE_4__**,int*,int **) ;
 scalar_t__ FUNC_2 (int ,int ,int ,TYPE_4__*,TYPE_4__*,int,int *,int *,int*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int * FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*) ;
 int VAR_2 ;
 int * FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (int ,int ,TYPE_4__*,int *,int *,int*) ;

__attribute__((used)) static int
FUNC_13(int VAR_6,
                            npy_intp VAR_7, npy_intp VAR_8,
                            PyArray_Descr *VAR_9, PyArray_Descr *VAR_10,
                            int VAR_11,
                            PyArray_StridedUnaryOp **VAR_12,
                            NpyAuxData **VAR_13,
                            int *VAR_14)
{
    PyObject *VAR_15, *VAR_16, *VAR_17;
    PyArray_Descr *VAR_18, *VAR_19;
    npy_int VAR_20, VAR_21, VAR_22;
    int VAR_23, VAR_24;
    _field_transfer_data *VAR_25;
    _single_field_transfer *VAR_26;
    int VAR_27 = 0;







    if (!FUNC_5(VAR_9)) {
        VAR_21 = FUNC_11(VAR_10->names);


        VAR_22 = sizeof(_field_transfer_data) +
                        (VAR_21 + 1) * sizeof(_single_field_transfer);
        VAR_25 = (_field_transfer_data *)FUNC_4(VAR_22);
        if (VAR_25 == ((void*)0)) {
            FUNC_8();
            return VAR_0;
        }
        VAR_25->base.free = &VAR_4;
        VAR_25->base.clone = &VAR_3;
        VAR_26 = &VAR_25->fields;

        for (VAR_20 = 0; VAR_20 < VAR_21; ++VAR_20) {
            VAR_15 = FUNC_10(VAR_10->names, VAR_20);
            VAR_16 = FUNC_7(VAR_10->fields, VAR_15);
            if (!FUNC_1(VAR_16, "Oi|O", &VAR_19,
                                                    &VAR_24, &VAR_17)) {
                FUNC_3(VAR_25);
                return VAR_0;
            }
            if (FUNC_2(0,
                                    VAR_7, VAR_8,
                                    VAR_9, VAR_19,
                                    0,
                                    &VAR_26[VAR_20].stransfer,
                                    &VAR_26[VAR_20].data,
                                    VAR_14) != VAR_1) {
                for (VAR_20 = VAR_20-1; VAR_20 >= 0; --VAR_20) {
                    FUNC_0(VAR_26[VAR_20].data);
                }
                FUNC_3(VAR_25);
                return VAR_0;
            }
            VAR_26[VAR_20].src_offset = 0;
            VAR_26[VAR_20].dst_offset = VAR_24;
            VAR_26[VAR_20].src_itemsize = VAR_9->elsize;
        }





        if (VAR_11 && FUNC_6(VAR_9)) {
            if (FUNC_12(0,
                                    VAR_7,
                                    VAR_9,
                                    &VAR_26[VAR_21].stransfer,
                                    &VAR_26[VAR_21].data,
                                    VAR_14) != VAR_1) {
                for (VAR_20 = 0; VAR_20 < VAR_21; ++VAR_20) {
                    FUNC_0(VAR_26[VAR_20].data);
                }
                FUNC_3(VAR_25);
                return VAR_0;
            }
            VAR_26[VAR_21].src_offset = 0;
            VAR_26[VAR_21].dst_offset = 0;
            VAR_26[VAR_21].src_itemsize = VAR_9->elsize;
            VAR_21++;
        }
        VAR_25->field_count = VAR_21;

        *VAR_12 = &VAR_5;
        *VAR_13 = (NpyAuxData *)VAR_25;

        return VAR_1;
    }


    if (!FUNC_5(VAR_10)) {
        if (FUNC_11(VAR_9->names) != 1) {
            FUNC_9(VAR_2,
                    "Can't cast from structure to non-structure, except if the "
                    "structure only has a single field.");
            return VAR_0;
        }


        VAR_22 = sizeof(_field_transfer_data) +
                        1 * sizeof(_single_field_transfer);
        VAR_25 = (_field_transfer_data *)FUNC_4(VAR_22);
        if (VAR_25 == ((void*)0)) {
            FUNC_8();
            return VAR_0;
        }
        VAR_25->base.free = &VAR_4;
        VAR_25->base.clone = &VAR_3;
        VAR_26 = &VAR_25->fields;

        VAR_15 = FUNC_10(VAR_9->names, 0);
        VAR_16 = FUNC_7(VAR_9->fields, VAR_15);
        if (!FUNC_1(VAR_16, "Oi|O",
                              &VAR_18, &VAR_23, &VAR_17)) {
            return VAR_0;
        }

        if (FUNC_2(0,
                                             VAR_7, VAR_8,
                                             VAR_18, VAR_10,
                                             VAR_11,
                                             &VAR_26[0].stransfer,
                                             &VAR_26[0].data,
                                             VAR_14) != VAR_1) {
            FUNC_3(VAR_25);
            return VAR_0;
        }
        VAR_26[0].src_offset = VAR_23;
        VAR_26[0].dst_offset = 0;
        VAR_26[0].src_itemsize = VAR_18->elsize;

        VAR_25->field_count = 1;

        *VAR_12 = &VAR_5;
        *VAR_13 = (NpyAuxData *)VAR_25;

        return VAR_1;
    }


    VAR_21 = FUNC_11(VAR_10->names);


    if (FUNC_11(VAR_9->names) != VAR_21) {
        FUNC_9(VAR_2, "structures must have the same size");
        return VAR_0;
    }


    VAR_22 = sizeof(_field_transfer_data) +
                    VAR_21 * sizeof(_single_field_transfer);
    VAR_25 = (_field_transfer_data *)FUNC_4(VAR_22);
    if (VAR_25 == ((void*)0)) {
        FUNC_8();
        return VAR_0;
    }
    VAR_25->base.free = &VAR_4;
    VAR_25->base.clone = &VAR_3;
    VAR_26 = &VAR_25->fields;


    for (VAR_20 = 0; VAR_20 < VAR_21; ++VAR_20) {
        VAR_15 = FUNC_10(VAR_10->names, VAR_20);
        VAR_16 = FUNC_7(VAR_10->fields, VAR_15);
        if (!FUNC_1(VAR_16, "Oi|O", &VAR_19,
                                                &VAR_24, &VAR_17)) {
            VAR_27 = 1;
            break;
        }
        VAR_15 = FUNC_10(VAR_9->names, VAR_20);
        VAR_16 = FUNC_7(VAR_9->fields, VAR_15);
        if (!FUNC_1(VAR_16, "Oi|O", &VAR_18,
                                                &VAR_23, &VAR_17)) {
            VAR_27 = 1;
            break;
        }

        if (FUNC_2(0,
                                             VAR_7, VAR_8,
                                             VAR_18, VAR_19,
                                             VAR_11,
                                             &VAR_26[VAR_20].stransfer,
                                             &VAR_26[VAR_20].data,
                                             VAR_14) != VAR_1) {
            VAR_27 = 1;
            break;
        }
        VAR_26[VAR_20].src_offset = VAR_23;
        VAR_26[VAR_20].dst_offset = VAR_24;
        VAR_26[VAR_20].src_itemsize = VAR_18->elsize;
    }

    if (VAR_27) {
        for (VAR_20 = VAR_20-1; VAR_20 >= 0; --VAR_20) {
            FUNC_0(VAR_26[VAR_20].data);
        }
        FUNC_3(VAR_25);
        return VAR_0;
    }

    VAR_25->field_count = VAR_21;

    *VAR_12 = &VAR_5;
    *VAR_13 = (NpyAuxData *)VAR_25;

    return VAR_1;
}

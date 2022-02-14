
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_uint8 ;
typedef int npy_uint64 ;
typedef int npy_intp ;
struct TYPE_3__ {int member_1; int* ptr; int * member_0; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Dims ;
typedef int PyArrayObject ;
typedef int PyArrayIterObject ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,int*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int ,int,int*,int *,int *,int ,int *) ;
 scalar_t__ FUNC_12 (int *,TYPE_1__*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_19 (int *) ;
 int * VAR_7 ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (char*,int *,int) ;
 int FUNC_24 (char*,int ,int) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static PyObject *
FUNC_26(PyObject *VAR_8, int VAR_9, PyObject *VAR_10, char VAR_11)
{
    static int VAR_12 = 0;




    static union {
        npy_uint8 bytes[8];
        npy_uint64 uint64;
    } VAR_13[256];
    PyArrayObject *VAR_14;
    PyArrayObject *VAR_15 = ((void*)0);
    PyArrayObject *VAR_16 = ((void*)0);
    npy_intp VAR_17[VAR_3];
    int VAR_18;
    PyArrayIterObject *VAR_19, *VAR_20;
    npy_intp VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    VAR_0;

    VAR_14 = (PyArrayObject *)FUNC_4(VAR_8);

    if (VAR_14 == ((void*)0)) {
        return ((void*)0);
    }
    if (FUNC_16(VAR_14) != VAR_4) {
        FUNC_18(VAR_5,
                "Expected an input array of unsigned byte data type");
        FUNC_19(VAR_14);
        goto fail;
    }

    VAR_15 = (PyArrayObject *)FUNC_1(VAR_14, &VAR_9, 0);
    FUNC_19(VAR_14);
    if (VAR_15 == ((void*)0)) {
        return ((void*)0);
    }

    if (FUNC_10(VAR_15) == 0) {

        PyArrayObject *VAR_27;
        PyArray_Dims VAR_28 = {((void*)0), 1};
        npy_intp VAR_29 = 1;

        VAR_28.ptr = &VAR_29;
        VAR_27 = (PyArrayObject *)FUNC_12(VAR_15, &VAR_28, VAR_1);
        FUNC_19(VAR_15);
        if (VAR_27 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_15 = VAR_27;
    }


    for (VAR_18 = 0; VAR_18 < FUNC_10(VAR_15); VAR_18++) {
        VAR_17[VAR_18] = FUNC_2(VAR_15, VAR_18);
    }


    VAR_17[VAR_9] *= 8;
    if (VAR_10 != VAR_7) {
        VAR_21 = FUNC_13(VAR_10);
        if (FUNC_22(VAR_21)) {
            goto fail;
        }
        if (VAR_21 < 0) {
            VAR_17[VAR_9] += VAR_21;
            if (VAR_17[VAR_9] < 0) {
                FUNC_17(VAR_6,
                             "-count larger than number of elements");
                goto fail;
            }
        }
        else {
            VAR_17[VAR_9] = VAR_21;
        }
    }


    VAR_16 = (PyArrayObject *)FUNC_11(
            FUNC_20(VAR_15), FUNC_3(VAR_4),
            FUNC_10(VAR_15), VAR_17, ((void*)0), ((void*)0),
            FUNC_5(VAR_15), ((void*)0));
    if (VAR_16 == ((void*)0)) {
        goto fail;
    }


    VAR_19 = (PyArrayIterObject *)FUNC_9((PyObject *)VAR_15, &VAR_9);
    VAR_20 = (PyArrayIterObject *)FUNC_9((PyObject *)VAR_16, &VAR_9);
    if (VAR_19 == ((void*)0) || VAR_20 == ((void*)0)) {
        FUNC_21(VAR_19);
        FUNC_21(VAR_20);
        goto fail;
    }





    if (VAR_12 == 0) {
        npy_intp VAR_30;
        for (VAR_30=0; VAR_30 < 256; VAR_30++) {
            npy_intp VAR_31;
            for (VAR_31=0; VAR_31 < 8; VAR_31++) {
                npy_uint8 VAR_32 = (VAR_30 & (1 << VAR_31)) == (1 << VAR_31);
                VAR_13[VAR_30].bytes[7 - VAR_31] = VAR_32;
            }
        }
        VAR_12 = 1;
    }

    VAR_21 = FUNC_2(VAR_15, VAR_9) * 8;
    if (VAR_17[VAR_9] > VAR_21) {
        VAR_22 = VAR_21 / 8;
        VAR_23 = 0;
        VAR_24 = VAR_17[VAR_9] - VAR_21;
    }
    else {
        VAR_22 = VAR_17[VAR_9] / 8;
        VAR_23 = VAR_17[VAR_9] % 8;
        VAR_24 = 0;
    }

    VAR_25 = FUNC_14(VAR_15, VAR_9);
    VAR_26 = FUNC_14(VAR_16, VAR_9);

    FUNC_0(FUNC_15((PyObject *)VAR_16) / 8);

    while (FUNC_8(VAR_19)) {
        npy_intp VAR_33;
        unsigned const char *VAR_34 = FUNC_6(VAR_19);
        char *VAR_35 = FUNC_6(VAR_20);

        if (VAR_26 == 1) {

            if (VAR_11 == 'b') {
                for (VAR_33 = 0; VAR_33 < VAR_22; VAR_33++) {
                    npy_uint64 VAR_36 = VAR_13[*VAR_34].uint64;
                    FUNC_23(VAR_35, &VAR_36, 8);
                    VAR_35 += 8;
                    VAR_34 += VAR_25;
                }
            }
            else {
                for (VAR_33 = 0; VAR_33 < VAR_22; VAR_33++) {
                    npy_uint64 VAR_37 = VAR_13[*VAR_34].uint64;
                    if (VAR_11 != 'b') {
                        VAR_37 = FUNC_25(VAR_37);
                    }
                    FUNC_23(VAR_35, &VAR_37, 8);
                    VAR_35 += 8;
                    VAR_34 += VAR_25;
                }
            }

            if (VAR_23) {
                npy_uint64 VAR_38 = VAR_13[*VAR_34].uint64;
                if (VAR_11 != 'b') {
                    VAR_38 = FUNC_25(VAR_38);
                }
                FUNC_23(VAR_35, &VAR_38, VAR_23);
            }

            else if (VAR_24) {
                FUNC_24(VAR_35, 0, VAR_24);
            }
        }
        else {
            if (VAR_11 == 'b') {
                for (VAR_33 = 0; VAR_33 < VAR_22; VAR_33++) {
                    for (VAR_18 = 0; VAR_18 < 8; VAR_18++) {
                        *VAR_35 = ((*VAR_34 & (128 >> VAR_18)) != 0);
                        VAR_35 += VAR_26;
                    }
                    VAR_34 += VAR_25;
                }

                for (VAR_18 = 0; VAR_18 < VAR_23; VAR_18++) {
                    *VAR_35 = ((*VAR_34 & (128 >> VAR_18)) != 0);
                    VAR_35 += VAR_26;
                }
            }
            else {
                for (VAR_33 = 0; VAR_33 < VAR_22; VAR_33++) {
                    for (VAR_18 = 0; VAR_18 < 8; VAR_18++) {
                        *VAR_35 = ((*VAR_34 & (1 << VAR_18)) != 0);
                        VAR_35 += VAR_26;
                    }
                    VAR_34 += VAR_25;
                }

                for (VAR_18 = 0; VAR_18 < VAR_23; VAR_18++) {
                    *VAR_35 = ((*VAR_34 & (1 << VAR_18)) != 0);
                    VAR_35 += VAR_26;
                }
            }

            for (VAR_33 = 0; VAR_33 < VAR_24; VAR_33++) {
                *VAR_35 = 0;
                VAR_35 += VAR_26;
            }
        }

        FUNC_7(VAR_19);
        FUNC_7(VAR_20);
    }
    VAR_2;

    FUNC_19(VAR_19);
    FUNC_19(VAR_20);

    FUNC_19(VAR_15);
    return (PyObject *)VAR_16;

fail:
    FUNC_21(VAR_15);
    FUNC_21(VAR_16);
    return ((void*)0);
}

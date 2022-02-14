
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int op_request_dtypes ;
typedef int op_axes ;
typedef int npy_uint32 ;
struct TYPE_8__ {int started; int finished; int * iter; } ;
struct TYPE_7__ {int len; int * ptr; int member_1; int * member_0; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Dims ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;
typedef TYPE_2__ NewNpyArrayIterObject ;
typedef int NPY_ORDER ;
typedef int NPY_CASTING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,int**,int ,int ,int ,int *,int**,int,int**,int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,char*,char**,int **,int ,int *,int **,int **,int ,int *,int ,int *,int **,int ,TYPE_1__*,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int**,int ,int) ;
 int FUNC_6 (TYPE_1__) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int**,int) ;
 int FUNC_9 (int *,int,int**,int*) ;
 int FUNC_10 (int *,int *,int**,int *,int*) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_11(NewNpyArrayIterObject *VAR_10, PyObject *VAR_11, PyObject *VAR_12)
{
    static char *VAR_13[] = {"op", "flags", "op_flags", "op_dtypes",
                             "order", "casting", "op_axes", "itershape",
                             "buffersize",
                             ((void*)0)};

    PyObject *VAR_14 = ((void*)0), *VAR_15 = ((void*)0),
                *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);

    int VAR_18, VAR_19 = 0;
    PyArrayObject *VAR_20[VAR_1];
    npy_uint32 VAR_21 = 0;
    NPY_ORDER VAR_22 = VAR_0;
    NPY_CASTING VAR_23 = VAR_3;
    npy_uint32 VAR_24[VAR_1];
    PyArray_Descr *VAR_25[VAR_1];
    int VAR_26 = -1;
    int VAR_27[VAR_1][VAR_2];
    int *VAR_28[VAR_1];
    PyArray_Dims VAR_29 = {((void*)0), 0};
    int VAR_30 = 0;

    if (VAR_10->iter != ((void*)0)) {
        FUNC_3(VAR_7,
                "Iterator was already initialized");
        return -1;
    }

    if (!FUNC_2(VAR_11, VAR_12, "O|O&OOO&O&OO&i:nditer", VAR_13,
                    &VAR_14,
                    VAR_4, &VAR_21,
                    &VAR_15,
                    &VAR_16,
                    VAR_9, &VAR_22,
                    VAR_5, &VAR_23,
                    &VAR_17,
                    VAR_6, &VAR_29,
                    &VAR_30)) {
        FUNC_6(VAR_29);
        return -1;
    }


    FUNC_5(VAR_25, 0, sizeof(VAR_25));


    if (FUNC_10(VAR_14, VAR_15, VAR_20, VAR_24, &VAR_19)
                                                        != 1) {
        goto fail;
    }


    if (VAR_16 != ((void*)0) && VAR_16 != VAR_8 &&
            FUNC_8(VAR_16,
                                   VAR_25, VAR_19) != 1) {
        goto fail;
    }


    if (VAR_17 != ((void*)0) && VAR_17 != VAR_8) {

        for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18) {
            VAR_28[VAR_18] = VAR_27[VAR_18];
        }

        if (FUNC_9(VAR_17, VAR_19,
                                    VAR_28, &VAR_26) != 1) {
            goto fail;
        }
    }

    if (VAR_29.len > 0) {
        if (VAR_26 == -1) {
            VAR_26 = VAR_29.len;
            FUNC_5(VAR_28, 0, sizeof(VAR_28[0]) * VAR_19);
        }
        else if (VAR_26 != VAR_29.len) {
            FUNC_3(VAR_7,
                        "'op_axes' and 'itershape' must have the same number "
                        "of entries equal to the iterator ndim");
            goto fail;
        }
    }
    else if (VAR_29.ptr != ((void*)0)) {
        FUNC_6(VAR_29);
        VAR_29.ptr = ((void*)0);
    }

    VAR_10->iter = FUNC_0(VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24,
                                  VAR_25,
                                  VAR_26, VAR_26 >= 0 ? VAR_28 : ((void*)0),
                                  VAR_29.ptr,
                                  VAR_30);

    if (VAR_10->iter == ((void*)0)) {
        goto fail;
    }


    if (FUNC_7(VAR_10) < 0) {
        goto fail;
    }

    if (FUNC_1(VAR_10->iter) == 0) {
        VAR_10->started = 1;
        VAR_10->finished = 1;
    }
    else {
        VAR_10->started = 0;
        VAR_10->finished = 0;
    }

    FUNC_6(VAR_29);


    for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18) {
        FUNC_4(VAR_20[VAR_18]);
        FUNC_4(VAR_25[VAR_18]);
    }

    return 0;

fail:
    FUNC_6(VAR_29);
    for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18) {
        FUNC_4(VAR_20[VAR_18]);
        FUNC_4(VAR_25[VAR_18]);
    }
    return -1;
}

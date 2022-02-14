
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ npy_longlong ;
typedef int npy_intp ;
struct TYPE_15__ {int len; int flags; int * base; int * ptr; } ;
struct TYPE_14__ {int elsize; } ;
struct TYPE_13__ {int* ptr; int len; int member_1; int * member_0; } ;
typedef int PyTypeObject ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Dims ;
typedef TYPE_2__ PyArray_Descr ;
typedef TYPE_3__ PyArray_Chunk ;
typedef int PyArrayObject ;
typedef scalar_t__ NPY_ORDER ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,char*,char**,int ,TYPE_1__*,int ,TYPE_2__**,int ,TYPE_3__*,scalar_t__*,int *,TYPE_1__*,int *,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_1 (int,int,int,int,int*,int*) ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_7 ;
 int FUNC_4 (int*,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*,int,int*,int*,char*,int,int *,int *,int ,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_1__) ;

__attribute__((used)) static PyObject *
FUNC_11(PyTypeObject *VAR_12, PyObject *VAR_13, PyObject *VAR_14)
{
    static char *VAR_15[] = {"shape", "dtype", "buffer", "offset", "strides",
                             "order", ((void*)0)};
    PyArray_Descr *VAR_16 = ((void*)0);
    int VAR_17;
    PyArray_Dims VAR_18 = {((void*)0), 0};
    PyArray_Dims VAR_19 = {((void*)0), 0};
    PyArray_Chunk VAR_20;
    npy_longlong VAR_21 = 0;
    NPY_ORDER VAR_22 = VAR_1;
    int VAR_23 = 0;
    PyArrayObject *VAR_24;

    VAR_20.ptr = ((void*)0);





    if (!FUNC_0(VAR_13, VAR_14, "O&|O&O&LO&O&:ndarray",
                                     VAR_15, VAR_7,
                                     &VAR_18,
                                     VAR_6,
                                     &VAR_16,
                                     VAR_5,
                                     &VAR_20,
                                     &VAR_21,
                                     &VAR_7,
                                     &VAR_19,
                                     &VAR_8,
                                     &VAR_22)) {
        goto fail;
    }
    if (VAR_22 == VAR_3) {
        VAR_23 = 1;
    }
    if (VAR_16 == ((void*)0)) {
        VAR_16 = FUNC_2(VAR_2);
    }

    VAR_17 = VAR_16->elsize;

    if (VAR_19.ptr != ((void*)0)) {
        npy_intp VAR_25, VAR_26;
        if (VAR_19.len != VAR_18.len) {
            FUNC_8(VAR_10,
                            "strides, if given, must be " "the same length as shape");

            goto fail;
        }

        if (VAR_20.ptr == ((void*)0)) {
            VAR_25 = 0;
            VAR_26 = 0;
        }
        else {
            VAR_25 = VAR_20.len;
            VAR_26 = (npy_intp) VAR_21;
        }


        if (!FUNC_1(VAR_17, VAR_18.len,
                                  VAR_25, VAR_26,
                                  VAR_18.ptr, VAR_19.ptr)) {
            FUNC_8(VAR_10,
                            "strides is incompatible " "with shape of requested " "array and size of buffer");


            goto fail;
        }
    }

    if (VAR_20.ptr == ((void*)0)) {
        VAR_24 = (PyArrayObject *)
            FUNC_5(VAR_12, VAR_16,
                                     (int)VAR_18.len,
                                     VAR_18.ptr,
                                     VAR_19.ptr, ((void*)0), VAR_23, ((void*)0), ((void*)0),
                                     0, 1);
        if (VAR_24 == ((void*)0)) {
            VAR_16 = ((void*)0);
            goto fail;
        }
        if (FUNC_6(VAR_16, VAR_4)) {

            FUNC_3(VAR_24, VAR_11);
            if (FUNC_7()) {
                VAR_16 = ((void*)0);
                goto fail;
            }
        }
    }
    else {

        if (VAR_18.len == 1 && VAR_18.ptr[0] == -1) {
            VAR_18.ptr[0] = (VAR_20.len-(npy_intp)VAR_21) / VAR_17;
        }
        else if ((VAR_19.ptr == ((void*)0)) &&
                 (VAR_20.len < (VAR_21 + (((npy_intp)VAR_17)*
                                          FUNC_4(VAR_18.ptr,
                                                               VAR_18.len))))) {
            FUNC_8(VAR_9,
                            "buffer is too small for " "requested array");

            goto fail;
        }

        if (VAR_23) {
            VAR_20.flags |= VAR_0;
        }
        VAR_24 = (PyArrayObject *)FUNC_5(
                VAR_12, VAR_16,
                VAR_18.len, VAR_18.ptr, VAR_19.ptr, VAR_21 + (char *)VAR_20.ptr,
                VAR_20.flags, ((void*)0), VAR_20.base,
                0, 1);
        if (VAR_24 == ((void*)0)) {
            VAR_16 = ((void*)0);
            goto fail;
        }
    }

    FUNC_10(VAR_18);
    FUNC_10(VAR_19);
    return (PyObject *)VAR_24;

 fail:
    FUNC_9(VAR_16);
    FUNC_10(VAR_18);
    FUNC_10(VAR_19);
    return ((void*)0);
}

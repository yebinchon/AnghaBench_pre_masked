
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ndim; void** shape; void** strides; int * format; } ;
typedef TYPE_1__ _buffer_info_t ;
struct TYPE_6__ {int readonly; int ndim; void** shape; int * obj; void** strides; void* itemsize; int * format; int len; int * internal; int * suboffsets; int buf; } ;
typedef void* Py_ssize_t ;
typedef TYPE_2__ Py_buffer ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,char*) ;
 int VAR_10 ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(PyObject *VAR_11, Py_buffer *VAR_12, int VAR_13)
{
    PyArrayObject *VAR_14;
    _buffer_info_t *VAR_15 = ((void*)0);

    VAR_14 = (PyArrayObject*)VAR_11;


    if ((VAR_13 & VAR_4) == VAR_4 &&
            !FUNC_0(VAR_14, VAR_0)) {
        FUNC_7(VAR_10, "ndarray is not C-contiguous");
        goto fail;
    }
    if ((VAR_13 & VAR_6) == VAR_6 &&
            !FUNC_0(VAR_14, VAR_1)) {
        FUNC_7(VAR_10, "ndarray is not Fortran contiguous");
        goto fail;
    }
    if ((VAR_13 & VAR_3) == VAR_3
            && !FUNC_3(VAR_14)) {
        FUNC_7(VAR_10, "ndarray is not contiguous");
        goto fail;
    }
    if ((VAR_13 & VAR_8) != VAR_8 &&
            !FUNC_0(VAR_14, VAR_0)) {

        FUNC_7(VAR_10, "ndarray is not C-contiguous");
        goto fail;
    }
    if ((VAR_13 & VAR_9) == VAR_9) {
        if (FUNC_2(VAR_14, "buffer source array") < 0) {
            goto fail;
        }
    }

    if (VAR_12 == ((void*)0)) {
        FUNC_7(VAR_10, "NULL view in getbuffer");
        goto fail;
    }


    VAR_15 = FUNC_9(VAR_11);
    if (VAR_15 == ((void*)0)) {
        goto fail;
    }

    VAR_12->buf = FUNC_1(VAR_14);
    VAR_12->suboffsets = ((void*)0);
    VAR_12->itemsize = FUNC_5(VAR_14);
    VAR_12->readonly = (!FUNC_4(VAR_14) ||
                      FUNC_0(VAR_14, VAR_2));
    VAR_12->internal = ((void*)0);
    VAR_12->len = FUNC_6(VAR_14);
    if ((VAR_13 & VAR_5) == VAR_5) {
        VAR_12->format = VAR_15->format;
    } else {
        VAR_12->format = ((void*)0);
    }
    if ((VAR_13 & VAR_7) == VAR_7) {
        VAR_12->ndim = VAR_15->ndim;
        VAR_12->shape = VAR_15->shape;
    }
    else {
        VAR_12->ndim = 0;
        VAR_12->shape = ((void*)0);
    }
    if ((VAR_13 & VAR_8) == VAR_8) {
        VAR_12->strides = VAR_15->strides;
    }
    else {
        VAR_12->strides = ((void*)0);
    }
    VAR_12->obj = (PyObject*)VAR_14;

    FUNC_8(VAR_14);
    return 0;

fail:
    return -1;
}

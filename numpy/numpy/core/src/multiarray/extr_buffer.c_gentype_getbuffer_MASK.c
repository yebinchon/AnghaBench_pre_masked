
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * format; int strides; int shape; int ndim; } ;
typedef TYPE_1__ _buffer_info_t ;
struct TYPE_11__ {int elsize; scalar_t__ type_num; } ;
struct TYPE_10__ {int len; int itemsize; int readonly; int * obj; int * suboffsets; void* buf; int * format; int strides; int shape; int ndim; } ;
typedef TYPE_2__ Py_buffer ;
typedef int PyObject ;
typedef TYPE_3__ PyArray_Descr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 TYPE_1__* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,TYPE_3__*) ;

int
FUNC_7(PyObject *VAR_6, Py_buffer *VAR_7, int VAR_8)
{
    _buffer_info_t *VAR_9 = ((void*)0);
    PyArray_Descr *VAR_10 = ((void*)0);
    int VAR_11;

    if (VAR_8 & VAR_3) {
        FUNC_2(VAR_4, "scalar buffer is readonly");
        goto fail;
    }


    VAR_9 = FUNC_5(VAR_6);
    if (VAR_9 == ((void*)0)) {
        goto fail;
    }

    VAR_7->ndim = VAR_9->ndim;
    VAR_7->shape = VAR_9->shape;
    VAR_7->strides = VAR_9->strides;

    if ((VAR_8 & VAR_2) == VAR_2) {
        VAR_7->format = VAR_9->format;
    } else {
        VAR_7->format = ((void*)0);
    }

    VAR_10 = FUNC_0(VAR_6);
    VAR_7->buf = (void *)FUNC_6(VAR_6, VAR_10);
    VAR_11 = VAR_10->elsize;

    if (VAR_10->type_num == VAR_1) {
        VAR_11 >>= 1;
    }

    VAR_7->len = VAR_11;
    if (FUNC_1(VAR_6, VAR_0) || FUNC_1(VAR_6, VAR_5)) {
        VAR_11 = 1;
    }
    VAR_7->itemsize = VAR_11;

    FUNC_3(VAR_10);

    VAR_7->readonly = 1;
    VAR_7->suboffsets = ((void*)0);
    VAR_7->obj = VAR_6;
    FUNC_4(VAR_6);
    return 0;

fail:
    VAR_7->obj = ((void*)0);
    return -1;
}

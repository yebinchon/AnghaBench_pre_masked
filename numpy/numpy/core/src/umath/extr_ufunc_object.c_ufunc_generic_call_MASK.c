
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * out; int * in; int * member_1; int * member_0; } ;
typedef TYPE_1__ ufunc_full_args ;
struct TYPE_11__ {int out_i; TYPE_1__ args; TYPE_3__* ufunc; } ;
typedef TYPE_2__ _ufunc_context ;
struct TYPE_12__ {int nin; int nout; int nargs; } ;
typedef TYPE_3__ PyUFuncObject ;
typedef int PyTupleObject ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (TYPE_3__*,char*,int *,int *,int **) ;
 int FUNC_3 (TYPE_3__*,int *,int *,int **) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__,int *,int **,int,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int,int,int *,int *) ;

__attribute__((used)) static PyObject *
FUNC_9(PyUFuncObject *VAR_1, PyObject *VAR_2, PyObject *VAR_3)
{
    int VAR_4;
    PyArrayObject *VAR_5[VAR_0];
    PyObject *VAR_6[VAR_0];
    PyObject *VAR_7[VAR_0];
    PyObject *VAR_8 = ((void*)0);
    ufunc_full_args VAR_9 = {((void*)0), ((void*)0)};
    int VAR_10;

    VAR_10 = FUNC_2(VAR_1, "__call__", VAR_2, VAR_3, &VAR_8);
    if (VAR_10) {
        return ((void*)0);
    }
    else if (VAR_8) {
        return VAR_8;
    }

    VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_5);
    if (VAR_10 < 0) {
        return ((void*)0);
    }


    for (VAR_4 = 0; VAR_4 < VAR_1->nin; VAR_4++) {
        FUNC_5(VAR_5[VAR_4]);
    }
    if (FUNC_8(&VAR_9, VAR_1->nin, VAR_1->nout, VAR_2, VAR_3) < 0) {
        goto fail;
    }
    FUNC_7(VAR_9, VAR_3, VAR_7, VAR_1->nin, VAR_1->nout);


    for (VAR_4 = 0; VAR_4 < VAR_1->nout; VAR_4++) {
        int VAR_11 = VAR_1->nin+VAR_4;
        _ufunc_context VAR_12;
        PyObject *VAR_13;

        VAR_12.ufunc = VAR_1;
        VAR_12.args = VAR_9;
        VAR_12.out_i = VAR_4;

        VAR_13 = FUNC_6(VAR_7[VAR_4], VAR_5[VAR_11], &VAR_12);
        VAR_5[VAR_11] = ((void*)0);
        if (VAR_13 == ((void*)0)) {
            for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
                FUNC_4(VAR_6[VAR_11]);
            }
            goto fail;
        }

        VAR_6[VAR_4] = VAR_13;
    }

    FUNC_5(VAR_9.in);
    FUNC_5(VAR_9.out);

    if (VAR_1->nout == 1) {
        return VAR_6[0];
    }
    else {
        PyTupleObject *VAR_14;

        VAR_14 = (PyTupleObject *)FUNC_0(VAR_1->nout);
        for (VAR_4 = 0; VAR_4 < VAR_1->nout; VAR_4++) {
            FUNC_1(VAR_14, VAR_4, VAR_6[VAR_4]);
        }
        return (PyObject *)VAR_14;
    }

fail:
    FUNC_5(VAR_9.in);
    FUNC_5(VAR_9.out);
    for (VAR_4 = VAR_1->nin; VAR_4 < VAR_1->nargs; VAR_4++) {
        FUNC_5(VAR_5[VAR_4]);
    }
    return ((void*)0);
}

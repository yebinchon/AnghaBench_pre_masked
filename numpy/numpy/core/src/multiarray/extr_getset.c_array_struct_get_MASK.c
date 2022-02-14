
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_8__ {int elsize; int kind; } ;
struct TYPE_7__ {int two; int nd; int flags; int * descr; int data; int * strides; int * shape; int itemsize; int typekind; } ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef TYPE_1__ PyArrayInterface ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int FUNC_12 () ;
 int * FUNC_13 () ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int * FUNC_16 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_17 (int *,int ,int) ;

__attribute__((used)) static PyObject *
FUNC_18(PyArrayObject *VAR_6)
{
    PyArrayInterface *VAR_7;
    PyObject *VAR_8;

    if (FUNC_6(VAR_6)) {
        if (FUNC_15(VAR_6) < 0) {
            return ((void*)0);
        }
    }
    VAR_7 = (PyArrayInterface *)FUNC_10(sizeof(PyArrayInterface));
    if (VAR_7==((void*)0)) {
        return FUNC_13();
    }
    VAR_7->two = 2;
    VAR_7->nd = FUNC_7(VAR_6);
    VAR_7->typekind = FUNC_2(VAR_6)->kind;
    VAR_7->itemsize = FUNC_2(VAR_6)->elsize;
    VAR_7->flags = FUNC_4(VAR_6);

    VAR_7->flags &= ~(VAR_3 | VAR_2 |VAR_1);
    if (FUNC_5(VAR_6)) VAR_7->flags |= VAR_0;




    if (FUNC_7(VAR_6) > 0) {
        VAR_7->shape = (npy_intp *)FUNC_10(2*sizeof(npy_intp)*FUNC_7(VAR_6));
        if (VAR_7->shape == ((void*)0)) {
            FUNC_9(VAR_7);
            return FUNC_13();
        }
        VAR_7->strides = VAR_7->shape + FUNC_7(VAR_6);
        if (FUNC_7(VAR_6)) {
            FUNC_17(VAR_7->shape, FUNC_3(VAR_6), sizeof(npy_intp)*FUNC_7(VAR_6));
            FUNC_17(VAR_7->strides, FUNC_8(VAR_6), sizeof(npy_intp)*FUNC_7(VAR_6));
        }
    }
    else {
        VAR_7->shape = ((void*)0);
        VAR_7->strides = ((void*)0);
    }
    VAR_7->data = FUNC_1(VAR_6);
    if (FUNC_11(FUNC_2(VAR_6))) {
        VAR_7->descr = FUNC_16(FUNC_2(VAR_6));
        if (VAR_7->descr == ((void*)0)) {
            FUNC_12();
        }
        else {
            VAR_7->flags &= VAR_4;
        }
    }
    else {
        VAR_7->descr = ((void*)0);
    }
    FUNC_14(VAR_6);
    VAR_8 = FUNC_0(VAR_7, VAR_6, VAR_5);
    return VAR_8;
}

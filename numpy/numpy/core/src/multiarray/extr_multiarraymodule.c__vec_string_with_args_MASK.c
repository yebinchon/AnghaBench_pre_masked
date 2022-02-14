
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_1__ ;


struct TYPE_32__ {int numiter; int ao; struct TYPE_32__** iters; int dimensions; int nd; } ;
typedef int Py_ssize_t ;
typedef TYPE_1__ PyObject ;
typedef TYPE_1__ PyArray_Descr ;
typedef TYPE_1__ PyArrayObject ;
typedef TYPE_1__ PyArrayMultiIterObject ;
typedef TYPE_1__ PyArrayIterObject ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__**,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*) ;
 TYPE_1__* FUNC_14 (int) ;
 int FUNC_15 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_18(PyArrayObject* VAR_3, PyArray_Descr* VAR_4,
                      PyObject* VAR_5, PyObject* VAR_6)
{
    PyObject* VAR_7[VAR_0];
    PyArrayMultiIterObject* VAR_8 = ((void*)0);
    PyArrayObject* VAR_9 = ((void*)0);
    PyArrayIterObject* VAR_10 = ((void*)0);
    Py_ssize_t VAR_11, VAR_12, VAR_13;

    VAR_13 = FUNC_13(VAR_6) + 1;
    if (VAR_13 == -1 || VAR_13 > VAR_0) {
        FUNC_9(VAR_2,
                "len(args) must be < %d", VAR_0 - 1);
        FUNC_16(VAR_4);
        goto err;
    }

    VAR_7[0] = (PyObject*)VAR_3;
    for (VAR_11 = 1; VAR_11 < VAR_13; VAR_11++) {
        PyObject* VAR_14 = FUNC_12(VAR_6, VAR_11-1);
        if (VAR_14 == ((void*)0)) {
            FUNC_16(VAR_4);
            goto err;
        }
        VAR_7[VAR_11] = VAR_14;
        FUNC_16(VAR_14);
    }
    VAR_8 = (PyArrayMultiIterObject*)FUNC_3
        (VAR_7, VAR_13, 0);
    if (VAR_8 == ((void*)0)) {
        FUNC_16(VAR_4);
        goto err;
    }
    VAR_12 = VAR_8->numiter;

    VAR_9 = (PyArrayObject*)FUNC_7(VAR_8->nd,
            VAR_8->dimensions, VAR_4);
    if (VAR_9 == ((void*)0)) {
        goto err;
    }

    VAR_10 = (PyArrayIterObject*)FUNC_2((PyObject*)VAR_9);
    if (VAR_10 == ((void*)0)) {
        goto err;
    }

    while (FUNC_5(VAR_8)) {
        PyObject* VAR_15;
        PyObject* VAR_16 = FUNC_14(VAR_12);
        if (VAR_16 == ((void*)0)) {
            goto err;
        }

        for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
            PyArrayIterObject* VAR_17 = VAR_8->iters[VAR_11];
            PyObject* VAR_18 = FUNC_8(FUNC_0(VAR_17), VAR_17->ao);
            if (VAR_18 == ((void*)0)) {
                FUNC_16(VAR_16);
                goto err;
            }

            FUNC_15(VAR_16, VAR_11, VAR_18);
        }

        VAR_15 = FUNC_11(VAR_5, VAR_16);
        FUNC_16(VAR_16);
        if (VAR_15 == ((void*)0)) {
            goto err;
        }

        if (FUNC_6(VAR_9, FUNC_0(VAR_10), VAR_15)) {
            FUNC_16(VAR_15);
            FUNC_10( VAR_1,
                    "result array type does not match underlying function");
            goto err;
        }
        FUNC_16(VAR_15);

        FUNC_4(VAR_8);
        FUNC_1(VAR_10);
    }

    FUNC_16(VAR_8);
    FUNC_16(VAR_10);

    return (PyObject*)VAR_9;

 err:
    FUNC_17(VAR_8);
    FUNC_17(VAR_10);
    FUNC_17(VAR_9);

    return 0;
}

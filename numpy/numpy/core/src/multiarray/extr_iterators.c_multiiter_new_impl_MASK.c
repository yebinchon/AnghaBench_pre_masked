
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ ao; } ;
struct TYPE_17__ {scalar_t__ numiter; TYPE_3__** iters; } ;
typedef TYPE_1__ PyObject ;
typedef TYPE_1__ PyArrayMultiIterObject ;
typedef TYPE_3__ PyArrayIterObject ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;

__attribute__((used)) static PyObject*
FUNC_10(int VAR_2, PyObject **VAR_3)
{
    PyArrayMultiIterObject *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_4(sizeof(PyArrayMultiIterObject));
    if (VAR_4 == ((void*)0)) {
        return FUNC_5();
    }
    FUNC_6((PyObject *)VAR_4, &VAR_1);
    VAR_4->numiter = 0;

    for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
        PyObject *VAR_6 = VAR_3[VAR_5];
        PyObject *VAR_7;
        PyArrayIterObject *VAR_8;

        if (FUNC_7(VAR_6, (PyObject *)&VAR_1)) {
            PyArrayMultiIterObject *VAR_9 = (PyArrayMultiIterObject *)VAR_6;
            int VAR_10;

            if (VAR_4->numiter + VAR_9->numiter > VAR_0) {
                FUNC_9();
                goto fail;
            }
            for (VAR_10 = 0; VAR_10 < VAR_9->numiter; ++VAR_10) {
                VAR_7 = (PyObject *)VAR_9->iters[VAR_10]->ao;
                VAR_8 = (PyArrayIterObject *)FUNC_2(VAR_7);
                if (VAR_8 == ((void*)0)) {
                    goto fail;
                }
                VAR_4->iters[VAR_4->numiter++] = VAR_8;
            }
        }
        else if (VAR_4->numiter < VAR_0) {
            VAR_7 = FUNC_1(VAR_6, ((void*)0), 0, 0, 0, ((void*)0));
            if (VAR_7 == ((void*)0)) {
                goto fail;
            }
            VAR_8 = (PyArrayIterObject *)FUNC_2(VAR_7);
            FUNC_8(VAR_7);
            if (VAR_8 == ((void*)0)) {
                goto fail;
            }
            VAR_4->iters[VAR_4->numiter++] = VAR_8;
        }
        else {
            FUNC_9();
            goto fail;
        }
    }

    if (VAR_4->numiter < 0) {
        FUNC_9();
        goto fail;
    }
    if (FUNC_0(VAR_4) < 0) {
        goto fail;
    }
    FUNC_3(VAR_4);

    return (PyObject *)VAR_4;

fail:
    FUNC_8(VAR_4);

    return ((void*)0);
}

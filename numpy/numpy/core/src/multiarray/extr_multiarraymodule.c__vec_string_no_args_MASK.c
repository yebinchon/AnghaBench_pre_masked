
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {int ao; int dataptr; } ;
typedef TYPE_1__ PyObject ;
typedef TYPE_1__ PyArray_Descr ;
typedef TYPE_1__ PyArrayObject ;
typedef TYPE_1__ PyArrayIterObject ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_10 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_13(PyArrayObject* VAR_1,
                                   PyArray_Descr* VAR_2, PyObject* VAR_3)
{






    PyArrayIterObject* VAR_4 = ((void*)0);
    PyArrayObject* VAR_5 = ((void*)0);
    PyArrayIterObject* VAR_6 = ((void*)0);

    VAR_4 = (PyArrayIterObject*)FUNC_4((PyObject*)VAR_1);
    if (VAR_4 == ((void*)0)) {
        FUNC_11(VAR_2);
        goto err;
    }

    VAR_5 = (PyArrayObject*)FUNC_7(
            FUNC_5(VAR_1), FUNC_0(VAR_1), VAR_2);
    if (VAR_5 == ((void*)0)) {
        goto err;
    }

    VAR_6 = (PyArrayIterObject*)FUNC_4((PyObject*)VAR_5);
    if (VAR_6 == ((void*)0)) {
        goto err;
    }

    while (FUNC_3(VAR_4)) {
        PyObject* VAR_7;
        PyObject* VAR_8 = FUNC_8(VAR_4->dataptr, VAR_4->ao);
        if (VAR_8 == ((void*)0)) {
            goto err;
        }

        VAR_7 = FUNC_10(VAR_3, VAR_8, ((void*)0));
        FUNC_11(VAR_8);
        if (VAR_7 == ((void*)0)) {
            goto err;
        }

        if (FUNC_6(VAR_5, FUNC_1(VAR_6), VAR_7)) {
            FUNC_11(VAR_7);
            FUNC_9( VAR_0,
                "result array type does not match underlying function");
            goto err;
        }
        FUNC_11(VAR_7);

        FUNC_2(VAR_4);
        FUNC_2(VAR_6);
    }

    FUNC_11(VAR_4);
    FUNC_11(VAR_6);

    return (PyObject*)VAR_5;

 err:
    FUNC_12(VAR_4);
    FUNC_12(VAR_6);
    FUNC_12(VAR_5);

    return 0;
}

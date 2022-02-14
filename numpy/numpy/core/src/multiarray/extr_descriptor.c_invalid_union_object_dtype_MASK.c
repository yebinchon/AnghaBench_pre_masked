
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char kind; int fields; int * names; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(PyArray_Descr *VAR_1, PyArray_Descr *VAR_2)
{
    PyObject *VAR_3, *VAR_4;
    PyArray_Descr *VAR_5;

    if (!FUNC_1(VAR_1) && !FUNC_1(VAR_2)) {
        return 0;
    }
    if (FUNC_0(VAR_1) || VAR_1->kind != 'O') {
        goto fail;
    }
    if (!FUNC_0(VAR_2) || FUNC_5(VAR_2->names) != 1) {
        goto fail;
    }
    VAR_3 = FUNC_4(VAR_2->names, 0);
    if (VAR_3 == ((void*)0)) {
        return -1;
    }
    VAR_4 = FUNC_2(VAR_2->fields, VAR_3);
    if (VAR_4 == ((void*)0)) {
        return -1;
    }
    VAR_5 = (PyArray_Descr *)FUNC_4(VAR_4, 0);
    if (VAR_5 == ((void*)0)) {
        return -1;
    }
    if (VAR_5->kind != 'O') {
        goto fail;
    }
    return 0;

fail:
    FUNC_3(VAR_0,
            "dtypes of the form (old_dtype, new_dtype) containing the object "
            "dtype are not supported");
    return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* descr; } ;
struct TYPE_9__ {int * names; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;
typedef TYPE_2__ PyArrayObject_fields ;
typedef int PyArrayObject ;
typedef int NPY_SORTKIND ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,int ,int*,int ,int *,int **) ;
 int * FUNC_1 (int *,int,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_3 ;
 int * FUNC_7 (char*) ;
 int * FUNC_8 (int *,char*,char*,TYPE_1__*,int *) ;
 int FUNC_9 (int *) ;
 int * VAR_4 ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_11(PyArrayObject *VAR_5, PyObject *VAR_6, PyObject *VAR_7)
{
    int VAR_8 = -1;
    NPY_SORTKIND VAR_9 = VAR_0;
    PyObject *VAR_10 = ((void*)0), *VAR_11;
    PyArray_Descr *VAR_12, *VAR_13=((void*)0);
    static char *VAR_14[] = {"axis", "kind", "order", ((void*)0)};

    if (!FUNC_0(VAR_6, VAR_7, "|O&O&O:argsort", VAR_14,
                                     VAR_1, &VAR_8,
                                     VAR_2, &VAR_9,
                                     &VAR_10)) {
        return ((void*)0);
    }
    if (VAR_10 == VAR_4) {
        VAR_10 = ((void*)0);
    }
    if (VAR_10 != ((void*)0)) {
        PyObject *VAR_15;
        PyObject *VAR_16;
        VAR_13 = FUNC_2(VAR_5);
        if (!FUNC_5(VAR_13)) {
            FUNC_6(VAR_3, "Cannot specify "
                            "order when the array has no fields.");
            return ((void*)0);
        }
        VAR_16 = FUNC_7("numpy.core._internal");
        if (VAR_16 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_15 = FUNC_8(VAR_16, "_newnames",
                                       "OO", VAR_13, VAR_10);
        FUNC_9(VAR_16);
        if (VAR_15 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_12 = FUNC_3(VAR_13);
        FUNC_9(VAR_12->names);
        VAR_12->names = VAR_15;
        ((PyArrayObject_fields *)VAR_5)->descr = VAR_12;
    }

    VAR_11 = FUNC_1(VAR_5, VAR_8, VAR_9);
    if (VAR_10 != ((void*)0)) {
        FUNC_10(FUNC_2(VAR_5));
        ((PyArrayObject_fields *)VAR_5)->descr = VAR_13;
    }
    return FUNC_4((PyArrayObject *)VAR_11);
}

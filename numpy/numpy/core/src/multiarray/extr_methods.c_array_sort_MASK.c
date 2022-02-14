
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
 int FUNC_0 (int *,int *,char*,char**,int*,int ,int *,int **) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;
 int * FUNC_6 (char*) ;
 int * FUNC_7 (int *,char*,char*,TYPE_1__*,int *) ;
 int FUNC_8 (int *) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_10(PyArrayObject *VAR_5, PyObject *VAR_6, PyObject *VAR_7)
{
    int VAR_8=-1;
    int VAR_9;
    NPY_SORTKIND VAR_10 = VAR_0;
    PyObject *VAR_11 = ((void*)0);
    PyArray_Descr *VAR_12 = ((void*)0);
    PyArray_Descr *VAR_13;
    static char *VAR_14[] = {"axis", "kind", "order", ((void*)0)};

    if (!FUNC_0(VAR_6, VAR_7, "|iO&O:sort", VAR_14,
                                    &VAR_8,
                                    VAR_1, &VAR_10,
                                    &VAR_11)) {
        return ((void*)0);
    }
    if (VAR_11 == VAR_3) {
        VAR_11 = ((void*)0);
    }
    if (VAR_11 != ((void*)0)) {
        PyObject *VAR_15;
        PyObject *VAR_16;
        VAR_12 = FUNC_1(VAR_5);
        if (!FUNC_4(VAR_12)) {
            FUNC_5(VAR_2, "Cannot specify " "order when the array has no fields.");

            return ((void*)0);
        }
        VAR_16 = FUNC_6("numpy.core._internal");
        if (VAR_16 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_15 = FUNC_7(VAR_16, "_newnames",
                                       "OO", VAR_12, VAR_11);
        FUNC_8(VAR_16);
        if (VAR_15 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_13 = FUNC_2(VAR_12);
        FUNC_8(VAR_13->names);
        VAR_13->names = VAR_15;
        ((PyArrayObject_fields *)VAR_5)->descr = VAR_13;
    }

    VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_10);
    if (VAR_11 != ((void*)0)) {
        FUNC_9(FUNC_1(VAR_5));
        ((PyArrayObject_fields *)VAR_5)->descr = VAR_12;
    }
    if (VAR_9 < 0) {
        return ((void*)0);
    }
    VAR_4;
}

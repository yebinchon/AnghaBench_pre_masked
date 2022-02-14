
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
typedef int NPY_SELECTKIND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,char*,char**,int **,int*,int ,int *,int **) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int,int ,int *) ;
 int FUNC_4 (int *,int *,int,int ) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_3 ;
 int * FUNC_7 (char*) ;
 int * FUNC_8 (int *,char*,char*,TYPE_1__*,int *) ;
 int FUNC_9 (int *) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_11(PyArrayObject *VAR_6, PyObject *VAR_7, PyObject *VAR_8)
{
    int VAR_9=-1;
    int VAR_10;
    NPY_SELECTKIND VAR_11 = VAR_1;
    PyObject *VAR_12 = ((void*)0);
    PyArray_Descr *VAR_13 = ((void*)0);
    PyArray_Descr *VAR_14;
    static char *VAR_15[] = {"kth", "axis", "kind", "order", ((void*)0)};
    PyArrayObject * VAR_16;
    PyObject * VAR_17;


    if (!FUNC_0(VAR_7, VAR_8, "O|iO&O:partition", VAR_15,
                                     &VAR_17,
                                     &VAR_9,
                                     VAR_2, &VAR_11,
                                     &VAR_12)) {
        return ((void*)0);
    }

    if (VAR_12 == VAR_4) {
        VAR_12 = ((void*)0);
    }
    if (VAR_12 != ((void*)0)) {
        PyObject *VAR_18;
        PyObject *VAR_19;
        VAR_13 = FUNC_1(VAR_6);
        if (!FUNC_5(VAR_13)) {
            FUNC_6(VAR_3, "Cannot specify " "order when the array has no fields.");

            return ((void*)0);
        }
        VAR_19 = FUNC_7("numpy.core._internal");
        if (VAR_19 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_18 = FUNC_8(VAR_19, "_newnames",
                                       "OO", VAR_13, VAR_12);
        FUNC_9(VAR_19);
        if (VAR_18 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_14 = FUNC_2(VAR_13);
        FUNC_9(VAR_14->names);
        VAR_14->names = VAR_18;
        ((PyArrayObject_fields *)VAR_6)->descr = VAR_14;
    }

    VAR_16 = (PyArrayObject *)FUNC_3(VAR_17, ((void*)0), 0, 1,
                                                VAR_0, ((void*)0));
    if (VAR_16 == ((void*)0))
        return ((void*)0);

    VAR_10 = FUNC_4(VAR_6, VAR_16, VAR_9, VAR_11);
    FUNC_9(VAR_16);

    if (VAR_12 != ((void*)0)) {
        FUNC_10(FUNC_1(VAR_6));
        ((PyArrayObject_fields *)VAR_6)->descr = VAR_13;
    }
    if (VAR_10 < 0) {
        return ((void*)0);
    }
    VAR_5;
}

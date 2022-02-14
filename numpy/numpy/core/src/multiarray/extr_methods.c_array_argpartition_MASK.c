
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
 int FUNC_0 (int *,int *,char*,char**,int **,int ,int*,int ,int *,int **) ;
 int * FUNC_1 (int *,int *,int,int ) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int,int ,int *) ;
 int * FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*) ;
 int VAR_4 ;
 int * FUNC_8 (char*) ;
 int * FUNC_9 (int *,char*,char*,TYPE_1__*,int *) ;
 int FUNC_10 (int *) ;
 int * VAR_5 ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_12(PyArrayObject *VAR_6, PyObject *VAR_7, PyObject *VAR_8)
{
    int VAR_9 = -1;
    NPY_SELECTKIND VAR_10 = VAR_1;
    PyObject *VAR_11 = ((void*)0), *VAR_12;
    PyArray_Descr *VAR_13, *VAR_14=((void*)0);
    static char *VAR_15[] = {"kth", "axis", "kind", "order", ((void*)0)};
    PyObject * VAR_16;
    PyArrayObject * VAR_17;

    if (!FUNC_0(VAR_7, VAR_8, "O|O&O&O:argpartition", VAR_15,
                                     &VAR_16,
                                     VAR_2, &VAR_9,
                                     VAR_3, &VAR_10,
                                     &VAR_11)) {
        return ((void*)0);
    }
    if (VAR_11 == VAR_5) {
        VAR_11 = ((void*)0);
    }
    if (VAR_11 != ((void*)0)) {
        PyObject *VAR_18;
        PyObject *VAR_19;
        VAR_14 = FUNC_2(VAR_6);
        if (!FUNC_6(VAR_14)) {
            FUNC_7(VAR_4, "Cannot specify "
                            "order when the array has no fields.");
            return ((void*)0);
        }
        VAR_19 = FUNC_8("numpy.core._internal");
        if (VAR_19 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_18 = FUNC_9(VAR_19, "_newnames",
                                       "OO", VAR_14, VAR_11);
        FUNC_10(VAR_19);
        if (VAR_18 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_13 = FUNC_3(VAR_14);
        FUNC_10(VAR_13->names);
        VAR_13->names = VAR_18;
        ((PyArrayObject_fields *)VAR_6)->descr = VAR_13;
    }

    VAR_17 = (PyArrayObject *)FUNC_4(VAR_16, ((void*)0), 0, 1,
                                                VAR_0, ((void*)0));
    if (VAR_17 == ((void*)0))
        return ((void*)0);

    VAR_12 = FUNC_1(VAR_6, VAR_17, VAR_9, VAR_10);
    FUNC_10(VAR_17);

    if (VAR_11 != ((void*)0)) {
        FUNC_11(FUNC_2(VAR_6));
        ((PyArrayObject_fields *)VAR_6)->descr = VAR_14;
    }
    return FUNC_5((PyArrayObject *)VAR_12);
}

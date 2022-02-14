
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyTypeObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,int **,int **) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int VAR_1 ;
 int * FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;

__attribute__((used)) static PyObject *
FUNC_6(PyArrayObject *VAR_3, PyObject *VAR_4, PyObject *VAR_5)
{
    PyObject *VAR_6 = ((void*)0);
    PyObject *VAR_7 = ((void*)0);
    PyArray_Descr *VAR_8 = ((void*)0);

    static char *VAR_9[] = {"dtype", "type", ((void*)0)};
    if (!FUNC_0(VAR_4, VAR_5, "|OO:view", VAR_9,
                                     &VAR_6,
                                     &VAR_7)) {
        return ((void*)0);
    }



    if (VAR_6) {

        if (FUNC_4(VAR_6) &&
            FUNC_5((PyTypeObject *)VAR_6,
                             &VAR_1)) {
            if (VAR_7) {
                FUNC_3(VAR_2,
                                "Cannot specify output type twice.");
                return ((void*)0);
            }
            VAR_7 = VAR_6;
            VAR_6 = ((void*)0);
        }
    }

    if ((VAR_7) && (!FUNC_4(VAR_7) ||
                       !FUNC_5((PyTypeObject *)VAR_7,
                                         &VAR_1))) {
        FUNC_3(VAR_2,
                        "Type must be a sub-type of ndarray type");
        return ((void*)0);
    }

    if ((VAR_6) &&
        (FUNC_1(VAR_6, &VAR_8) == VAR_0)) {
        return ((void*)0);
    }

    return FUNC_2(VAR_3, VAR_8, (PyTypeObject*)VAR_7);
}

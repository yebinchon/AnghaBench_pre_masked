
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayFlagsObject ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static PyObject*
FUNC_4(PyObject *VAR_7, PyObject *VAR_8, int VAR_9)
{
    PyObject *VAR_10 = VAR_5;
    int VAR_11;

    if (VAR_9 != VAR_2 && VAR_9 != VAR_4) {
        FUNC_0(VAR_1,
                        "undefined comparison for flag object");
        return ((void*)0);
    }

    if (FUNC_1(VAR_8, &VAR_0)) {
        VAR_11 = FUNC_3((PyArrayFlagsObject *)VAR_7,
                                 (PyArrayFlagsObject *)VAR_8);

        if (VAR_9 == VAR_2) {
            VAR_10 = (VAR_11 == 0) ? VAR_6 : VAR_3;
        }
        else if (VAR_9 == VAR_4) {
            VAR_10 = (VAR_11 != 0) ? VAR_6 : VAR_3;
        }
    }

    FUNC_2(VAR_10);
    return VAR_10;
}

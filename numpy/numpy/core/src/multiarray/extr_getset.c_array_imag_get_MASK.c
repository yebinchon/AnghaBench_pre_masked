
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,int *,int *,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static PyObject *
FUNC_11(PyArrayObject *VAR_1)
{
    PyArrayObject *VAR_2;

    if (FUNC_3(VAR_1)) {
        VAR_2 = FUNC_9(VAR_1, 1);
    }
    else {
        FUNC_7(FUNC_1(VAR_1));
        VAR_2 = (PyArrayObject *)FUNC_6(FUNC_8(VAR_1),
                                                    FUNC_1(VAR_1),
                                                    FUNC_5(VAR_1),
                                                    FUNC_2(VAR_1),
                                                    ((void*)0), ((void*)0),
                                                    FUNC_4(VAR_1),
                                                    (PyObject *)VAR_1);
        if (VAR_2 == ((void*)0)) {
            return ((void*)0);
        }
        if (FUNC_10(VAR_2) < 0) {
            return ((void*)0);
        }
        FUNC_0(VAR_2, VAR_0);
    }
    return (PyObject *) VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,char*,int ,int **) ;
 int * FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *,int ,int ,int ,int ,int ,int *,int *) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static PyObject *
FUNC_14(PyArrayObject *VAR_2, PyObject *VAR_3)
{
    PyArray_Descr *VAR_4 = ((void*)0);
    PyObject *VAR_5;

    if (!FUNC_0(VAR_3, "|O&:__array__",
                            VAR_0, &VAR_4)) {
        FUNC_13(VAR_4);
        return ((void*)0);
    }


    if (!FUNC_2(VAR_2)) {
        PyArrayObject *VAR_6;

        FUNC_12(FUNC_4(VAR_2));
        VAR_6 = (PyArrayObject *)FUNC_9(
                &VAR_1,
                FUNC_4(VAR_2),
                FUNC_8(VAR_2),
                FUNC_5(VAR_2),
                FUNC_10(VAR_2),
                FUNC_3(VAR_2),
                FUNC_7(VAR_2),
                ((void*)0),
                (PyObject *)VAR_2
        );
        if (VAR_6 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_2 = VAR_6;
    }
    else {
        FUNC_12(VAR_2);
    }

    if ((VAR_4 == ((void*)0)) || FUNC_6(FUNC_4(VAR_2), VAR_4)) {
        return (PyObject *)VAR_2;
    }
    else {
        VAR_5 = FUNC_1(VAR_2, VAR_4, 0);
        FUNC_11(VAR_2);
        return VAR_5;
    }
}

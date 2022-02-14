
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int *) ;

 int * VAR_1 ;


 int FUNC_4 (int *) ;



 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static PyObject *
FUNC_6(PyArray_Descr *VAR_4, PyObject *VAR_5, int VAR_6)
{
    PyArray_Descr *VAR_7 = ((void*)0);
    PyObject *VAR_8 = VAR_2;
    if (!FUNC_1(VAR_5)) {
        if (FUNC_2(VAR_5, &VAR_7) == VAR_0) {
            return ((void*)0);
        }
    }
    else {
        VAR_7 = (PyArray_Descr *)VAR_5;
        FUNC_4(VAR_7);
    }
    switch (VAR_6) {
    case 129:
        if (!FUNC_3(VAR_4, VAR_7) && FUNC_0(VAR_4, VAR_7)) {
            VAR_8 = VAR_3;
        }
        else {
            VAR_8 = VAR_1;
        }
        break;
    case 130:
        if (FUNC_0(VAR_4, VAR_7)) {
            VAR_8 = VAR_3;
        }
        else {
            VAR_8 = VAR_1;
        }
        break;
    case 133:
        if (FUNC_3(VAR_4, VAR_7)) {
            VAR_8 = VAR_3;
        }
        else {
            VAR_8 = VAR_1;
        }
        break;
    case 128:
        if (FUNC_3(VAR_4, VAR_7))
            VAR_8 = VAR_1;
        else
            VAR_8 = VAR_3;
        break;
    case 131:
        if (!FUNC_3(VAR_4, VAR_7) && FUNC_0(VAR_7, VAR_4)) {
            VAR_8 = VAR_3;
        }
        else {
            VAR_8 = VAR_1;
        }
        break;
    case 132:
        if (FUNC_0(VAR_7, VAR_4)) {
            VAR_8 = VAR_3;
        }
        else {
            VAR_8 = VAR_1;
        }
        break;
    default:
        VAR_8 = VAR_2;
    }

    FUNC_5(VAR_7);
    FUNC_4(VAR_8);
    return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int * FUNC_0 (int *,char*) ;
 int ** FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **,int ***) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(PyObject *VAR_0, PyObject *VAR_1)
{
    int VAR_2;
    int VAR_3, VAR_4;
    PyObject *VAR_5;
    PyObject *VAR_6;
    PyObject **VAR_7, **VAR_8;


    VAR_3 = FUNC_2(VAR_0);
    if (VAR_3 < 0) {
        return -1;
    }
    VAR_6 = FUNC_0(VAR_0, "Could not convert object to sequence");
    if (VAR_6 == ((void*)0)) {
        return -1;
    }
    VAR_7 = FUNC_1(VAR_6);
    for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
        if (FUNC_4(VAR_7[VAR_2])) {
            FUNC_5(VAR_6);
            return 1;
        }
    }
    FUNC_5(VAR_6);

    VAR_4 = FUNC_3(VAR_1, &VAR_5, &VAR_8);
    if (VAR_4 < 0) {
        return -1;
    }
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
        if (FUNC_4(VAR_8[VAR_2])) {
            FUNC_5(VAR_5);
            return 1;
        }
    }
    FUNC_5(VAR_5);
    return 0;
}

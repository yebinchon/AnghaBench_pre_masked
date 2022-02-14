
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int NPY_ORDER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,char**,int*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(PyObject *VAR_5, NPY_ORDER *VAR_6)
{
    char *VAR_7 = ((void*)0);
    Py_ssize_t VAR_8 = 0;

    if (FUNC_3(VAR_5)) {

        PyObject *VAR_9;
        int VAR_10;
        VAR_9 = FUNC_2(VAR_5);
        if (VAR_9 == ((void*)0)) {
            return 0;
        }
        VAR_10 = FUNC_5(VAR_9, VAR_6);
        FUNC_4(VAR_9);
        return VAR_10;
    }

    if (FUNC_0(VAR_5, &VAR_7, &VAR_8) < 0) {
        return 0;
    }

    if (VAR_8 == 1) switch (VAR_7[0]) {
        case 'C':
            *VAR_6 = VAR_1;
            return 1;
        case 'F':
            *VAR_6 = VAR_2;
            return 1;
        case 'A':
            *VAR_6 = VAR_0;
            return 1;
        case 'K':
            *VAR_6 = VAR_3;
            return 1;
    }

    FUNC_1(VAR_4,
                    "order must be one of 'C', 'F', 'A', or 'K'");
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nargs; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(PyUFuncObject *VAR_0, const int VAR_1[], PyObject *VAR_2,
                PyArrayObject **VAR_3, int VAR_4, int **VAR_5) {
    int VAR_6 = VAR_0->nargs;
    int VAR_7, VAR_8;

    VAR_8 = FUNC_1(VAR_2);
    if (FUNC_3(VAR_8)) {
        return -1;
    }

    for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
        int VAR_9, VAR_10, VAR_11;


        if (VAR_1[VAR_7] == 0) {
            VAR_5[VAR_7] = ((void*)0);
            continue;
        }
        if (VAR_3[VAR_7]) {
            VAR_10 = FUNC_0(VAR_3[VAR_7]);
        }
        else {
            VAR_10 = VAR_4 + 1;
        }
        VAR_11 = VAR_8;
        if (FUNC_2(&VAR_11, VAR_10) < 0) {
            return -1;
        }

        if (VAR_11 == VAR_10 - 1) {
            VAR_5[VAR_7] = ((void*)0);
            continue;
        }
        VAR_5[VAR_7][VAR_10 - 1] = VAR_11;
        for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
            VAR_5[VAR_7][VAR_9] = VAR_9;
        }
        for (VAR_9 = VAR_11; VAR_9 < VAR_10 - 1; VAR_9++) {
            VAR_5[VAR_7][VAR_9] = VAR_9 + 1;
        }
    }
    return 0;
}

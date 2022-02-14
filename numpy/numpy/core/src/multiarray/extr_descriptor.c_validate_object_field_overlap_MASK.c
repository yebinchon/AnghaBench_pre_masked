
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int elsize; int * fields; int * names; } ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 int FUNC_0 (int *,char*,TYPE_1__**,int*,int **) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(PyArray_Descr *VAR_1)
{
    PyObject *VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6;
    Py_ssize_t VAR_7, VAR_8, VAR_9;
    PyArray_Descr *VAR_10, *VAR_11;
    int VAR_12, VAR_13;


    VAR_2 = VAR_1->names;
    VAR_9 = FUNC_5(VAR_2);
    VAR_3 = VAR_1->fields;

    for (VAR_7 = 0; VAR_7 < VAR_9; ++VAR_7) {
        VAR_4 = FUNC_4(VAR_2, VAR_7);
        if (VAR_4 == ((void*)0)) {
            return -1;
        }
        VAR_5 = FUNC_2(VAR_3, VAR_4);
        if (VAR_5 == ((void*)0)) {
            return -1;
        }
        if (!FUNC_0(VAR_5, "Oi|O", &VAR_10, &VAR_12, &VAR_6)) {
            return -1;
        }


        if (FUNC_1(VAR_10)) {
            for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
                if (VAR_7 != VAR_8) {
                    VAR_4 = FUNC_4(VAR_2, VAR_8);
                    if (VAR_4 == ((void*)0)) {
                        return -1;
                    }
                    VAR_5 = FUNC_2(VAR_3, VAR_4);
                    if (VAR_5 == ((void*)0)) {
                        return -1;
                    }
                    if (!FUNC_0(VAR_5, "Oi|O", &VAR_11,
                                                &VAR_13, &VAR_6)) {
                        return -1;
                    }

                    if (VAR_12 < VAR_13 + VAR_11->elsize &&
                                VAR_13 < VAR_12 + VAR_10->elsize) {
                        FUNC_3(VAR_0,
                                "Cannot create a NumPy dtype with overlapping "
                                "object fields");
                        return -1;
                    }
                }
            }
        }
    }


    return 0;
}

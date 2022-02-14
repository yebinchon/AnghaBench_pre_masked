
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int elsize; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int) ;
 int * FUNC_9 () ;
 int * FUNC_10 (char*,char*,int ,...) ;
 int * FUNC_11 (char*,int) ;
 scalar_t__ FUNC_12 (char**,int*,int*,int ,int ,int ,int ,int *) ;

__attribute__((used)) static PyObject *
FUNC_13(PyArrayObject *VAR_0, int VAR_1)
{
    PyObject *VAR_2;
    char *VAR_3;

    Py_ssize_t VAR_4 = 0, VAR_5 = FUNC_4(VAR_0) * 4 + 7;

    if ((VAR_3 = FUNC_8(VAR_5)) == ((void*)0)) {
        return FUNC_9();
    }

    if (FUNC_12(&VAR_3, &VAR_4, &VAR_5, FUNC_0(VAR_0),
                  FUNC_5(VAR_0), FUNC_2(VAR_0),
                  FUNC_6(VAR_0), VAR_0) < 0) {
        FUNC_7(VAR_3);
        return ((void*)0);
    }

    if (VAR_1) {
        if (FUNC_3(VAR_0)) {
            VAR_2 = FUNC_10("array(%s, '%c%d')",
                                       VAR_3,
                                       FUNC_1(VAR_0)->type,
                                       FUNC_1(VAR_0)->elsize);
        }
        else {
            VAR_2 = FUNC_10("array(%s, '%c')",
                                       VAR_3,
                                       FUNC_1(VAR_0)->type);
        }
    }
    else {
        VAR_2 = FUNC_11(VAR_3, VAR_4);
    }

    FUNC_7(VAR_3);
    return VAR_2;
}

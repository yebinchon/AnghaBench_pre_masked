
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(PyObject *VAR_3, PyObject **VAR_4, char **VAR_5,
                       PyArrayObject **VAR_6)
{
    int VAR_7, VAR_8;
    PyObject *VAR_9;

    VAR_8 = FUNC_4(VAR_3) - 1;
    if (VAR_8 <= 0) {
        FUNC_2(VAR_2,
                        "must specify the einstein sum subscripts string "
                        "and at least one operand");
        return -1;
    }
    else if (VAR_8 >= VAR_1) {
        FUNC_2(VAR_2, "too many operands");
        return -1;
    }


    VAR_9 = FUNC_3(VAR_3, 0);
    if (FUNC_6(VAR_9)) {
        *VAR_4 = FUNC_5(VAR_9);
        if (*VAR_4 == ((void*)0)) {
            return -1;
        }
        VAR_9 = *VAR_4;
    }

    *VAR_5 = FUNC_1(VAR_9);
    if (*VAR_5 == ((void*)0)) {
        FUNC_7(*VAR_4);
        *VAR_4 = ((void*)0);
        return -1;
    }


    for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
        VAR_6[VAR_7] = ((void*)0);
    }


    for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
        PyObject *VAR_10 = FUNC_3(VAR_3, VAR_7+1);

        VAR_6[VAR_7] = (PyArrayObject *)FUNC_0(VAR_10, VAR_0);
        if (VAR_6[VAR_7] == ((void*)0)) {
            goto fail;
        }
    }

    return VAR_8;

fail:
    for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
        FUNC_7(VAR_6[VAR_7]);
        VAR_6[VAR_7] = ((void*)0);
    }

    return -1;
}

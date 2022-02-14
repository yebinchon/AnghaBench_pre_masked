
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t npy_intp ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_6(PyObject *VAR_3,
                char *VAR_4, int VAR_5, PyArrayObject **VAR_6)
{
    int VAR_7 = 0;
    npy_intp VAR_8, VAR_9;

    VAR_9 = FUNC_3(VAR_3)/2;

    if (VAR_9 == 0) {
        FUNC_1(VAR_2, "must provide at least an "
                        "operand and a subscripts list to einsum");
        return -1;
    }
    else if (VAR_9 >= VAR_1) {
        FUNC_1(VAR_2, "too many operands");
        return -1;
    }


    for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
        VAR_6[VAR_8] = ((void*)0);
    }


    for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
        PyObject *VAR_10 = FUNC_2(VAR_3, 2*VAR_8);
        int VAR_11;


        if (VAR_8 != 0) {
            VAR_4[VAR_7++] = ',';
            if (VAR_7 >= VAR_5) {
                FUNC_1(VAR_2,
                        "subscripts list is too long");
                goto fail;
            }
        }

        VAR_6[VAR_8] = (PyArrayObject *)FUNC_0(VAR_10, VAR_0);
        if (VAR_6[VAR_8] == ((void*)0)) {
            goto fail;
        }

        VAR_10 = FUNC_2(VAR_3, 2*VAR_8+1);
        VAR_11 = FUNC_5(VAR_10, VAR_4+VAR_7,
                                      VAR_5-VAR_7);
        if (VAR_11 < 0) {
            goto fail;
        }
        VAR_7 += VAR_11;
    }


    if (FUNC_3(VAR_3) == 2*VAR_9+1) {
        PyObject *VAR_12;
        int VAR_13;

        if (VAR_7 + 2 >= VAR_5) {
            FUNC_1(VAR_2,
                    "subscripts list is too long");
            goto fail;
        }
        VAR_4[VAR_7++] = '-';
        VAR_4[VAR_7++] = '>';

        VAR_12 = FUNC_2(VAR_3, 2*VAR_9);
        VAR_13 = FUNC_5(VAR_12, VAR_4+VAR_7,
                                      VAR_5-VAR_7);
        if (VAR_13 < 0) {
            goto fail;
        }
        VAR_7 += VAR_13;
    }


    VAR_4[VAR_7] = '\0';

    return VAR_9;

fail:
    for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
        FUNC_4(VAR_6[VAR_8]);
        VAR_6[VAR_8] = ((void*)0);
    }

    return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* ob_type; } ;
struct TYPE_19__ {int tp_name; } ;
typedef TYPE_2__ PyObject ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 TYPE_2__** FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__**,TYPE_2__***) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(PyObject *VAR_2, PyObject *VAR_3,
                          PyObject **VAR_4, PyObject **VAR_5)
{
    int VAR_6;
    int VAR_7 = 0;
    int VAR_8, VAR_9 = 0;
    PyObject *VAR_10;
    PyObject **VAR_11, **VAR_12;

    VAR_8 = FUNC_2(VAR_2);
    if (VAR_8 < 0) {
        return -1;
    }
    VAR_11 = FUNC_1(VAR_2);

    VAR_9 = FUNC_4(VAR_3, &VAR_10, &VAR_12);
    if (VAR_9 < 0) {
        return -1;
    }

    for (VAR_6 = 0; VAR_6 < VAR_8 + VAR_9; ++VAR_6) {
        PyObject *VAR_13;
        int VAR_14;
        int VAR_15 = 1;

        if (VAR_6 < VAR_8) {
            VAR_13 = VAR_11[VAR_6];
        }
        else {
            VAR_13 = VAR_12[VAR_6 - VAR_8];
        }



        for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
            VAR_15 = (FUNC_7(VAR_13) != FUNC_7(VAR_4[VAR_14]));
            if (!VAR_15) {
                break;
            }
        }
        if (VAR_15) {





            PyObject *VAR_16 = FUNC_3(VAR_13);
            if (VAR_16 == ((void*)0)) {
                continue;
            }
            if (VAR_16 == VAR_1) {
                FUNC_0(VAR_0,
                             "operand '%.200s' does not support ufuncs "
                             "(__array_ufunc__=None)",
                             VAR_13->ob_type->tp_name);
                FUNC_5(VAR_16);
                goto fail;
            }
            FUNC_6(VAR_13);
            VAR_4[VAR_7] = VAR_13;
            VAR_5[VAR_7] = VAR_16;
            ++VAR_7;
        }
    }
    FUNC_5(VAR_10);
    return VAR_7;

fail:
    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        FUNC_5(VAR_4[VAR_6]);
        FUNC_5(VAR_5[VAR_6]);
    }
    FUNC_5(VAR_10);
    return -1;
}

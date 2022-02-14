
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tp_name; } ;
struct TYPE_5__ {int hash; int * fields; int * names; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,int,...) ;
 int FUNC_7 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int) ;
 int * FUNC_11 (int *) ;
 int * FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 TYPE_3__* FUNC_16 (int *) ;

__attribute__((used)) static int
FUNC_17(PyArray_Descr *VAR_2, PyObject *VAR_3)
{
    int VAR_4 = 0;
    int VAR_5;
    PyObject *VAR_6;
    PyObject *VAR_7;

    if (VAR_3 == ((void*)0)) {
        FUNC_7(VAR_0,
                "Cannot delete dtype names attribute");
        return -1;
    }
    if (!FUNC_0(VAR_2)) {
        FUNC_7(VAR_1,
                "there are no fields defined");
        return -1;
    }
    VAR_4 = FUNC_13(VAR_2->names);
    if (!FUNC_9(VAR_3) || FUNC_8((PyObject *)VAR_3) != VAR_4) {
        FUNC_6(VAR_1,
                "must replace all names at once with a sequence of length %d",
                VAR_4);
        return -1;
    }

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        PyObject *VAR_8;
        int VAR_9 = 1;
        VAR_8 = FUNC_10(VAR_3, VAR_5);
        VAR_9 = FUNC_14(VAR_8);
        FUNC_15(VAR_8);
        if (!VAR_9) {
            FUNC_6(VAR_1,
                    "item #%d of names is of type %s and not string",
                    VAR_5, FUNC_16(VAR_8)->tp_name);
            return -1;
        }
    }

    VAR_2->hash = -1;

    VAR_6 = FUNC_11(VAR_3);
    VAR_7 = FUNC_3();
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        PyObject *VAR_10;
        PyObject *VAR_11;
        PyObject *VAR_12;
        int VAR_13;
        VAR_10 = FUNC_12(VAR_2->names, VAR_5);

        VAR_11 = FUNC_2(VAR_2->fields, VAR_10);
        VAR_12 = FUNC_12(VAR_6, VAR_5);

        VAR_13 = FUNC_1(VAR_7, VAR_12);
        if (VAR_13 != 0) {
            if (VAR_13 < 0) {
                FUNC_5();
            }
            FUNC_7(VAR_1, "Duplicate field names given.");
            FUNC_15(VAR_6);
            FUNC_15(VAR_7);
            return -1;
        }
        FUNC_4(VAR_7, VAR_12, VAR_11);
    }


    FUNC_15(VAR_2->names);
    VAR_2->names = VAR_6;


    FUNC_15(VAR_2->fields);
    VAR_2->fields = VAR_7;

    return 0;
}

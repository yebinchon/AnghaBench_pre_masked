
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ npy_intp ;
struct TYPE_4__ {scalar_t__ finished; scalar_t__ started; int * iter; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(NewNpyArrayIterObject *VAR_4, PyObject *VAR_5)
{
    npy_intp VAR_6, VAR_7, VAR_8[VAR_0];

    if (VAR_5 == ((void*)0)) {
        FUNC_3(VAR_2,
                "Cannot delete nditer multi_index");
        return -1;
    }
    if (VAR_4->iter == ((void*)0)) {
        FUNC_3(VAR_3,
                "Iterator is invalid");
        return -1;
    }

    if (FUNC_2(VAR_4->iter)) {
        VAR_7 = FUNC_0(VAR_4->iter);
        if (!FUNC_5(VAR_5)) {
            FUNC_3(VAR_3,
                    "multi_index must be set with a sequence");
            return -1;
        }
        if (FUNC_7(VAR_5) != VAR_7) {
            FUNC_3(VAR_3,
                    "Wrong number of indices");
            return -1;
        }
        for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {
            PyObject *VAR_9 = FUNC_6(VAR_5, VAR_6);
            VAR_8[VAR_6] = FUNC_4(VAR_9);
            if (FUNC_9(VAR_8[VAR_6])) {
                FUNC_8(VAR_9);
                return -1;
            }
        }
        if (FUNC_1(VAR_4->iter, VAR_8) != VAR_1) {
            return -1;
        }
        VAR_4->started = 0;
        VAR_4->finished = 0;


        if (FUNC_10(VAR_4) != VAR_1) {
            return -1;
        }

        return 0;
    }
    else {
        FUNC_3(VAR_3,
                "Iterator is not tracking a multi-index");
        return -1;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_5__ {int * iter; scalar_t__ finished; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int*,int*,int*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (TYPE_1__*,int ) ;
 int * FUNC_12 (TYPE_1__*,int,int) ;

__attribute__((used)) static PyObject *
FUNC_13(NewNpyArrayIterObject *VAR_2, PyObject *VAR_3)
{
    if (VAR_2->iter == ((void*)0) || VAR_2->finished) {
        FUNC_4(VAR_1,
                "Iterator is past the end");
        return ((void*)0);
    }

    if (FUNC_1(VAR_2->iter)) {
        FUNC_4(VAR_1,
                "Iterator construction used delayed buffer allocation, "
                "and no reset has been done yet");
        return ((void*)0);
    }

    if (FUNC_6(VAR_3) || FUNC_7(VAR_3) ||
                    (FUNC_5(VAR_3) && !FUNC_8(VAR_3))) {
        npy_intp VAR_4 = FUNC_3(VAR_3);
        if (FUNC_10(VAR_4)) {
            return ((void*)0);
        }
        return FUNC_11(VAR_2, VAR_4);
    }
    else if (FUNC_9(VAR_3)) {
        Py_ssize_t VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8;
        if (FUNC_2(VAR_3, FUNC_0(VAR_2->iter),
                                  &VAR_5, &VAR_6, &VAR_7, &VAR_8) < 0) {
            return ((void*)0);
        }
        if (VAR_7 != 1) {
            FUNC_4(VAR_1,
                    "Iterator slicing only supports a step of 1");
            return ((void*)0);
        }
        return FUNC_12(VAR_2, VAR_5, VAR_6);
    }

    FUNC_4(VAR_0,
            "invalid index type for iterator indexing");
    return ((void*)0);
}

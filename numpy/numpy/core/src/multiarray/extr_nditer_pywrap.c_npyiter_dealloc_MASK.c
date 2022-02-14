
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* tp_free ) (int *) ;} ;
struct TYPE_5__ {int * nested_child; int * iter; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int * VAR_1 ;
 TYPE_3__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(NewNpyArrayIterObject *VAR_2)
{
    if (VAR_2->iter) {
        if (FUNC_7(VAR_2->iter)) {
            if (FUNC_1(VAR_0,
                    "Temporary data has not been written back to one of the "
                    "operands. Typically nditer is used as a context manager "
                    "otherwise 'close' must be called before reading iteration "
                    "results.", 1) < 0) {
                PyObject *VAR_3;

                VAR_3 = FUNC_3("npyiter_dealloc");
                if (VAR_3) {
                    FUNC_2(VAR_3);
                    FUNC_4(VAR_3);
                }
                else {
                    FUNC_2(VAR_1);
                }
            }
        }
        FUNC_0(VAR_2->iter);
        VAR_2->iter = ((void*)0);
        FUNC_6(VAR_2->nested_child);
        VAR_2->nested_child = ((void*)0);
    }
    FUNC_5(VAR_2)->tp_free((PyObject*)VAR_2);
}

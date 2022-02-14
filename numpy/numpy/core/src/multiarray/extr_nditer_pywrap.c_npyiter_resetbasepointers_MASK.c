
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int started; int finished; int iter; struct TYPE_3__* nested_child; int dataptrs; } ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(NewNpyArrayIterObject *VAR_2)
{
    while (VAR_2->nested_child) {
        if (FUNC_1(VAR_2->nested_child->iter,
                                        VAR_2->dataptrs, ((void*)0)) != VAR_1) {
            return VAR_0;
        }
        VAR_2 = VAR_2->nested_child;
        if (FUNC_0(VAR_2->iter) == 0) {
            VAR_2->started = 1;
            VAR_2->finished = 1;
        }
        else {
            VAR_2->started = 0;
            VAR_2->finished = 0;
        }
    }

    return VAR_1;
}

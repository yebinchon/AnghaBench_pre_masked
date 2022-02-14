
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ FunctionStart; } ;
typedef TYPE_1__* PRUNTIME_FUNCTION ;



int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    PRUNTIME_FUNCTION VAR_2 = (void*)VAR_0, VAR_3 = (void*)VAR_1;
    return (VAR_2->FunctionStart > VAR_3->FunctionStart ? 1 : -1);
}

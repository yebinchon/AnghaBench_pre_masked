
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t bottom; size_t top; int * err_flags; } ;
typedef TYPE_1__ ERR_STATE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;

int FUNC_1(void)
{
    ERR_STATE *VAR_1;

    VAR_1 = FUNC_0();
    if (VAR_1 == ((void*)0))
        return 0;

    if (VAR_1->bottom == VAR_1->top)
        return 0;
    VAR_1->err_flags[VAR_1->top] |= VAR_0;
    return 1;
}

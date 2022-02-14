
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Line; } ;
typedef TYPE_1__* PINFCONTEXT ;
typedef int * PINFCACHESECTION ;
typedef int * PINFCACHELINE ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (TYPE_1__*) ;

PINFCACHELINE
FUNC_2(PINFCONTEXT VAR_0)
{
    PINFCACHESECTION VAR_1;

    VAR_1 = FUNC_1(VAR_0);
    if (VAR_1 == ((void*)0))
    {
        return ((void*)0);
    }

    return FUNC_0(VAR_1, VAR_0->Line);
}

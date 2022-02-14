
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Section; scalar_t__ Inf; } ;
typedef TYPE_1__* PINFCONTEXT ;
typedef int * PINFCACHESECTION ;
typedef int * PINFCACHE ;


 int * FUNC_0 (int *,int ) ;

PINFCACHESECTION
FUNC_1(PINFCONTEXT VAR_0)
{
    PINFCACHE VAR_1;

    if (VAR_0 == ((void*)0))
    {
        return ((void*)0);
    }

    VAR_1 = (PINFCACHE)VAR_0->Inf;
    if (VAR_1 == ((void*)0))
    {
        return ((void*)0);
    }

    return FUNC_0(VAR_1, VAR_0->Section);
}

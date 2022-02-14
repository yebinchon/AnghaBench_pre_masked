
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nRefs; scalar_t__ nAge; } ;
typedef TYPE_1__ ME_FontCacheItem ;



__attribute__((used)) static void FUNC_0(ME_FontCacheItem *VAR_0)
{
    if (VAR_0->nRefs > 0)
    {
        VAR_0->nRefs--;
        VAR_0->nAge = 0;
    }
}

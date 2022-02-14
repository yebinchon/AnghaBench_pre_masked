
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {TYPE_1__* FirstSection; } ;
struct TYPE_5__ {scalar_t__ Id; struct TYPE_5__* Next; } ;
typedef TYPE_1__* PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHE ;



PINFCACHESECTION
FUNC_0(PINFCACHE VAR_0, UINT VAR_1)
{
    PINFCACHESECTION VAR_2;

    for (VAR_2 = VAR_0->FirstSection;
         VAR_2 != ((void*)0);
         VAR_2 = VAR_2->Next)
    {
        if (VAR_2->Id == VAR_1)
        {
            return VAR_2;
        }
    }

    return ((void*)0);
}

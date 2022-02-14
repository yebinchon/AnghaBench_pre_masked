
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ Id; struct TYPE_6__* Next; } ;
struct TYPE_5__ {TYPE_2__* FirstLine; } ;
typedef TYPE_1__* PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHELINE ;



PINFCACHELINE
FUNC_0(PINFCACHESECTION VAR_0, UINT VAR_1)
{
    PINFCACHELINE VAR_2;

    for (VAR_2 = VAR_0->FirstLine;
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

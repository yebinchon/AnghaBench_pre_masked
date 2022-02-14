
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* FirstSection; } ;
struct TYPE_5__ {struct TYPE_5__* Next; int Name; } ;
typedef TYPE_1__* PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHE ;
typedef int * PCSTR ;


 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static
PINFCACHESECTION
FUNC_1(
    PINFCACHE VAR_0,
    PCSTR VAR_1)
{
    PINFCACHESECTION VAR_2 = ((void*)0);

    if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
    {
        return ((void*)0);
    }


    VAR_2 = VAR_0->FirstSection;
    while (VAR_2 != ((void*)0))
    {
        if (FUNC_0(VAR_2->Name, VAR_1) == 0)
        {
            return VAR_2;
        }


        VAR_2 = VAR_2->Next;
    }

    return ((void*)0);
}

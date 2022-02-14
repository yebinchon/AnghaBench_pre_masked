
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* Next; int * Key; } ;
struct TYPE_5__ {TYPE_2__* FirstLine; } ;
typedef TYPE_1__* PINFCACHESECTION ;
typedef TYPE_2__* PINFCACHELINE ;
typedef int PCSTR ;


 scalar_t__ FUNC_0 (int *,int ) ;

__attribute__((used)) static
PINFCACHELINE
FUNC_1(
    PINFCACHESECTION VAR_0,
    PCSTR VAR_1)
{
    PINFCACHELINE VAR_2;

    VAR_2 = VAR_0->FirstLine;
    while (VAR_2 != ((void*)0))
    {
        if ((VAR_2->Key != ((void*)0)) && (FUNC_0(VAR_2->Key, VAR_1) == 0))
        {
            return VAR_2;
        }

        VAR_2 = VAR_2->Next;
    }

    return ((void*)0);
}

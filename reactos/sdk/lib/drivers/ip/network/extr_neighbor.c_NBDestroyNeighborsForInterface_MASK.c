
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_6__ {int Lock; TYPE_1__* Cache; } ;
struct TYPE_5__ {scalar_t__ Interface; struct TYPE_5__* Next; } ;
typedef TYPE_1__* PNEIGHBOR_CACHE_ENTRY ;
typedef scalar_t__ PIP_INTERFACE ;
typedef int KIRQL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

VOID FUNC_6(PIP_INTERFACE VAR_5)
{
    KIRQL VAR_6;
    PNEIGHBOR_CACHE_ENTRY *VAR_7;
    PNEIGHBOR_CACHE_ENTRY VAR_8;
    ULONG VAR_9;

    FUNC_2(VAR_0, &VAR_6);
    for (VAR_9 = 0; VAR_9 <= VAR_1; VAR_9++)
    {
        FUNC_4(&VAR_4[VAR_9].Lock);

        for (VAR_7 = &VAR_4[VAR_9].Cache;
             (VAR_8 = *VAR_7) != ((void*)0);)
        {
            if (VAR_8->Interface == VAR_5)
            {

                *VAR_7 = VAR_8->Next;

                FUNC_3(VAR_8, VAR_3);
                FUNC_0(VAR_8, VAR_2);

                continue;
            }
            else
            {
                VAR_7 = &VAR_8->Next;
            }
        }

        FUNC_5(&VAR_4[VAR_9].Lock);
    }
    FUNC_1(VAR_6);
}

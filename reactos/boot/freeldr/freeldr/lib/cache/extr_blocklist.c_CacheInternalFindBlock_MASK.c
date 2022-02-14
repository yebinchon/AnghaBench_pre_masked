
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_9__ {int Flink; } ;
struct TYPE_8__ {scalar_t__ BlockNumber; TYPE_3__ ListEntry; int AccessCount; } ;
struct TYPE_7__ {TYPE_3__ CacheBlockHead; } ;
typedef TYPE_1__* PCACHE_DRIVE ;
typedef TYPE_2__* PCACHE_BLOCK ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (char*,scalar_t__) ;

PCACHE_BLOCK FUNC_3(PCACHE_DRIVE VAR_2, ULONG VAR_3)
{
    PCACHE_BLOCK VAR_4 = ((void*)0);

    FUNC_2("CacheInternalFindBlock() BlockNumber = %d\n", VAR_3);




    if (!FUNC_1(&VAR_2->CacheBlockHead))
    {



        VAR_4 = FUNC_0(VAR_2->CacheBlockHead.Flink, VAR_0, VAR_1);

        while (&VAR_4->ListEntry != &VAR_2->CacheBlockHead)
        {



            if (VAR_4->BlockNumber == VAR_3)
            {



                VAR_4->AccessCount++;

                return VAR_4;
            }

            VAR_4 = FUNC_0(VAR_4->ListEntry.Flink, VAR_0, VAR_1);
        }
    }

    return ((void*)0);
}

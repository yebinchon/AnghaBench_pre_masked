
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int Blink; } ;
struct TYPE_9__ {struct TYPE_9__* BlockData; TYPE_3__ ListEntry; scalar_t__ LockedInCache; } ;
struct TYPE_8__ {int BlockSize; int BytesPerSector; TYPE_3__ CacheBlockHead; } ;
typedef TYPE_1__* PCACHE_DRIVE ;
typedef TYPE_2__* PCACHE_BLOCK ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 int VAR_7 ;

BOOLEAN FUNC_5(PCACHE_DRIVE VAR_8)
{
    PCACHE_BLOCK VAR_9;

    FUNC_4("CacheInternalFreeBlock()\n");




    VAR_9 = FUNC_0(VAR_8->CacheBlockHead.Blink, VAR_0, VAR_4);
    while (&VAR_9->ListEntry != &VAR_8->CacheBlockHead && VAR_9->LockedInCache)
    {
        VAR_9 = FUNC_0(VAR_9->ListEntry.Blink, VAR_0, VAR_4);
    }



    if (FUNC_2(&VAR_8->CacheBlockHead))
    {
        return VAR_3;
    }

    FUNC_3(&VAR_9->ListEntry);


    FUNC_1(VAR_9->BlockData, VAR_6);
    FUNC_1(VAR_9, VAR_5);


    VAR_1--;
    VAR_2 = VAR_1 * (VAR_8->BlockSize * VAR_8->BytesPerSector);

    return VAR_7;
}

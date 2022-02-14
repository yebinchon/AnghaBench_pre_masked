
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {int Flink; } ;
struct TYPE_12__ {TYPE_1__ ListEntry; struct TYPE_12__* BlockData; struct TYPE_12__* LockedInCache; struct TYPE_12__* AccessCount; struct TYPE_12__* BlockNumber; } ;
struct TYPE_11__ {TYPE_1__ CacheBlockHead; TYPE_3__* BlockSize; TYPE_3__* BytesPerSector; TYPE_3__* DriveNumber; } ;
typedef TYPE_2__* PCACHE_DRIVE ;
typedef TYPE_3__* PCACHE_BLOCK ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ,int ,int ) ;
 TYPE_3__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,TYPE_3__*) ;

VOID FUNC_3(PCACHE_DRIVE VAR_5)
{
    PCACHE_BLOCK VAR_6;

    FUNC_2("Dumping block list for BIOS drive 0x%x.\n", VAR_5->DriveNumber);
    FUNC_2("BytesPerSector: %d.\n", VAR_5->BytesPerSector);
    FUNC_2("BlockSize: %d.\n", VAR_5->BlockSize);
    FUNC_2("CacheSizeLimit: %d.\n", VAR_3);
    FUNC_2("CacheSizeCurrent: %d.\n", VAR_2);
    FUNC_2("CacheBlockCount: %d.\n", VAR_1);

    VAR_6 = FUNC_1(VAR_5->CacheBlockHead.Flink, VAR_0, VAR_4);
    while (&VAR_6->ListEntry != &VAR_5->CacheBlockHead)
    {
        FUNC_2("Cache Block: CacheBlock: 0x%x\n", VAR_6);
        FUNC_2("Cache Block: Block Number: %d\n", VAR_6->BlockNumber);
        FUNC_2("Cache Block: Access Count: %d\n", VAR_6->AccessCount);
        FUNC_2("Cache Block: Block Data: 0x%x\n", VAR_6->BlockData);
        FUNC_2("Cache Block: Locked In Cache: %d\n", VAR_6->LockedInCache);

        if (VAR_6->BlockData == ((void*)0))
        {
            FUNC_0("CacheBlock->BlockData == NULL\n");
        }

        VAR_6 = FUNC_1(VAR_6->ListEntry.Flink, VAR_0, VAR_4);
    }
}

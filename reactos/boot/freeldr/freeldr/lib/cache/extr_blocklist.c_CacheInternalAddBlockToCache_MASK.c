
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_11__ {int BlockNumber; int ListEntry; struct TYPE_11__* BlockData; } ;
struct TYPE_10__ {int BlockSize; int BytesPerSector; int CacheBlockHead; int DriveNumber; } ;
typedef TYPE_1__* PCACHE_DRIVE ;
typedef TYPE_2__* PCACHE_BLOCK ;
typedef int CACHE_BLOCK ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int,int,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*,int) ;

PCACHE_BLOCK FUNC_9(PCACHE_DRIVE VAR_5, ULONG VAR_6)
{
    PCACHE_BLOCK VAR_7 = ((void*)0);

    FUNC_8("CacheInternalAddBlockToCache() BlockNumber = %d\n", VAR_6);


    FUNC_0(VAR_5);




    VAR_7 = FUNC_2(sizeof(CACHE_BLOCK), VAR_3);
    if (VAR_7 == ((void*)0))
    {
        return ((void*)0);
    }



    FUNC_7(VAR_7, sizeof(CACHE_BLOCK));
    VAR_7->BlockNumber = VAR_6;
    VAR_7->BlockData = FUNC_2(VAR_5->BlockSize * VAR_5->BytesPerSector,
                                           VAR_4);
    if (VAR_7->BlockData ==((void*)0))
    {
        FUNC_3(VAR_7, VAR_3);
        return ((void*)0);
    }


    if (!FUNC_5(VAR_5->DriveNumber, (VAR_6 * VAR_5->BlockSize), VAR_5->BlockSize, VAR_2))
    {
        FUNC_3(VAR_7->BlockData, VAR_4);
        FUNC_3(VAR_7, VAR_3);
        return ((void*)0);
    }
    FUNC_6(VAR_7->BlockData, VAR_2, VAR_5->BlockSize * VAR_5->BytesPerSector);


    FUNC_4(&VAR_5->CacheBlockHead, &VAR_7->ListEntry);


    VAR_0++;
    VAR_1 = VAR_0 * (VAR_5->BlockSize * VAR_5->BytesPerSector);

    FUNC_1(VAR_5);

    return VAR_7;
}

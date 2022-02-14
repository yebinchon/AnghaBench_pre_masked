
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_10__ {int DriveNumber; int BytesPerSector; int BlockSize; int CacheBlockHead; } ;
struct TYPE_9__ {int BytesPerSector; } ;
struct TYPE_8__ {struct TYPE_8__* BlockData; } ;
typedef TYPE_1__* PCACHE_BLOCK ;
typedef TYPE_2__ GEOMETRY ;
typedef int CACHE_DRIVE ;
typedef void* BOOLEAN ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_3__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (char*,int) ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int,scalar_t__) ;

BOOLEAN FUNC_10(UCHAR VAR_15)
{
    PCACHE_BLOCK VAR_16;
    GEOMETRY VAR_17;




    if ((VAR_4) &&
        (VAR_15 == VAR_3.DriveNumber) &&
        (VAR_15 >= 0x80) &&
        (!VAR_2))
    {
        return VAR_13;
    }

    VAR_2 = VAR_7;





    if (VAR_4)
    {
        VAR_4 = VAR_7;

        FUNC_8("CacheBlockCount: %d\n", VAR_1);
        FUNC_8("CacheSizeLimit: %d\n", VAR_6);
        FUNC_8("CacheSizeCurrent: %d\n", VAR_5);



        while (!FUNC_3(&VAR_3.CacheBlockHead))
        {
            VAR_16 = FUNC_0(FUNC_6(&VAR_3.CacheBlockHead),
                                               VAR_0,
                                               VAR_8);

            FUNC_1(VAR_16->BlockData, VAR_11);
            FUNC_1(VAR_16, VAR_10);
        }
    }


    FUNC_7(&VAR_3, sizeof(CACHE_DRIVE));
    FUNC_2(&VAR_3.CacheBlockHead);
    VAR_3.DriveNumber = VAR_15;
    if (!FUNC_5(VAR_15, &VAR_17))
    {
        return VAR_7;
    }
    VAR_3.BytesPerSector = VAR_17.BytesPerSector;


    VAR_3.BlockSize = FUNC_4(VAR_15);

    VAR_1 = 0;
    VAR_5 = 0;
    VAR_6 = VAR_14 / 8 * VAR_9;
    VAR_6 = FUNC_9(VAR_6, VAR_12 - (128 * 1024));

    VAR_4 = VAR_13;

    FUNC_8("Initializing BIOS drive 0x%x.\n", VAR_15);
    FUNC_8("BytesPerSector: %d.\n", VAR_3.BytesPerSector);
    FUNC_8("BlockSize: %d.\n", VAR_3.BlockSize);
    FUNC_8("CacheSizeLimit: %d.\n", VAR_6);

    return VAR_13;
}

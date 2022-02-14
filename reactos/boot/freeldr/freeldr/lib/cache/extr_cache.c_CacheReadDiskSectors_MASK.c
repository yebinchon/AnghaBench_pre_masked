
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONGLONG ;
typedef scalar_t__ ULONG ;
typedef int UCHAR ;
struct TYPE_6__ {scalar_t__ BlockSize; scalar_t__ BytesPerSector; } ;
struct TYPE_5__ {scalar_t__ BlockData; } ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PCACHE_BLOCK ;
typedef scalar_t__ BOOLEAN ;


 TYPE_1__* FUNC_0 (TYPE_2__*,scalar_t__) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 scalar_t__ VAR_3 ;

BOOLEAN FUNC_3(UCHAR VAR_4, ULONGLONG VAR_5, ULONG VAR_6, PVOID VAR_7)
{
    PCACHE_BLOCK VAR_8;
    ULONG VAR_9;
    ULONG VAR_10;
    ULONG VAR_11;
    ULONG VAR_12;
    ULONG VAR_13;
    ULONG VAR_14;
    ULONG VAR_15;

    FUNC_2("CacheReadDiskSectors() DiskNumber: 0x%x StartSector: %I64d SectorCount: %d Buffer: 0x%x\n", VAR_4, VAR_5, VAR_6, VAR_7);


    if (VAR_1 == VAR_2)
    {
        return VAR_2;
    }




    VAR_9 = (ULONG)(VAR_5 / VAR_0.BlockSize);
    VAR_10 = (ULONG)(VAR_5 % VAR_0.BlockSize);
    VAR_11 = (ULONG)((VAR_6 > (VAR_0.BlockSize - VAR_10)) ? (VAR_0.BlockSize - VAR_10) : VAR_6);
    VAR_12 = (ULONG)((VAR_5 + (VAR_6 - 1)) / VAR_0.BlockSize);
    VAR_13 = (ULONG)(1 + (VAR_5 + (VAR_6 - 1)) % VAR_0.BlockSize);
    VAR_14 = (VAR_12 - VAR_9) + 1;
    FUNC_2("StartBlock: %d SectorOffsetInStartBlock: %d CopyLengthInStartBlock: %d EndBlock: %d SectorOffsetInEndBlock: %d BlockCount: %d\n", VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);




    if (VAR_14 > 0)
    {



        VAR_8 = FUNC_0(&VAR_0, VAR_9);
        if (VAR_8 == ((void*)0))
        {
            return VAR_2;
        }




        FUNC_1(VAR_7,
            (PVOID)((ULONG_PTR)VAR_8->BlockData + (VAR_10 * VAR_0.BytesPerSector)),
            (VAR_11 * VAR_0.BytesPerSector));
        FUNC_2("1 - RtlCopyMemory(0x%x, 0x%x, %d)\n", VAR_7, ((ULONG_PTR)VAR_8->BlockData + (VAR_10 * VAR_0.BytesPerSector)), (VAR_11 * VAR_0.BytesPerSector));




        VAR_7 = (PVOID)((ULONG_PTR)VAR_7 + (VAR_11 * VAR_0.BytesPerSector));




        VAR_14--;
    }




    for (VAR_15=VAR_9+1; VAR_14>1; VAR_15++)
    {



        VAR_8 = FUNC_0(&VAR_0, VAR_15);
        if (VAR_8 == ((void*)0))
        {
            return VAR_2;
        }




        FUNC_1(VAR_7,
            VAR_8->BlockData,
            VAR_0.BlockSize * VAR_0.BytesPerSector);
        FUNC_2("2 - RtlCopyMemory(0x%x, 0x%x, %d)\n", VAR_7, VAR_8->BlockData, VAR_0.BlockSize * VAR_0.BytesPerSector);




        VAR_7 = (PVOID)((ULONG_PTR)VAR_7 + (VAR_0.BlockSize * VAR_0.BytesPerSector));




        VAR_14--;
    }




    if (VAR_14 > 0)
    {



        VAR_8 = FUNC_0(&VAR_0, VAR_12);
        if (VAR_8 == ((void*)0))
        {
            return VAR_2;
        }




        FUNC_1(VAR_7,
            VAR_8->BlockData,
            VAR_13 * VAR_0.BytesPerSector);
        FUNC_2("3 - RtlCopyMemory(0x%x, 0x%x, %d)\n", VAR_7, VAR_8->BlockData, VAR_13 * VAR_0.BytesPerSector);




        VAR_7 = (PVOID)((ULONG_PTR)VAR_7 + (VAR_13 * VAR_0.BytesPerSector));




        VAR_14--;
    }

    return VAR_3;
}

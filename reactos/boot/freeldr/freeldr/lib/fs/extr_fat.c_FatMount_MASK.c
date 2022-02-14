
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_20__ {scalar_t__ QuadPart; } ;
typedef TYPE_3__ ULARGE_INTEGER ;
typedef int UCHAR ;
struct TYPE_19__ {scalar_t__ QuadPart; } ;
struct TYPE_18__ {scalar_t__ QuadPart; } ;
struct TYPE_26__ {TYPE_2__ StartingAddress; TYPE_1__ EndingAddress; } ;
struct TYPE_25__ {scalar_t__ QuadPart; } ;
struct TYPE_24__ {int FileSystemType; } ;
struct TYPE_23__ {int FileSystemType; } ;
struct TYPE_22__ {int FileSystemType; } ;
struct TYPE_21__ {int DeviceId; } ;
typedef TYPE_4__* PFAT_VOLUME_INFO ;
typedef TYPE_5__* PFAT_BOOTSECTOR ;
typedef TYPE_6__* PFATX_BOOTSECTOR ;
typedef TYPE_7__* PFAT32_BOOTSECTOR ;
typedef TYPE_8__ LARGE_INTEGER ;
typedef TYPE_9__ FILEINFORMATION ;
typedef int FAT_VOLUME_INFO ;
typedef int DEVVTBL ;
typedef int Buffer ;
typedef scalar_t__ ARC_STATUS ;


 scalar_t__ FUNC_0 (int,TYPE_9__*) ;
 scalar_t__ FUNC_1 (int,int *,int,int*) ;
 scalar_t__ FUNC_2 (int,TYPE_8__*,int ) ;
 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*,scalar_t__) ;
 TYPE_4__** VAR_2 ;
 TYPE_4__* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*,int) ;

const DEVVTBL* FUNC_9(ULONG VAR_6)
{
    PFAT_VOLUME_INFO VAR_7;
    UCHAR VAR_8[512];
    PFAT_BOOTSECTOR VAR_9 = (PFAT_BOOTSECTOR)VAR_8;
    PFAT32_BOOTSECTOR VAR_10 = (PFAT32_BOOTSECTOR)VAR_8;
    PFATX_BOOTSECTOR VAR_11 = (PFATX_BOOTSECTOR)VAR_8;
    FILEINFORMATION VAR_12;
    LARGE_INTEGER VAR_13;
    ULONG VAR_14;
    ULARGE_INTEGER VAR_15;
    ARC_STATUS VAR_16;

    FUNC_8("Enter FatMount(%lu)\n", VAR_6);




    VAR_7 = FUNC_4(sizeof(FAT_VOLUME_INFO), VAR_5);
    if (!VAR_7)
        return ((void*)0);
    FUNC_7(VAR_7, sizeof(FAT_VOLUME_INFO));




    VAR_13.QuadPart = 0;
    VAR_16 = FUNC_2(VAR_6, &VAR_13, VAR_4);
    if (VAR_16 != VAR_0)
    {
        FUNC_5(VAR_7, VAR_5);
        return ((void*)0);
    }
    VAR_16 = FUNC_1(VAR_6, VAR_8, sizeof(VAR_8), &VAR_14);
    if (VAR_16 != VAR_0 || VAR_14 != sizeof(VAR_8))
    {
        FUNC_5(VAR_7, VAR_5);
        return ((void*)0);
    }




    if (!FUNC_6(VAR_9->FileSystemType, "FAT12   ", 8) &&
        !FUNC_6(VAR_9->FileSystemType, "FAT16   ", 8) &&
        !FUNC_6(VAR_10->FileSystemType, "FAT32   ", 8) &&
        !FUNC_6(VAR_11->FileSystemType, "FATX", 4))
    {
        FUNC_5(VAR_7, VAR_5);
        return ((void*)0);
    }




    VAR_16 = FUNC_0(VAR_6, &VAR_12);
    if (VAR_16 != VAR_0)
    {
        FUNC_5(VAR_7, VAR_5);
        return ((void*)0);
    }
    VAR_15.QuadPart = (VAR_12.EndingAddress.QuadPart - VAR_12.StartingAddress.QuadPart);
    VAR_15.QuadPart /= VAR_3;




    VAR_7->DeviceId = VAR_6;




    if (!FUNC_3(VAR_7, VAR_9, VAR_15.QuadPart))
    {
        FUNC_5(VAR_7, VAR_5);
        return ((void*)0);
    }




    VAR_2[VAR_6] = VAR_7;




    FUNC_8("FatMount(%lu) success\n", VAR_6);
    return &VAR_1;
}

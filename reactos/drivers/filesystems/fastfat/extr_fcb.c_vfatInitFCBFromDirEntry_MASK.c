
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_20__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_35__ {int rootDirectorySectors; int BytesPerSector; int BytesPerCluster; } ;
struct TYPE_33__ {int QuadPart; } ;
struct TYPE_32__ {int QuadPart; } ;
struct TYPE_31__ {int QuadPart; } ;
struct TYPE_34__ {TYPE_7__ AllocationSize; TYPE_6__ ValidDataLength; TYPE_5__ FileSize; } ;
struct TYPE_30__ {int FileSize; } ;
struct TYPE_29__ {int FileSize; } ;
struct TYPE_28__ {void* Hash; } ;
struct TYPE_27__ {TYPE_4__ Fat; TYPE_3__ FatX; } ;
struct TYPE_26__ {void* Hash; } ;
struct TYPE_25__ {TYPE_9__ FatInfo; } ;
struct TYPE_24__ {int dirIndex; int startIndex; TYPE_8__ RFCB; TYPE_20__ entry; int ShortNameU; TYPE_2__ ShortHash; int DirNameU; TYPE_1__ Hash; int PathNameU; } ;
struct TYPE_23__ {int DirIndex; int StartIndex; int ShortNameU; int DirEntry; } ;
typedef TYPE_10__* PVFAT_DIRENTRY_CONTEXT ;
typedef TYPE_11__* PVFATFCB ;
typedef TYPE_12__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int DIR_ENTRY ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_12__*,int,int*,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_20__*,int *,int) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_12__*,TYPE_20__*) ;
 scalar_t__ FUNC_7 (TYPE_11__*) ;
 int FUNC_8 (TYPE_11__*) ;
 void* FUNC_9 (void*,int *) ;
 scalar_t__ FUNC_10 (TYPE_12__*) ;

__attribute__((used)) static
VOID
FUNC_11(
    PDEVICE_EXTENSION VAR_2,
    PVFATFCB VAR_3,
    PVFAT_DIRENTRY_CONTEXT VAR_4)
{
    ULONG VAR_5;

    FUNC_4(&VAR_3->entry, &VAR_4->DirEntry, sizeof (DIR_ENTRY));
    FUNC_5(&VAR_3->ShortNameU, &VAR_4->ShortNameU);
    VAR_3->Hash.Hash = FUNC_9(0, &VAR_3->PathNameU);
    if (FUNC_10(VAR_2))
    {
        VAR_3->ShortHash.Hash = VAR_3->Hash.Hash;
    }
    else
    {
        VAR_3->ShortHash.Hash = FUNC_9(0, &VAR_3->DirNameU);
        VAR_3->ShortHash.Hash = FUNC_9(VAR_3->ShortHash.Hash, &VAR_3->ShortNameU);
    }

    if (FUNC_7(VAR_3))
    {
        ULONG VAR_6, VAR_7;
        NTSTATUS VAR_8 = VAR_1;
        VAR_5 = 0;
        VAR_6 = FUNC_6(VAR_2, &VAR_3->entry);
        if (VAR_6 == 1)
        {
            VAR_5 = VAR_2->FatInfo.rootDirectorySectors * VAR_2->FatInfo.BytesPerSector;
        }
        else if (VAR_6 != 0)
        {
            VAR_7 = VAR_6;
            while (VAR_7 != 0xffffffff && FUNC_1(VAR_8))
            {
                VAR_5 += VAR_2->FatInfo.BytesPerCluster;
                VAR_8 = FUNC_2(VAR_2, VAR_6, &VAR_7, VAR_0);
            }
        }
    }
    else if (FUNC_10(VAR_2))
    {
        VAR_5 = VAR_3->entry.FatX.FileSize;
    }
    else
    {
        VAR_5 = VAR_3->entry.Fat.FileSize;
    }
    VAR_3->dirIndex = VAR_4->DirIndex;
    VAR_3->startIndex = VAR_4->StartIndex;
    if (FUNC_10(VAR_2) && !FUNC_8(VAR_3))
    {
        FUNC_0(VAR_4->DirIndex >= 2 && VAR_4->StartIndex >= 2);
        VAR_3->dirIndex = VAR_4->DirIndex-2;
        VAR_3->startIndex = VAR_4->StartIndex-2;
    }
    VAR_3->RFCB.FileSize.QuadPart = VAR_5;
    VAR_3->RFCB.ValidDataLength.QuadPart = VAR_5;
    VAR_3->RFCB.AllocationSize.QuadPart = FUNC_3(VAR_5, VAR_2->FatInfo.BytesPerCluster);
}

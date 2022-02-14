
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int UNICODE_STRING ;
typedef int ULONG ;
struct TYPE_34__ {int QuadPart; } ;
struct TYPE_33__ {int QuadPart; } ;
struct TYPE_32__ {int QuadPart; } ;
struct TYPE_31__ {int Hash; } ;
struct TYPE_30__ {int Hash; } ;
struct TYPE_29__ {int rootDirectorySectors; int BytesPerSector; scalar_t__ FatType; int RootCluster; scalar_t__ BytesPerCluster; } ;
struct TYPE_27__ {int FileSize; unsigned short FirstCluster; unsigned short FirstClusterHigh; void* Attrib; int ShortName; } ;
struct TYPE_26__ {int FileSize; int FirstCluster; void* Attrib; int Filename; } ;
struct TYPE_28__ {TYPE_2__ Fat; TYPE_1__ FatX; } ;
struct TYPE_25__ {TYPE_11__* RootFcb; TYPE_4__ FatInfo; } ;
struct TYPE_23__ {int IsFastIoPossible; TYPE_9__ AllocationSize; TYPE_8__ ValidDataLength; TYPE_7__ FileSize; } ;
struct TYPE_24__ {int RefCount; TYPE_10__ RFCB; scalar_t__ dirIndex; TYPE_6__ Hash; TYPE_5__ ShortHash; TYPE_3__ entry; } ;
typedef TYPE_11__* PVFATFCB ;
typedef TYPE_12__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_12__*,int,int*,int ) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (int ,char,int) ;
 int FUNC_5 (TYPE_12__*,TYPE_11__*) ;
 int FUNC_6 (TYPE_12__*,TYPE_11__*) ;
 TYPE_11__* FUNC_7 (TYPE_12__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_12__*) ;

PVFATFCB
FUNC_9(
    PDEVICE_EXTENSION VAR_5)
{
    PVFATFCB VAR_6;
    ULONG VAR_7, VAR_8, VAR_9 = 0;
    NTSTATUS VAR_10 = VAR_4;
    UNICODE_STRING VAR_11 = FUNC_3(L"\\");

    FUNC_0(VAR_5->RootFcb == ((void*)0));

    VAR_6 = FUNC_7(VAR_5, &VAR_11);
    if (FUNC_8(VAR_5))
    {
        FUNC_4(VAR_6->entry.FatX.Filename, ' ', 42);
        VAR_6->entry.FatX.FileSize = VAR_5->FatInfo.rootDirectorySectors * VAR_5->FatInfo.BytesPerSector;
        VAR_6->entry.FatX.Attrib = VAR_2;
        VAR_6->entry.FatX.FirstCluster = 1;
        VAR_9 = VAR_5->FatInfo.rootDirectorySectors * VAR_5->FatInfo.BytesPerSector;
    }
    else
    {
        FUNC_4(VAR_6->entry.Fat.ShortName, ' ', 11);
        VAR_6->entry.Fat.FileSize = VAR_5->FatInfo.rootDirectorySectors * VAR_5->FatInfo.BytesPerSector;
        VAR_6->entry.Fat.Attrib = VAR_2;
        if (VAR_5->FatInfo.FatType == VAR_1)
        {
            VAR_8 = VAR_7 = VAR_5->FatInfo.RootCluster;
            VAR_6->entry.Fat.FirstCluster = (unsigned short)(VAR_7 & 0xffff);
            VAR_6->entry.Fat.FirstClusterHigh = (unsigned short)(VAR_7 >> 16);

            while (VAR_8 != 0xffffffff && FUNC_1(VAR_10))
            {
                VAR_9 += VAR_5->FatInfo.BytesPerCluster;
                VAR_10 = FUNC_2 (VAR_5, VAR_7, &VAR_8, VAR_0);
            }
        }
        else
        {
            VAR_6->entry.Fat.FirstCluster = 1;
            VAR_9 = VAR_5->FatInfo.rootDirectorySectors * VAR_5->FatInfo.BytesPerSector;
        }
    }
    VAR_6->ShortHash.Hash = VAR_6->Hash.Hash;
    VAR_6->RefCount = 2;
    VAR_6->dirIndex = 0;
    VAR_6->RFCB.FileSize.QuadPart = VAR_9;
    VAR_6->RFCB.ValidDataLength.QuadPart = VAR_9;
    VAR_6->RFCB.AllocationSize.QuadPart = VAR_9;
    VAR_6->RFCB.IsFastIoPossible = VAR_3;

    FUNC_6(VAR_5, VAR_6);
    FUNC_5(VAR_5, VAR_6);


    VAR_5->RootFcb = VAR_6;

    return VAR_6;
}

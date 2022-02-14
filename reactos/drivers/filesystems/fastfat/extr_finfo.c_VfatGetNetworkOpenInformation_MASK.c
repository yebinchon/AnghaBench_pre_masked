
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_21__ {long QuadPart; } ;
struct TYPE_20__ {long QuadPart; } ;
struct TYPE_22__ {TYPE_6__ FileSize; TYPE_5__ AllocationSize; } ;
struct TYPE_15__ {int QuadPart; } ;
struct TYPE_19__ {int QuadPart; } ;
struct TYPE_17__ {int UpdateTime; int UpdateDate; int AccessDate; int CreationTime; int CreationDate; } ;
struct TYPE_16__ {int UpdateTime; int UpdateDate; int AccessTime; int AccessDate; int CreationTime; int CreationDate; } ;
struct TYPE_18__ {TYPE_2__ Fat; TYPE_1__ FatX; } ;
struct TYPE_23__ {int FileAttributes; int* Attributes; TYPE_7__ RFCB; TYPE_6__ EndOfFile; TYPE_5__ AllocationSize; TYPE_13__ LastWriteTime; TYPE_4__ ChangeTime; TYPE_3__ entry; TYPE_13__ LastAccessTime; TYPE_13__ CreationTime; } ;
typedef TYPE_8__* PVFATFCB ;
typedef int* PULONG ;
typedef TYPE_8__* PFILE_NETWORK_OPEN_INFORMATION ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILE_NETWORK_OPEN_INFORMATION ;


 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,TYPE_13__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_5(
    PVFATFCB VAR_8,
    PDEVICE_EXTENSION VAR_9,
    PFILE_NETWORK_OPEN_INFORMATION VAR_10,
    PULONG VAR_11)
{
    FUNC_0(VAR_10);
    FUNC_0(VAR_8);

    if (*VAR_11 < sizeof(FILE_NETWORK_OPEN_INFORMATION))
        return(VAR_6);

    if (FUNC_4(VAR_9))
    {
        FUNC_2(VAR_9,
                                   VAR_8->entry.FatX.CreationDate,
                                   VAR_8->entry.FatX.CreationTime,
                                   &VAR_10->CreationTime);
        FUNC_2(VAR_9,
                                   VAR_8->entry.FatX.AccessDate,
                                   VAR_8->entry.FatX.AccessTime,
                                   &VAR_10->LastAccessTime);
        FUNC_2(VAR_9,
                                   VAR_8->entry.FatX.UpdateDate,
                                   VAR_8->entry.FatX.UpdateTime,
                                   &VAR_10->LastWriteTime);
        VAR_10->ChangeTime.QuadPart = VAR_10->LastWriteTime.QuadPart;
    }
    else
    {
        FUNC_2(VAR_9,
                                   VAR_8->entry.Fat.CreationDate,
                                   VAR_8->entry.Fat.CreationTime,
                                   &VAR_10->CreationTime);
        FUNC_2(VAR_9,
                                   VAR_8->entry.Fat.AccessDate,
                                   0,
                                   &VAR_10->LastAccessTime);
        FUNC_2(VAR_9,
                                   VAR_8->entry.Fat.UpdateDate,
                                   VAR_8->entry.Fat.UpdateTime,
                                   &VAR_10->LastWriteTime);
        VAR_10->ChangeTime.QuadPart = VAR_10->LastWriteTime.QuadPart;
    }

    if (FUNC_3(VAR_8))
    {
        VAR_10->EndOfFile.QuadPart = 0L;
        VAR_10->AllocationSize.QuadPart = 0L;
    }
    else
    {
        VAR_10->AllocationSize = VAR_8->RFCB.AllocationSize;
        VAR_10->EndOfFile = VAR_8->RFCB.FileSize;
    }

    VAR_10->FileAttributes = *VAR_8->Attributes & 0x3f;

    if (0 == (VAR_10->FileAttributes & (VAR_1 |
                                             VAR_0 |
                                             VAR_5 |
                                             VAR_2 |
                                             VAR_4)))
    {
        FUNC_1("Synthesizing FILE_ATTRIBUTE_NORMAL\n");
        VAR_10->FileAttributes |= VAR_3;
    }

    *VAR_11 -= sizeof(FILE_NETWORK_OPEN_INFORMATION);
    return VAR_7;
}

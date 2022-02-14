
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int FileAttributes; int LastWriteTime; int ChangeTime; int LastAccessTime; int CreationTime; } ;
struct TYPE_9__ {int UpdateTime; int UpdateDate; int AccessDate; int CreationTime; int CreationDate; } ;
struct TYPE_8__ {int UpdateTime; int UpdateDate; int AccessTime; int AccessDate; int CreationTime; int CreationDate; } ;
struct TYPE_10__ {TYPE_2__ Fat; TYPE_1__ FatX; } ;
struct TYPE_11__ {int* Attributes; TYPE_3__ entry; } ;
typedef TYPE_4__* PVFATFCB ;
typedef int* PULONG ;
typedef int PFILE_OBJECT ;
typedef TYPE_5__* PFILE_BASIC_INFORMATION ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef int FILE_BASIC_INFORMATION ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

NTSTATUS
FUNC_4(
    PFILE_OBJECT VAR_8,
    PVFATFCB VAR_9,
    PDEVICE_EXTENSION VAR_10,
    PFILE_BASIC_INFORMATION VAR_11,
    PULONG VAR_12)
{
    FUNC_2(VAR_8);

    FUNC_0("VfatGetBasicInformation()\n");

    if (*VAR_12 < sizeof(FILE_BASIC_INFORMATION))
        return VAR_6;

    if (FUNC_3(VAR_10))
    {
        FUNC_1(VAR_10,
                                   VAR_9->entry.FatX.CreationDate,
                                   VAR_9->entry.FatX.CreationTime,
                                   &VAR_11->CreationTime);
        FUNC_1(VAR_10,
                                   VAR_9->entry.FatX.AccessDate,
                                   VAR_9->entry.FatX.AccessTime,
                                   &VAR_11->LastAccessTime);
        FUNC_1(VAR_10,
                                   VAR_9->entry.FatX.UpdateDate,
                                   VAR_9->entry.FatX.UpdateTime,
                                   &VAR_11->LastWriteTime);
        VAR_11->ChangeTime = VAR_11->LastWriteTime;
    }
    else
    {
        FUNC_1(VAR_10,
                                   VAR_9->entry.Fat.CreationDate,
                                   VAR_9->entry.Fat.CreationTime,
                                   &VAR_11->CreationTime);
        FUNC_1(VAR_10,
                                   VAR_9->entry.Fat.AccessDate,
                                   0,
                                   &VAR_11->LastAccessTime);
        FUNC_1(VAR_10,
                                   VAR_9->entry.Fat.UpdateDate,
                                   VAR_9->entry.Fat.UpdateTime,
                                   &VAR_11->LastWriteTime);
        VAR_11->ChangeTime = VAR_11->LastWriteTime;
    }

    VAR_11->FileAttributes = *VAR_9->Attributes & 0x3f;

    if (0 == (VAR_11->FileAttributes & (VAR_1 |
                                           VAR_0 |
                                           VAR_5 |
                                           VAR_2 |
                                           VAR_4)))
    {
        FUNC_0("Synthesizing FILE_ATTRIBUTE_NORMAL\n");
        VAR_11->FileAttributes |= VAR_3;
    }
    FUNC_0("Getting attributes 0x%02x\n", VAR_11->FileAttributes);

    *VAR_12 -= sizeof(FILE_BASIC_INFORMATION);
    return VAR_7;
}

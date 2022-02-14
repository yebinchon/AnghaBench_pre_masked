
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_12__ {int QuadPart; } ;
struct TYPE_17__ {int FileAttributes; TYPE_11__ LastWriteTime; TYPE_11__ LastAccessTime; TYPE_11__ CreationTime; } ;
struct TYPE_14__ {int UpdateTime; int UpdateDate; int AccessDate; int CreationTime; int CreationDate; } ;
struct TYPE_13__ {int UpdateTime; int UpdateDate; int AccessTime; int AccessDate; int CreationTime; int CreationDate; } ;
struct TYPE_15__ {TYPE_2__ Fat; TYPE_1__ FatX; } ;
struct TYPE_16__ {int* Attributes; TYPE_3__ entry; } ;
typedef TYPE_4__* PVFATFCB ;
typedef int * PFILE_OBJECT ;
typedef TYPE_5__* PFILE_BASIC_INFORMATION ;
typedef int * PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,TYPE_11__*,int *,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static
NTSTATUS
FUNC_8(
    PFILE_OBJECT VAR_14,
    PVFATFCB VAR_15,
    PDEVICE_EXTENSION VAR_16,
    PFILE_BASIC_INFORMATION VAR_17)
{
    ULONG VAR_18;

    FUNC_2("VfatSetBasicInformation()\n");

    FUNC_0(((void*)0) != VAR_14);
    FUNC_0(((void*)0) != VAR_15);
    FUNC_0(((void*)0) != VAR_16);
    FUNC_0(((void*)0) != VAR_17);

    FUNC_0(0 == (*VAR_15->Attributes & VAR_13));

    VAR_18 = 0;

    if (VAR_17->FileAttributes != 0)
    {
        UCHAR VAR_19;

        VAR_19 = (VAR_17->FileAttributes & (VAR_1 |
                                                   VAR_5 |
                                                   VAR_3 |
                                                   VAR_2 |
                                                   VAR_4));

        if (FUNC_5(VAR_15))
        {
            if (FUNC_1(VAR_17->FileAttributes, VAR_6))
            {
                FUNC_2("Setting temporary attribute on a directory!\n");
                return VAR_11;
            }

            VAR_19 |= VAR_2;
        }
        else
        {
            if (FUNC_1(VAR_17->FileAttributes, VAR_2))
            {
                FUNC_2("Setting directory attribute on a file!\n");
                return VAR_11;
            }
        }

        if (VAR_19 != *VAR_15->Attributes)
        {
            *VAR_15->Attributes = VAR_19;
            FUNC_2("Setting attributes 0x%02x\n", *VAR_15->Attributes);
            VAR_18 |= VAR_7;
        }
    }

    if (FUNC_7(VAR_16))
    {
        if (VAR_17->CreationTime.QuadPart != 0 && VAR_17->CreationTime.QuadPart != -1)
        {
            FUNC_3(VAR_16,
                                       &VAR_17->CreationTime,
                                       &VAR_15->entry.FatX.CreationDate,
                                       &VAR_15->entry.FatX.CreationTime);
            VAR_18 |= VAR_8;
        }

        if (VAR_17->LastAccessTime.QuadPart != 0 && VAR_17->LastAccessTime.QuadPart != -1)
        {
            FUNC_3(VAR_16,
                                       &VAR_17->LastAccessTime,
                                       &VAR_15->entry.FatX.AccessDate,
                                       &VAR_15->entry.FatX.AccessTime);
            VAR_18 |= VAR_9;
        }

        if (VAR_17->LastWriteTime.QuadPart != 0 && VAR_17->LastWriteTime.QuadPart != -1)
        {
            FUNC_3(VAR_16,
                                       &VAR_17->LastWriteTime,
                                       &VAR_15->entry.FatX.UpdateDate,
                                       &VAR_15->entry.FatX.UpdateTime);
            VAR_18 |= VAR_10;
        }
    }
    else
    {
        if (VAR_17->CreationTime.QuadPart != 0 && VAR_17->CreationTime.QuadPart != -1)
        {
            FUNC_3(VAR_16,
                                       &VAR_17->CreationTime,
                                       &VAR_15->entry.Fat.CreationDate,
                                       &VAR_15->entry.Fat.CreationTime);
            VAR_18 |= VAR_8;
        }

        if (VAR_17->LastAccessTime.QuadPart != 0 && VAR_17->LastAccessTime.QuadPart != -1)
        {
            FUNC_3(VAR_16,
                                       &VAR_17->LastAccessTime,
                                       &VAR_15->entry.Fat.AccessDate,
                                       ((void*)0));
            VAR_18 |= VAR_9;
        }

        if (VAR_17->LastWriteTime.QuadPart != 0 && VAR_17->LastWriteTime.QuadPart != -1)
        {
            FUNC_3(VAR_16,
                                       &VAR_17->LastWriteTime,
                                       &VAR_15->entry.Fat.UpdateDate,
                                       &VAR_15->entry.Fat.UpdateTime);
            VAR_18 |= VAR_10;
        }
    }

    FUNC_4(VAR_16, VAR_15);

    if (VAR_18 != 0)
    {
        FUNC_6(VAR_16,
                         VAR_15,
                         VAR_18,
                         VAR_0);
    }

    return VAR_12;
}

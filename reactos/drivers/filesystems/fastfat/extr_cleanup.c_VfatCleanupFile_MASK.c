
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_27__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_37__ {int Flags; int OpenHandleCount; int NotifyList; int NotifySync; } ;
struct TYPE_36__ {int Flags; TYPE_4__* SectionObjectPointer; TYPE_7__* FsContext2; scalar_t__ FsContext; } ;
struct TYPE_35__ {int Flags; } ;
struct TYPE_29__ {scalar_t__ QuadPart; } ;
struct TYPE_30__ {scalar_t__ QuadPart; } ;
struct TYPE_28__ {scalar_t__ QuadPart; } ;
struct TYPE_31__ {TYPE_27__ FileSize; TYPE_2__ AllocationSize; TYPE_1__ ValidDataLength; } ;
struct TYPE_34__ {scalar_t__ OpenHandleCount; int MainResource; int PagingIoResource; int Flags; int PathNameU; int ParentListHead; int FCBShareAccess; TYPE_3__ RFCB; TYPE_8__* FileObject; int FileLock; } ;
struct TYPE_33__ {int Irp; TYPE_9__* DeviceExt; TYPE_8__* FileObject; } ;
struct TYPE_32__ {int * ImageSectionObject; int * DataSectionObject; } ;
typedef TYPE_5__* PVFAT_IRP_CONTEXT ;
typedef TYPE_6__* PVFATFCB ;
typedef TYPE_7__* PVFATCCB ;
typedef TYPE_8__* PFILE_OBJECT ;
typedef TYPE_9__* PDEVICE_EXTENSION ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_8__*,TYPE_27__*,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,TYPE_9__*,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_8__*,int ,int *) ;
 int FUNC_8 (int ,int *,TYPE_7__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_8__*,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (TYPE_8__*) ;
 int FUNC_13 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_14 (TYPE_9__*,int ) ;
 int FUNC_15 (TYPE_9__*,TYPE_6__*,int *) ;
 int FUNC_16 (TYPE_9__*,TYPE_6__*) ;
 int FUNC_17 (TYPE_9__*,TYPE_6__*) ;
 scalar_t__ FUNC_18 (TYPE_6__*) ;
 int FUNC_19 (TYPE_9__*,TYPE_6__*,int ,int ) ;

__attribute__((used)) static
BOOLEAN
FUNC_20(
    PVFAT_IRP_CONTEXT VAR_16)
{
    PVFATFCB VAR_17;
    PVFATCCB VAR_18;
    BOOLEAN VAR_19;
    PDEVICE_EXTENSION VAR_20 = VAR_16->DeviceExt;
    PFILE_OBJECT VAR_21 = VAR_16->FileObject;
    BOOLEAN VAR_22 = VAR_1;

    FUNC_3("VfatCleanupFile(DeviceExt %p, FileObject %p)\n",
           VAR_16->DeviceExt, VAR_21);


    VAR_17 = (PVFATFCB)VAR_21->FsContext;
    if (!VAR_17)
        return VAR_1;

    VAR_19 = FUNC_0(VAR_17->Flags, VAR_9);
    if (VAR_19)
    {
        VAR_17->OpenHandleCount--;
        VAR_20->OpenHandleCount--;

        if (VAR_17->OpenHandleCount != 0)
        {
            FUNC_10(VAR_21, &VAR_17->FCBShareAccess);
        }
    }
    else
    {
        FUNC_4(&VAR_17->MainResource, VAR_14);
        FUNC_4(&VAR_17->PagingIoResource, VAR_14);

        VAR_18 = VAR_21->FsContext2;
        if (FUNC_0(VAR_18->Flags, VAR_0))
        {
            VAR_17->Flags |= VAR_5;
        }


        FUNC_8(VAR_16->DeviceExt->NotifySync,
                           &(VAR_16->DeviceExt->NotifyList),
                           VAR_21->FsContext2);

        VAR_17->OpenHandleCount--;
        VAR_20->OpenHandleCount--;

        if (!FUNC_18(VAR_17) &&
            FUNC_6(&VAR_17->FileLock))
        {

            FUNC_7(&VAR_17->FileLock,
                               VAR_21,
                               FUNC_9(VAR_16->Irp),
                               ((void*)0));
        }

        if (FUNC_0(VAR_17->Flags, VAR_6))
        {
            FUNC_17 (VAR_20, VAR_17);
        }

        if (FUNC_0(VAR_17->Flags, VAR_5) &&
            VAR_17->OpenHandleCount == 0)
        {
            if (FUNC_18(VAR_17) &&
                !FUNC_16(VAR_20, VAR_17))
            {
                VAR_17->Flags &= ~VAR_5;
            }
            else
            {
                PFILE_OBJECT VAR_23;
                VAR_23 = VAR_17->FileObject;
                if (VAR_23 != ((void*)0))
                {
                    VAR_17->FileObject = ((void*)0);
                    FUNC_1(VAR_23, ((void*)0), ((void*)0));
                    FUNC_2(VAR_17->Flags, VAR_2);
                    FUNC_12(VAR_23);
                }

                VAR_17->RFCB.ValidDataLength.QuadPart = 0;
                VAR_17->RFCB.FileSize.QuadPart = 0;
                VAR_17->RFCB.AllocationSize.QuadPart = 0;
            }
        }


        FUNC_1(VAR_21, &VAR_17->RFCB.FileSize, ((void*)0));

        if (FUNC_0(VAR_17->Flags, VAR_5) &&
            VAR_17->OpenHandleCount == 0)
        {
            FUNC_15(VAR_20, VAR_17, ((void*)0));

            FUNC_19(VAR_20,
                             VAR_17,
                             (FUNC_18(VAR_17) ?
                              VAR_11 : VAR_12),
                             VAR_10);
        }

        if (VAR_17->OpenHandleCount != 0)
        {
            FUNC_10(VAR_21, &VAR_17->FCBShareAccess);
        }
        VAR_21->Flags |= VAR_13;




        FUNC_5(&VAR_17->PagingIoResource);
        FUNC_5(&VAR_17->MainResource);
    }
    return VAR_22;
}

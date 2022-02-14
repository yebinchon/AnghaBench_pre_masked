
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


typedef int ULONG ;
struct TYPE_23__ {struct TYPE_23__* Flink; } ;
struct TYPE_25__ {int OpenHandleCount; int Flags; TYPE_12__* VolumeFcb; TYPE_6__ FcbListHead; TYPE_1__* FATFileObject; } ;
struct TYPE_24__ {TYPE_5__* FsContext; } ;
struct TYPE_22__ {int OpenHandleCount; int PathNameU; int RefCount; int * FileObject; int Flags; } ;
struct TYPE_21__ {TYPE_2__* Stack; TYPE_7__* FileObject; TYPE_8__* DeviceExt; } ;
struct TYPE_20__ {int Flags; } ;
struct TYPE_19__ {int FileObject; } ;
struct TYPE_18__ {TYPE_3__* Vpb; } ;
struct TYPE_17__ {int Flags; } ;
typedef TYPE_3__* PVPB ;
typedef TYPE_4__* PVFAT_IRP_CONTEXT ;
typedef TYPE_5__* PVFATFCB ;
typedef TYPE_6__* PLIST_ENTRY ;
typedef TYPE_7__* PFILE_OBJECT ;
typedef TYPE_8__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_5__* FUNC_1 (TYPE_6__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,TYPE_4__*,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (TYPE_8__*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (TYPE_8__*,TYPE_12__*) ;
 int FUNC_9 (TYPE_5__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_10(
    PVFAT_IRP_CONTEXT VAR_15,
    BOOLEAN VAR_16)
{
    PFILE_OBJECT VAR_17;
    PDEVICE_EXTENSION VAR_18;
    PVFATFCB VAR_19;
    PVPB VAR_20;

    FUNC_3("VfatLockOrUnlockVolume(%p, %d)\n", VAR_15, VAR_16);

    VAR_18 = VAR_15->DeviceExt;
    VAR_17 = VAR_15->FileObject;
    VAR_19 = VAR_17->FsContext;
    VAR_20 = VAR_18->FATFileObject->Vpb;


    if (!FUNC_0(VAR_19->Flags, VAR_1))
    {
        return VAR_6;
    }


    if ((FUNC_0(VAR_18->Flags, VAR_12) && VAR_16) ||
        (!FUNC_0(VAR_18->Flags, VAR_12) && !VAR_16))
    {
        return VAR_6;
    }


    if ((FUNC_0(VAR_20->Flags, VAR_14) && VAR_16) ||
        (!FUNC_0(VAR_20->Flags, VAR_14) && !VAR_16))
    {
        return VAR_6;
    }

    if (VAR_16)
    {
        FUNC_5(VAR_15->Stack->FileObject, VAR_2);
    }


    if (VAR_16 && VAR_18->OpenHandleCount != 1)
    {
        PLIST_ENTRY VAR_21;
        BOOLEAN VAR_22 = VAR_8;
        ULONG VAR_23 = 0;


        if (FUNC_0(VAR_18->Flags, VAR_11))
        {

            VAR_21 = VAR_18->FcbListHead.Flink;
            while (VAR_21 != &VAR_18->FcbListHead)
            {
                VAR_19 = FUNC_1(VAR_21, VAR_13, VAR_5);
                VAR_21 = VAR_21->Flink;




                if (VAR_19->OpenHandleCount == 0)
                {
                    continue;
                }


                if (!FUNC_9(VAR_19))
                {
                    VAR_22 = VAR_0;
                    break;
                }




                if (VAR_19->FileObject != ((void*)0) && VAR_19->OpenHandleCount > 1)
                {
                    VAR_22 = VAR_0;
                    break;
                }


                VAR_23 += VAR_19->OpenHandleCount;

                if (VAR_23 > 2)
                {
                    VAR_22 = VAR_0;
                    break;
                }
            }
        }
        else
        {
            VAR_22 = VAR_0;
        }


        if (!VAR_22)
        {


        FUNC_4("Can't lock: %u opened\n", VAR_18->OpenHandleCount);

        VAR_21 = VAR_18->FcbListHead.Flink;
        while (VAR_21 != &VAR_18->FcbListHead)
        {
            VAR_19 = FUNC_1(VAR_21, VAR_13, VAR_5);
            VAR_21 = VAR_21->Flink;

            if (VAR_19->OpenHandleCount > 0)
            {
                FUNC_4("Opened (%u - %u): %wZ\n", VAR_19->OpenHandleCount, VAR_19->RefCount, &VAR_19->PathNameU);
            }
        }

        FUNC_5(VAR_15->Stack->FileObject, VAR_3);

        return VAR_6;





        }
        else
        {
            FUNC_4("HACK: Using lock-hack!\n");
        }

    }


    if (VAR_16)
    {

        FUNC_8(VAR_18, VAR_18->VolumeFcb);


        if (FUNC_0(VAR_18->VolumeFcb->Flags, VAR_9) &&
            FUNC_0(VAR_18->VolumeFcb->Flags, VAR_10))
        {

            if (FUNC_6(FUNC_7(VAR_18, VAR_0)))
                FUNC_2(VAR_18->VolumeFcb->Flags, VAR_10);
        }

        VAR_18->Flags |= VAR_12;
        VAR_20->Flags |= VAR_14;
    }
    else
    {
        VAR_18->Flags &= ~VAR_12;
        VAR_20->Flags &= ~VAR_14;

        FUNC_5(VAR_15->Stack->FileObject, VAR_4);
    }

    return VAR_7;
}

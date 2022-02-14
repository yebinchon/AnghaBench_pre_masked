
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_21__ {int FatResource; int Flags; TYPE_5__* VolumeFcb; TYPE_5__* RootFcb; int FcbListHead; } ;
struct TYPE_20__ {scalar_t__ FsContext; } ;
struct TYPE_19__ {int Flags; } ;
struct TYPE_18__ {TYPE_3__* DeviceObject; TYPE_1__* Stack; TYPE_6__* FileObject; TYPE_7__* DeviceExt; } ;
struct TYPE_17__ {TYPE_2__* Vpb; } ;
struct TYPE_16__ {int Flags; } ;
struct TYPE_15__ {int FileObject; } ;
typedef TYPE_4__* PVFAT_IRP_CONTEXT ;
typedef TYPE_5__* PVFATFCB ;
typedef int PLIST_ENTRY ;
typedef TYPE_6__* PFILE_OBJECT ;
typedef TYPE_7__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_5__* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,TYPE_4__*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (TYPE_7__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_13(
    PVFAT_IRP_CONTEXT VAR_15)
{
    PDEVICE_EXTENSION VAR_16;
    PLIST_ENTRY VAR_17;
    PVFATFCB VAR_18;
    PFILE_OBJECT VAR_19;

    FUNC_3("VfatDismountVolume(%p)\n", VAR_15);

    VAR_16 = VAR_15->DeviceExt;
    VAR_19 = VAR_15->FileObject;




    if (!FUNC_0(VAR_16->Flags, VAR_12))
    {
        return VAR_3;
    }


    if (FUNC_0(VAR_16->Flags, VAR_11))
    {
        return VAR_3;
    }


    if (FUNC_0(VAR_16->Flags, VAR_8))
    {
        return VAR_5;
    }


    FUNC_6(VAR_15->Stack->FileObject, VAR_1);

    FUNC_4(&VAR_16->FatResource, VAR_6);


    FUNC_11(VAR_16, (PVFATFCB)VAR_19->FsContext);


    if (FUNC_0(VAR_16->VolumeFcb->Flags, VAR_7) &&
        FUNC_0(VAR_16->VolumeFcb->Flags, VAR_10))
    {

        if (FUNC_8(FUNC_10(VAR_16, VAR_0)))
            VAR_16->VolumeFcb->Flags &= ~VAR_10;
    }


    while (!FUNC_7(&VAR_16->FcbListHead))
    {
        VAR_17 = FUNC_9(&VAR_16->FcbListHead);
        VAR_18 = FUNC_1(VAR_17, VAR_13, VAR_2);

        if (VAR_18 == VAR_16->RootFcb)
            VAR_16->RootFcb = ((void*)0);
        else if (VAR_18 == VAR_16->VolumeFcb)
            VAR_16->VolumeFcb = ((void*)0);

        FUNC_12(VAR_18);
    }


    FUNC_2(VAR_16->Flags, VAR_9);


    VAR_16->Flags |= VAR_8;

    VAR_15->DeviceObject->Vpb->Flags &= ~VAR_14;


    FUNC_5(&VAR_16->FatResource);

    return VAR_4;
}

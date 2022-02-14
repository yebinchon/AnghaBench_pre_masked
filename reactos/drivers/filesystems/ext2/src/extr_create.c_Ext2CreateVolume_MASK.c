
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int ULONG ;
struct TYPE_28__ {TYPE_5__* Irp; } ;
struct TYPE_27__ {scalar_t__ OpenVolumeCount; scalar_t__ ReferenceCount; scalar_t__ OpenHandleCount; int Vpb; TYPE_10__* LockFile; int Flags; int ShareAccess; } ;
struct TYPE_22__ {int Options; int ShareAccess; TYPE_1__* SecurityContext; } ;
struct TYPE_23__ {TYPE_2__ Create; } ;
struct TYPE_26__ {int Flags; TYPE_10__* FileObject; TYPE_3__ Parameters; } ;
struct TYPE_24__ {int Information; } ;
struct TYPE_25__ {TYPE_4__ IoStatus; } ;
struct TYPE_21__ {int DesiredAccess; } ;
struct TYPE_20__ {int Flags; int Vpb; int * FsContext2; TYPE_7__* FsContext; } ;
typedef TYPE_5__* PIRP ;
typedef TYPE_6__* PIO_STACK_LOCATION ;
typedef TYPE_7__* PEXT2_VCB ;
typedef TYPE_8__* PEXT2_IRP_CONTEXT ;
typedef int * PEXT2_CCB ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;
typedef int ACCESS_MASK ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_8__*,TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_8__*,TYPE_7__*,int ) ;
 int FUNC_4 (scalar_t__*) ;
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
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int,int,TYPE_10__*,int *,int ) ;
 TYPE_6__* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int,int,TYPE_10__*,int *) ;
 scalar_t__ FUNC_9 (int,int) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;

NTSTATUS
FUNC_13(PEXT2_IRP_CONTEXT VAR_19, PEXT2_VCB VAR_20)
{
    PIO_STACK_LOCATION VAR_21;
    PIRP VAR_22;
    PEXT2_CCB VAR_23;

    NTSTATUS VAR_24;

    ACCESS_MASK VAR_25;
    ULONG VAR_26;

    ULONG VAR_27;
    BOOLEAN VAR_28;
    BOOLEAN VAR_29;

    ULONG VAR_30;

    VAR_22 = VAR_19->Irp;
    VAR_21 = FUNC_7(VAR_22);

    VAR_27 = VAR_21->Parameters.Create.Options;

    VAR_28 = FUNC_9(VAR_27, VAR_1);
    VAR_29 = FUNC_9(VAR_21->Flags, VAR_10);

    VAR_30 = (VAR_27 >> 24) & 0x000000ff;

    VAR_25 = VAR_21->Parameters.Create.SecurityContext->DesiredAccess;
    VAR_26 = VAR_21->Parameters.Create.ShareAccess;

    if (VAR_28) {
        return VAR_14;
    }

    if (VAR_29) {
        FUNC_0();
        return VAR_13;
    }

    if ( (VAR_30 != VAR_2) &&
            (VAR_30 != VAR_4) ) {
        return VAR_11;
    }

    if ( !FUNC_5(VAR_26, VAR_6) &&
            VAR_20->OpenVolumeCount != 0 ) {
        return VAR_15;
    }

    VAR_23 = FUNC_1(0, ((void*)0));
    if (VAR_23 == ((void*)0)) {
        VAR_24 = VAR_12;
        goto errorout;
    }

    VAR_24 = VAR_16;

    if (VAR_20->OpenVolumeCount > 0) {
        VAR_24 = FUNC_6( VAR_25, VAR_26,
                                     VAR_21->FileObject,
                                     &(VAR_20->ShareAccess), VAR_17);

        if (!FUNC_11(VAR_24)) {
            goto errorout;
        }
    } else {
        FUNC_8( VAR_25, VAR_26,
                          VAR_21->FileObject,
                          &(VAR_20->ShareAccess) );
    }


    if (VAR_20->OpenVolumeCount == 0 &&
        !FUNC_9(VAR_26, VAR_6) &&
        !FUNC_9(VAR_26, VAR_7) ){

        if (!FUNC_10(VAR_20)) {
            FUNC_2(VAR_19, VAR_20, VAR_0);
            FUNC_3(VAR_19, VAR_20, VAR_0);
        }

        FUNC_12(VAR_20->Flags, VAR_18);
        VAR_20->LockFile = VAR_21->FileObject;
    } else {

        if (FUNC_5(VAR_21->FileObject->Flags, VAR_9) &&
            FUNC_5(VAR_25, VAR_5 | VAR_8) ) {
            if (!FUNC_10(VAR_20)) {
                FUNC_2(VAR_19, VAR_20, VAR_0);
                FUNC_3(VAR_19, VAR_20, VAR_0);
            }
        }
    }

    VAR_21->FileObject->Flags |= VAR_9;
    VAR_21->FileObject->FsContext = VAR_20;
    VAR_21->FileObject->FsContext2 = VAR_23;
    VAR_21->FileObject->Vpb = VAR_20->Vpb;

    FUNC_4(&VAR_20->ReferenceCount);
    FUNC_4(&VAR_20->OpenHandleCount);
    FUNC_4(&VAR_20->OpenVolumeCount);

    VAR_22->IoStatus.Information = VAR_3;

errorout:

    return VAR_24;
}

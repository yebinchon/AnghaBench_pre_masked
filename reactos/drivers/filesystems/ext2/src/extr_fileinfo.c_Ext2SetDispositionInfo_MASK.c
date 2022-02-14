
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ SymLink; } ;
struct TYPE_18__ {int Flags; TYPE_3__* Mcb; } ;
struct TYPE_17__ {int Irp; } ;
struct TYPE_16__ {int Inode; int FullName; } ;
struct TYPE_15__ {TYPE_1__* FileObject; } ;
struct TYPE_14__ {int DeletePending; } ;
typedef int PIRP ;
typedef TYPE_2__* PIO_STACK_LOCATION ;
typedef int PEXT2_VCB ;
typedef TYPE_3__* PEXT2_MCB ;
typedef TYPE_4__* PEXT2_IRP_CONTEXT ;
typedef TYPE_5__* PEXT2_FCB ;
typedef TYPE_6__* PEXT2_CCB ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_5__*,TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;

NTSTATUS
FUNC_7(
    PEXT2_IRP_CONTEXT VAR_5,
    PEXT2_VCB VAR_6,
    PEXT2_FCB VAR_7,
    PEXT2_CCB VAR_8,
    BOOLEAN VAR_9
)
{
    PIRP VAR_10 = VAR_5->Irp;
    PIO_STACK_LOCATION VAR_11;
    NTSTATUS VAR_12 = VAR_3;
    PEXT2_MCB VAR_13 = VAR_7->Mcb;

    VAR_11 = FUNC_3(VAR_10);

    FUNC_1(VAR_0, ( "Ext2SetDispositionInfo: bDelete=%x\n", VAR_9));

    if (VAR_9) {

        FUNC_1(VAR_0, ( "Ext2SetDispositionInformation: Removing %wZ.\n",
                        &VAR_13->FullName));

        if (VAR_8->SymLink || FUNC_4(&VAR_13->Inode)) {

        } else {
            VAR_12 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
        }

        if (FUNC_5(VAR_12)) {
            FUNC_6(VAR_7->Flags, VAR_2);
            VAR_11->FileObject->DeletePending = VAR_4;
        }

    } else {

        FUNC_0(VAR_7->Flags, VAR_2);
        VAR_11->FileObject->DeletePending = VAR_1;
    }

    return VAR_12;
}

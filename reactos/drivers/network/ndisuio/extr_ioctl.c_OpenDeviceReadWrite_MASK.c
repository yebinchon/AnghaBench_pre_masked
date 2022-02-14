
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_25__ {int Buffer; scalar_t__ Length; scalar_t__ MaximumLength; } ;
typedef TYPE_5__ UNICODE_STRING ;
typedef scalar_t__ ULONG ;
struct TYPE_21__ {scalar_t__ InputBufferLength; } ;
struct TYPE_22__ {TYPE_1__ DeviceIoControl; } ;
struct TYPE_29__ {TYPE_2__ Parameters; TYPE_10__* FileObject; } ;
struct TYPE_24__ {scalar_t__ Information; int Status; } ;
struct TYPE_23__ {int SystemBuffer; } ;
struct TYPE_28__ {TYPE_4__ IoStatus; TYPE_3__ AssociatedIrp; } ;
struct TYPE_27__ {scalar_t__ OpenCount; int Spinlock; int OpenEntryList; int DeviceName; } ;
struct TYPE_26__ {int ListEntry; int WriteOnly; TYPE_10__* FileObject; } ;
struct TYPE_20__ {TYPE_6__* FsContext2; TYPE_7__* FsContext; } ;
typedef TYPE_6__* PNDISUIO_OPEN_ENTRY ;
typedef TYPE_7__* PNDISUIO_ADAPTER_CONTEXT ;
typedef TYPE_8__* PIRP ;
typedef TYPE_9__* PIO_STACK_LOCATION ;
typedef TYPE_10__* PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef int KIRQL ;


 int FUNC_0 (char*,TYPE_10__*,int *) ;
 int FUNC_1 (TYPE_7__*,int *) ;
 TYPE_6__* FUNC_2 (int ,int) ;
 int VAR_0 ;
 TYPE_7__* FUNC_3 (TYPE_5__*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_8__*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_2 ;
 int FUNC_9 (TYPE_7__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static
NTSTATUS
FUNC_10(PIRP VAR_6, PIO_STACK_LOCATION VAR_7)
{
    PFILE_OBJECT VAR_8 = VAR_7->FileObject;
    UNICODE_STRING VAR_9;
    ULONG VAR_10;
    NTSTATUS VAR_11;
    PNDISUIO_ADAPTER_CONTEXT VAR_12;
    PNDISUIO_OPEN_ENTRY VAR_13;
    KIRQL VAR_14;

    VAR_10 = VAR_7->Parameters.DeviceIoControl.InputBufferLength;
    if (VAR_10 != 0)
    {
        VAR_9.MaximumLength = VAR_9.Length = VAR_10;
        VAR_9.Buffer = VAR_6->AssociatedIrp.SystemBuffer;


        VAR_12 = FUNC_3(&VAR_9);
        if (VAR_12 != ((void*)0))
        {
            FUNC_0("Binding file object 0x%x to device %wZ\n", VAR_8, &VAR_12->DeviceName);


            FUNC_6(&VAR_12->Spinlock, &VAR_14);
            if (VAR_12->OpenCount != 0)
            {


                FUNC_7(&VAR_12->Spinlock, VAR_14);
                VAR_11 = VAR_3;
            }
            else
            {

                FUNC_9(VAR_12);
                VAR_11 = VAR_5;
            }
        }
        else
        {

            VAR_11 = VAR_3;
        }


        if (FUNC_8(VAR_11))
        {
            VAR_13 = FUNC_2(VAR_2, sizeof(*VAR_13));
            if (VAR_13)
            {

                VAR_13->FileObject = VAR_8;


                VAR_13->WriteOnly = VAR_0;


                VAR_8->FsContext = VAR_12;
                VAR_8->FsContext2 = VAR_13;


                FUNC_4(&VAR_12->OpenEntryList,
                               &VAR_13->ListEntry);


                FUNC_7(&VAR_12->Spinlock, VAR_14);
                VAR_11 = VAR_5;
            }
            else
            {

                FUNC_7(&VAR_12->Spinlock, VAR_14);
                FUNC_1(VAR_12, ((void*)0));
                VAR_11 = VAR_4;
            }
        }
    }
    else
    {

        VAR_11 = VAR_3;
    }

    VAR_6->IoStatus.Status = VAR_11;
    VAR_6->IoStatus.Information = 0;

    FUNC_5(VAR_6, VAR_1);

    return VAR_11;
}


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
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int ULONG ;
struct TYPE_35__ {int ControlChannel; int ConnectionContext; int AddressHandle; } ;
struct TYPE_37__ {TYPE_7__ Handle; TYPE_12__* RequestContext; } ;
struct TYPE_36__ {int Status; } ;
struct TYPE_34__ {int ControlChannel; int ConnectionContext; int AddressHandle; } ;
struct TYPE_33__ {void* FsContext2; int FileName; TYPE_10__* FsContext; } ;
struct TYPE_31__ {scalar_t__ ShareAccess; } ;
struct TYPE_32__ {TYPE_3__ Create; } ;
struct TYPE_30__ {scalar_t__ AddressLength; scalar_t__ AddressType; } ;
struct TYPE_29__ {TYPE_14__* SystemBuffer; } ;
struct TYPE_28__ {scalar_t__ EaNameLength; scalar_t__ EaName; int EaValueLength; } ;
struct TYPE_27__ {TYPE_5__* FileObject; TYPE_4__ Parameters; } ;
struct TYPE_26__ {TYPE_8__ IoStatus; TYPE_1__ AssociatedIrp; } ;
struct TYPE_25__ {int TAAddressCount; TYPE_2__* Address; } ;
struct TYPE_24__ {TYPE_6__ Handle; int CancelIrps; } ;
typedef int TRANSPORT_CONTEXT ;
typedef TYPE_9__ TDI_REQUEST ;
typedef int TA_IP_ADDRESS ;
typedef void* PVOID ;
typedef TYPE_10__* PTRANSPORT_CONTEXT ;
typedef TYPE_11__* PTA_IP_ADDRESS ;
typedef TYPE_12__* PIRP ;
typedef TYPE_13__* PIO_STACK_LOCATION ;
typedef TYPE_14__* PFILE_FULL_EA_INFORMATION ;
typedef scalar_t__ PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_10__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_10__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_9__*,TYPE_11__*,int ,int,int *) ;
 int FUNC_3 (TYPE_9__*,void*) ;
 int FUNC_4 (TYPE_9__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_13__* FUNC_5 (TYPE_12__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_7 (scalar_t__*,int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_8 (int ,char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ VAR_22 ;

NTSTATUS FUNC_10(
    PDEVICE_OBJECT VAR_23,
    PIRP VAR_24)
{
    PFILE_FULL_EA_INFORMATION VAR_25;
    PTRANSPORT_CONTEXT VAR_26;
    PIO_STACK_LOCATION VAR_27;
    PTA_IP_ADDRESS VAR_28;
    TDI_REQUEST VAR_29;
    PVOID VAR_30;
    NTSTATUS VAR_31;
    ULONG VAR_32;
    BOOLEAN VAR_33;

    FUNC_8(VAR_0, ("Called. DeviceObject is at (0x%X), IRP is at (0x%X).\n", VAR_23, VAR_24));

    VAR_25 = VAR_24->AssociatedIrp.SystemBuffer;






    VAR_26 = FUNC_0(VAR_7, sizeof(TRANSPORT_CONTEXT),
                                    VAR_19);
    if (!VAR_26)
    {
        FUNC_8(VAR_6, ("Insufficient resources.\n"));
        return VAR_9;
    }

    VAR_26->CancelIrps = VAR_1;

    VAR_27 = FUNC_5(VAR_24);
    VAR_27->FileObject->FsContext = VAR_26;
    VAR_29.RequestContext = VAR_24;


    if (VAR_25 &&
        (VAR_25->EaNameLength == VAR_18) &&
        (FUNC_7(&VAR_25->EaName, VAR_21,
        VAR_18) == VAR_18))
    {






        VAR_28 = (PTA_IP_ADDRESS)(VAR_25->EaName + VAR_25->EaNameLength + 1);

        if ((VAR_25->EaValueLength < sizeof(TA_IP_ADDRESS)) ||
            (VAR_28->TAAddressCount != 1) ||
            (VAR_28->Address[0].AddressLength < VAR_12) ||
            (VAR_28->Address[0].AddressType != VAR_13))
        {
            FUNC_8(VAR_6, ("Parameters are invalid:\n"));
            FUNC_8(VAR_6, ("AddressCount: %d\n", VAR_28->TAAddressCount));
            if( VAR_28->TAAddressCount == 1 )
            {
                FUNC_8(VAR_6, ("AddressLength: %u\n",
                            VAR_28->Address[0].AddressLength));
                FUNC_8(VAR_6, ("AddressType: %u\n",
                            VAR_28->Address[0].AddressType));
            }

            FUNC_1(VAR_26, VAR_19);
            return VAR_10;
        }




        if (VAR_23 == VAR_11)
            VAR_32 = VAR_4;
        else if (VAR_23 == VAR_22)
            VAR_32 = VAR_5;
        else if (VAR_23 == VAR_2)
            VAR_32 = VAR_3;
        else if (VAR_23 == VAR_8)
        {
            VAR_31 = FUNC_9(&VAR_27->FileObject->FileName, &VAR_32);
            if (!FUNC_6(VAR_31))
            {
                FUNC_8(VAR_6, ("Raw IP protocol number is invalid.\n"));
                FUNC_1(VAR_26, VAR_19);
                return VAR_10;
            }
        }
        else
        {
            FUNC_8(VAR_6, ("Invalid device object at (0x%X).\n", VAR_23));
            FUNC_1(VAR_26, VAR_19);
            return VAR_10;
        }

        VAR_33 = (VAR_27->Parameters.Create.ShareAccess != 0);

        VAR_31 = FUNC_2(&VAR_29, VAR_28, VAR_32, VAR_33, ((void*)0));
        if (FUNC_6(VAR_31))
        {
            VAR_27->FileObject->FsContext2 = (PVOID)VAR_17;
            VAR_26->Handle.AddressHandle = VAR_29.Handle.AddressHandle;
        }

    }
    else if (VAR_25 &&
            (VAR_25->EaNameLength == VAR_14) &&
            (FUNC_7
            (&VAR_25->EaName, VAR_20,
            VAR_14) ==
            VAR_14))
    {




        if (VAR_25->EaValueLength < sizeof(PVOID))
        {
            FUNC_8(VAR_6, ("Parameters are invalid.\n"));
            FUNC_1(VAR_26, VAR_19);
            return VAR_10;
        }



        if (VAR_23 != VAR_11)
        {
            FUNC_8(VAR_6, ("Bad device object.\n"));
            FUNC_1(VAR_26, VAR_19);
            return VAR_10;
        }

        VAR_30 = *((PVOID*)(VAR_25->EaName + VAR_25->EaNameLength));



        VAR_31 = FUNC_3(&VAR_29, VAR_30);
        if (FUNC_6(VAR_31))
        {
            VAR_27->FileObject->FsContext2 = (PVOID)VAR_15;
            VAR_26->Handle.ConnectionContext = VAR_29.Handle.ConnectionContext;
        }
    }
    else
    {

        VAR_31 = FUNC_4(&VAR_29);
        if (FUNC_6(VAR_31))
        {
            VAR_27->FileObject->FsContext2 = (PVOID)VAR_16;
            VAR_26->Handle.ControlChannel = VAR_29.Handle.ControlChannel;
        }
    }

    if (!FUNC_6(VAR_31))
        FUNC_1(VAR_26, VAR_19);

    FUNC_8(VAR_0, ("Leaving. Status = (0x%X).\n", VAR_31));

    VAR_24->IoStatus.Status = VAR_31;
    return VAR_31;
}

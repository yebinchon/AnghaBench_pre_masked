
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int ULONG ;
struct TYPE_28__ {scalar_t__ AsyncStatus; int AsyncEvent; int BindingHandle; int DeviceName; } ;
struct TYPE_27__ {scalar_t__ Oid; int * Data; } ;
struct TYPE_26__ {scalar_t__ Status; int * Information; } ;
struct TYPE_24__ {scalar_t__ Oid; int InformationBufferLength; int * BytesWritten; int * InformationBuffer; } ;
struct TYPE_25__ {TYPE_5__ QUERY_INFORMATION; } ;
struct TYPE_22__ {int InputBufferLength; } ;
struct TYPE_23__ {TYPE_3__ DeviceIoControl; } ;
struct TYPE_21__ {TYPE_8__* SystemBuffer; } ;
struct TYPE_20__ {TYPE_9__* FsContext; } ;
struct TYPE_19__ {TYPE_6__ DATA; int RequestType; } ;
struct TYPE_18__ {TYPE_4__ Parameters; TYPE_1__* FileObject; } ;
struct TYPE_17__ {TYPE_7__ IoStatus; TYPE_2__ AssociatedIrp; } ;
typedef TYPE_8__* PNDISUIO_QUERY_OID ;
typedef TYPE_9__* PNDISUIO_ADAPTER_CONTEXT ;
typedef TYPE_10__* PIRP ;
typedef TYPE_11__* PIO_STACK_LOCATION ;
typedef scalar_t__ NTSTATUS ;
typedef scalar_t__ NDIS_STATUS ;
typedef TYPE_12__ NDIS_REQUEST ;
typedef int NDIS_OID ;


 int FUNC_0 (char*,scalar_t__,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_10__*,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (scalar_t__*,int ,TYPE_12__*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static
NTSTATUS
FUNC_4(PIRP VAR_11, PIO_STACK_LOCATION VAR_12)
{
    PNDISUIO_ADAPTER_CONTEXT VAR_13 = VAR_12->FileObject->FsContext;
    PNDISUIO_QUERY_OID VAR_14;
    NDIS_REQUEST VAR_15;
    ULONG VAR_16;
    NDIS_STATUS VAR_17;

    VAR_11->IoStatus.Information = 0;

    VAR_14 = VAR_11->AssociatedIrp.SystemBuffer;
    VAR_16 = VAR_12->Parameters.DeviceIoControl.InputBufferLength;
    if (VAR_14 && VAR_16 >= sizeof(NDIS_OID))
    {

        VAR_15.RequestType = VAR_8;
        VAR_15.DATA.QUERY_INFORMATION.Oid = VAR_14->Oid;
        VAR_15.DATA.QUERY_INFORMATION.InformationBufferLength = VAR_16 - sizeof(NDIS_OID);
        if (VAR_15.DATA.QUERY_INFORMATION.InformationBufferLength != 0)
        {
            VAR_15.DATA.QUERY_INFORMATION.InformationBuffer = VAR_14->Data;
        }
        else
        {
            VAR_15.DATA.QUERY_INFORMATION.InformationBuffer = ((void*)0);
        }
        VAR_15.DATA.QUERY_INFORMATION.BytesWritten = 0;

        FUNC_0("Querying OID 0x%x on adapter %wZ\n", VAR_14->Oid, &VAR_13->DeviceName);


        FUNC_3(&VAR_17,
                    VAR_13->BindingHandle,
                    &VAR_15);


        if (VAR_17 == VAR_6)
        {
            FUNC_2(&VAR_13->AsyncEvent,
                                  VAR_0,
                                  VAR_3,
                                  VAR_1,
                                  ((void*)0));
            VAR_17 = VAR_13->AsyncStatus;
        }


        if (VAR_17 == VAR_5 ||
            VAR_17 == VAR_4)
        {
            VAR_17 = VAR_9;
        }
        else if (VAR_17 == VAR_7)
        {
            VAR_11->IoStatus.Information = sizeof(NDIS_OID) + VAR_15.DATA.QUERY_INFORMATION.BytesWritten;
        }

        FUNC_0("Final request status: 0x%x (%d)\n", VAR_17, VAR_11->IoStatus.Information);
    }
    else
    {

        VAR_17 = VAR_10;
    }

    VAR_11->IoStatus.Status = VAR_17;

    FUNC_1(VAR_11, VAR_2);

    return VAR_17;
}

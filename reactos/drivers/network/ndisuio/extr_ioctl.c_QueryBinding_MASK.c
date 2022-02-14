
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int ULONG ;
struct TYPE_19__ {int InputBufferLength; } ;
struct TYPE_20__ {TYPE_2__ DeviceIoControl; } ;
struct TYPE_26__ {TYPE_3__ Parameters; } ;
struct TYPE_21__ {int Information; int Status; } ;
struct TYPE_18__ {TYPE_5__* SystemBuffer; } ;
struct TYPE_25__ {TYPE_4__ IoStatus; TYPE_1__ AssociatedIrp; } ;
struct TYPE_24__ {struct TYPE_24__* Flink; } ;
struct TYPE_17__ {int Length; int Buffer; } ;
struct TYPE_23__ {TYPE_14__ DeviceName; } ;
struct TYPE_22__ {int BindingIndex; int DeviceNameOffset; int DeviceNameLength; int DeviceDescrOffset; scalar_t__ DeviceDescrLength; } ;
typedef scalar_t__ PUCHAR ;
typedef TYPE_5__* PNDISUIO_QUERY_BINDING ;
typedef TYPE_6__* PNDISUIO_ADAPTER_CONTEXT ;
typedef TYPE_7__* PLIST_ENTRY ;
typedef TYPE_8__* PIRP ;
typedef TYPE_9__* PIO_STACK_LOCATION ;
typedef int NTSTATUS ;
typedef int NDISUIO_QUERY_BINDING ;
typedef int KIRQL ;


 TYPE_6__* FUNC_0 (TYPE_7__*,int ,int ) ;
 int FUNC_1 (char*,int,TYPE_14__*) ;
 TYPE_7__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_8__*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static
NTSTATUS
FUNC_6(PIRP VAR_9, PIO_STACK_LOCATION VAR_10)
{
    PNDISUIO_ADAPTER_CONTEXT VAR_11 = ((void*)0);
    PNDISUIO_QUERY_BINDING VAR_12 = VAR_9->AssociatedIrp.SystemBuffer;
    ULONG VAR_13 = VAR_10->Parameters.DeviceIoControl.InputBufferLength;
    NTSTATUS VAR_14;
    PLIST_ENTRY VAR_15;
    KIRQL VAR_16;
    ULONG VAR_17;
    ULONG VAR_18 = 0;

    if (VAR_12 && VAR_13 >= sizeof(NDISUIO_QUERY_BINDING))
    {
        FUNC_3(&VAR_1, &VAR_16);
        VAR_17 = 0;
        VAR_15 = VAR_0.Flink;
        while (VAR_15 != &VAR_0)
        {
            if (VAR_17 == VAR_12->BindingIndex)
            {
                VAR_11 = FUNC_0(VAR_15, VAR_4, VAR_3);
                break;
            }
            VAR_17++;
            VAR_15 = VAR_15->Flink;
        }
        FUNC_4(&VAR_1, VAR_16);
        if (VAR_11)
        {
            FUNC_1("Query binding for index %d is adapter %wZ\n", VAR_17, &VAR_11->DeviceName);
            VAR_18 = sizeof(NDISUIO_QUERY_BINDING);
            if (VAR_11->DeviceName.Length <= VAR_13 - VAR_18)
            {
                VAR_12->DeviceNameOffset = VAR_18;
                VAR_12->DeviceNameLength = VAR_11->DeviceName.Length;
                FUNC_5((PUCHAR)VAR_12 + VAR_12->DeviceNameOffset,
                              VAR_11->DeviceName.Buffer,
                              VAR_12->DeviceNameLength);
                VAR_18 += VAR_11->DeviceName.Length;


                VAR_12->DeviceDescrOffset = VAR_18;
                VAR_12->DeviceDescrLength = 0;


                VAR_14 = VAR_8;
            }
            else
            {

                VAR_14 = VAR_5;
            }
        }
        else
        {

            VAR_14 = VAR_7;
        }
    }
    else
    {

        VAR_14 = VAR_6;
    }

    VAR_9->IoStatus.Status = VAR_14;
    VAR_9->IoStatus.Information = VAR_18;

    FUNC_2(VAR_9, VAR_2);

    return VAR_14;
}

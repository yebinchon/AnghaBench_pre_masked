
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_13__ {int ReceiveQueue; } ;
struct TYPE_12__ {int ListEntry; int Irp; TYPE_3__* AddressFile; struct TYPE_12__* Context; void* Complete; int UserContext; void* UserComplete; int BufferSize; int Buffer; TYPE_1__* ReturnInfo; int RemoteAddress; scalar_t__ RemotePort; } ;
struct TYPE_11__ {scalar_t__ RemoteAddressLength; scalar_t__ RemoteAddress; } ;
typedef int PVOID ;
typedef int PULONG ;
typedef TYPE_1__* PTDI_CONNECTION_INFORMATION ;
typedef int PIRP ;
typedef TYPE_2__* PDATAGRAM_RECEIVE_REQUEST ;
typedef void* PDATAGRAM_COMPLETION_ROUTINE ;
typedef int PCHAR ;
typedef TYPE_3__* PADDRESS_FILE ;
typedef int NTSTATUS ;
typedef int KIRQL ;
typedef int DATAGRAM_RECEIVE_REQUEST ;


 int FUNC_0 (scalar_t__,int *,scalar_t__*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (TYPE_3__*,int ) ;

NTSTATUS FUNC_10(
    PADDRESS_FILE VAR_6,
    PTDI_CONNECTION_INFORMATION VAR_7,
    PCHAR VAR_8,
    ULONG VAR_9,
    ULONG VAR_10,
    PTDI_CONNECTION_INFORMATION VAR_11,
    PULONG VAR_12,
    PDATAGRAM_COMPLETION_ROUTINE VAR_13,
    PVOID VAR_14,
    PIRP VAR_15)
{
    NTSTATUS VAR_16;
    PDATAGRAM_RECEIVE_REQUEST VAR_17;
    KIRQL VAR_18;

    FUNC_8(VAR_2, ("Called.\n"));

    FUNC_6(VAR_6, &VAR_18);

    VAR_17 = FUNC_2(VAR_3, sizeof(DATAGRAM_RECEIVE_REQUEST),
                                           VAR_0);
    if (VAR_17)
    {



 if ((VAR_7->RemoteAddressLength != 0) &&
     (VAR_7->RemoteAddress))
        {
     VAR_16 = FUNC_0(VAR_7->RemoteAddress,
        &VAR_17->RemoteAddress,
        &VAR_17->RemotePort);
     if (!FUNC_7(VAR_16))
            {
  FUNC_3(VAR_17, VAR_0);
         FUNC_9(VAR_6, VAR_18);
  return VAR_16;
            }
 }
 else
        {
     VAR_17->RemotePort = 0;
     FUNC_1(&VAR_17->RemoteAddress, 0);
        }

 FUNC_5(VAR_15);

 VAR_17->ReturnInfo = VAR_11;
 VAR_17->Buffer = VAR_8;
 VAR_17->BufferSize = VAR_9;
 VAR_17->UserComplete = VAR_13;
 VAR_17->UserContext = VAR_14;
 VAR_17->Complete =
  (PDATAGRAM_COMPLETION_ROUTINE)VAR_1;
 VAR_17->Context = VAR_17;
        VAR_17->AddressFile = VAR_6;
        VAR_17->Irp = VAR_15;


 FUNC_4(&VAR_6->ReceiveQueue, &VAR_17->ListEntry);

 FUNC_8(VAR_2, ("Leaving (pending %08x).\n", VAR_17));

 FUNC_9(VAR_6, VAR_18);

 return VAR_5;
    }
    else
    {
 FUNC_9(VAR_6, VAR_18);
        VAR_16 = VAR_4;
    }

    FUNC_8(VAR_2, ("Leaving with errors (0x%X).\n", VAR_16));

    return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef int VOID ;
typedef scalar_t__ USHORT ;
typedef int ULONG ;
typedef scalar_t__ UINT ;
struct TYPE_34__ {int Context; int (* Complete ) (int ,scalar_t__,scalar_t__) ;scalar_t__ BufferSize; TYPE_1__* ReturnInfo; int Buffer; int ListEntry; } ;
struct TYPE_29__ {int * IPv6Address; int IPv4Address; } ;
struct TYPE_33__ {scalar_t__ Type; TYPE_4__ Address; } ;
struct TYPE_32__ {scalar_t__ HeaderSize; int * Data; int * Header; } ;
struct TYPE_31__ {struct TYPE_31__* Flink; } ;
struct TYPE_30__ {int TAAddressCount; TYPE_3__* Address; } ;
struct TYPE_28__ {TYPE_2__* Address; int AddressLength; int AddressType; } ;
struct TYPE_27__ {int sin_zero; int in_addr; scalar_t__ sin_port; } ;
struct TYPE_26__ {scalar_t__ RemoteAddress; } ;
struct TYPE_25__ {scalar_t__ Protocol; scalar_t__ Port; scalar_t__ (* ReceiveDatagramHandler ) (int *,int,int *,int ,int *,int ,scalar_t__,scalar_t__,int *,int *,int *) ;int * ReceiveDatagramHandlerContext; scalar_t__ RegisteredReceiveDatagramHandler; TYPE_8__ Address; TYPE_6__ ReceiveQueue; scalar_t__ HeaderIncl; } ;
typedef int * PVOID ;
typedef scalar_t__ (* PTDI_IND_RECEIVE_DATAGRAM ) (int *,int,int *,int ,int *,int ,scalar_t__,scalar_t__,int *,int *,int *) ;
typedef TYPE_5__* PTA_IP_ADDRESS ;
typedef TYPE_6__* PLIST_ENTRY ;
typedef TYPE_7__* PIP_PACKET ;
typedef TYPE_8__* PIP_ADDRESS ;
typedef TYPE_9__* PDATAGRAM_RECEIVE_REQUEST ;
typedef TYPE_10__* PADDRESS_FILE ;
typedef scalar_t__ NTSTATUS ;
typedef int LONG ;
typedef int KIRQL ;
typedef int IPv6_RAW_ADDRESS ;
typedef int IPv4_RAW_ADDRESS ;


 scalar_t__ FUNC_0 (TYPE_8__*,TYPE_8__*) ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 TYPE_9__* FUNC_2 (TYPE_6__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_10__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_10__*,int *) ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (TYPE_10__*,int ) ;
 int FUNC_13 (int ,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int *,int,int *,int ,int *,int ,scalar_t__,scalar_t__,int *,int *,int *) ;

VOID FUNC_16(
  PADDRESS_FILE VAR_10,
  PIP_ADDRESS VAR_11,
  PIP_ADDRESS VAR_12,
  USHORT VAR_13,
  USHORT VAR_14,
  PIP_PACKET VAR_15,
  UINT VAR_16)
{
  KIRQL VAR_17;
  PTDI_IND_RECEIVE_DATAGRAM VAR_18;
  PVOID VAR_19;
  LONG VAR_20;
  PVOID VAR_21;
  ULONG VAR_22;
  NTSTATUS VAR_23;
  PVOID VAR_24;

  FUNC_11(VAR_4, ("Called.\n"));

  FUNC_5(VAR_10, &VAR_17);

  if (VAR_10->Protocol == VAR_1)
    {
      VAR_24 = VAR_15->Data;
    }
  else
    {
      if (VAR_10->HeaderIncl)
          VAR_24 = VAR_15->Header;
      else
      {
          VAR_24 = VAR_15->Data;
          VAR_16 -= VAR_15->HeaderSize;
      }
    }

  if (!FUNC_4(&VAR_10->ReceiveQueue))
    {
      PLIST_ENTRY VAR_25;
      PDATAGRAM_RECEIVE_REQUEST VAR_26 = ((void*)0);
      PTA_IP_ADDRESS VAR_27;

      FUNC_11(VAR_4, ("There is a receive request.\n"));


      VAR_25 = VAR_10->ReceiveQueue.Flink;
      while(VAR_25 != &VAR_10->ReceiveQueue) {
          VAR_26 = FUNC_2(VAR_25, VAR_0, VAR_3);
          VAR_25 = VAR_25->Flink;
   if( VAR_14 == VAR_10->Port &&
              (FUNC_0(VAR_12, &VAR_10->Address) ||
               FUNC_1(&VAR_10->Address) ||
               FUNC_1(VAR_12))) {


       FUNC_8(&VAR_26->ListEntry);

              FUNC_11(VAR_4, ("Suitable receive request found.\n"));

              FUNC_11(VAR_4,
                           ("Target Buffer: %x, Source Buffer: %x, Size %d\n",
                            VAR_26->Buffer, VAR_24, VAR_16));


       FUNC_9( VAR_26->Buffer,
        VAR_24,
        FUNC_6(VAR_26->BufferSize, VAR_16) );

       VAR_27 = (PTA_IP_ADDRESS)VAR_26->ReturnInfo->RemoteAddress;
       VAR_27->TAAddressCount = 1;
       VAR_27->Address->AddressType = VAR_8;
          VAR_27->Address->AddressLength = VAR_7;
       VAR_27->Address->Address->sin_port = VAR_13;
          VAR_27->Address->Address->in_addr = VAR_11->Address.IPv4Address;
          FUNC_10(VAR_27->Address->Address->sin_zero, 8);

       FUNC_11(VAR_4, ("(A: %08x) Addr %08x Port %04x\n",
          VAR_27,
          VAR_11->Address.IPv4Address, VAR_13));

              FUNC_7(VAR_10);
              FUNC_12(VAR_10, VAR_17);


              if (VAR_26->BufferSize < VAR_16)
                  VAR_26->Complete(VAR_26->Context, VAR_5, VAR_26->BufferSize);
              else
                  VAR_26->Complete(VAR_26->Context, VAR_6, VAR_16);

              FUNC_5(VAR_10, &VAR_17);
              FUNC_3(VAR_10);
   }
      }

      FUNC_12(VAR_10, VAR_17);
    }
  else if (VAR_10->RegisteredReceiveDatagramHandler)
    {
      FUNC_11(VAR_4, ("Calling receive event handler.\n"));

      VAR_18 = VAR_10->ReceiveDatagramHandler;
      VAR_19 = VAR_10->ReceiveDatagramHandlerContext;

      if (VAR_11->Type == VAR_2)
        {
          VAR_20 = sizeof(IPv4_RAW_ADDRESS);
          VAR_21 = &VAR_11->Address.IPv4Address;
        }
      else
        {
          VAR_20 = sizeof(IPv6_RAW_ADDRESS);
          VAR_21 = VAR_11->Address.IPv6Address;
        }

      FUNC_7(VAR_10);
      FUNC_12(VAR_10, VAR_17);

      VAR_23 = (*VAR_18)(VAR_19,
        VAR_20,
        VAR_21,
        0,
        ((void*)0),
        VAR_9,
        VAR_16,
        VAR_16,
        &VAR_22,
        VAR_24,
        ((void*)0));

      if (VAR_6 != VAR_23)
          FUNC_11(VAR_4, ("receive handler signaled failure with Status 0x%x\n", VAR_23));

      FUNC_3(VAR_10);
    }
  else
    {
      FUNC_12(VAR_10, VAR_17);
      FUNC_11(VAR_4, ("Discarding datagram.\n"));
    }

  FUNC_11(VAR_4, ("Leaving.\n"));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int USHORT ;
typedef int ULONG ;
struct TYPE_23__ {int IPv4Address; } ;
struct TYPE_31__ {TYPE_1__ Address; int Type; } ;
struct TYPE_30__ {int Port; TYPE_9__ Address; } ;
struct TYPE_29__ {TYPE_4__* Interface; } ;
struct TYPE_28__ {TYPE_3__* Address; } ;
struct TYPE_27__ {int RemoteAddress; } ;
struct TYPE_26__ {TYPE_9__ Unicast; } ;
struct TYPE_25__ {int AddressType; TYPE_2__* Address; } ;
struct TYPE_24__ {int sin_port; int in_addr; } ;
typedef int * PULONG ;
typedef TYPE_5__* PTDI_CONNECTION_INFORMATION ;
typedef TYPE_6__* PTA_IP_ADDRESS ;
typedef TYPE_7__* PNEIGHBOR_CACHE_ENTRY ;
typedef int PCHAR ;
typedef TYPE_8__* PADDRESS_FILE ;
typedef int NTSTATUS ;
typedef int KIRQL ;
typedef int IP_PACKET ;
typedef TYPE_9__ IP_ADDRESS ;


 scalar_t__ FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_8__*,int *,TYPE_9__*,int ,TYPE_9__*,int ,int ,int ) ;
 int FUNC_2 (int *,TYPE_7__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_8__*,int *) ;
 int VAR_1 ;
 TYPE_7__* FUNC_4 (TYPE_9__*,int *) ;
 int FUNC_5 (int ) ;
 TYPE_7__* FUNC_6 (TYPE_9__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_8__*,int ) ;

NTSTATUS FUNC_9(
    PADDRESS_FILE VAR_6,
    PTDI_CONNECTION_INFORMATION VAR_7,
    PCHAR VAR_8,
    ULONG VAR_9,
    PULONG VAR_10 )
{
    IP_PACKET VAR_11;
    PTA_IP_ADDRESS VAR_12 = (PTA_IP_ADDRESS)VAR_7->RemoteAddress;
    IP_ADDRESS VAR_13;
    IP_ADDRESS VAR_14;
    USHORT VAR_15;
    NTSTATUS VAR_16;
    PNEIGHBOR_CACHE_ENTRY VAR_17;
    KIRQL VAR_18;

    FUNC_3(VAR_6, &VAR_18);

    FUNC_7(VAR_1,("Sending Datagram(%x %x %x %d)\n",
         VAR_6, VAR_7, VAR_8, VAR_9));
    FUNC_7(VAR_1,("RemoteAddressTa: %x\n", VAR_12));

    switch( VAR_12->Address[0].AddressType ) {
    case 128:
  VAR_13.Type = VAR_0;
  VAR_13.Address.IPv4Address =
   VAR_12->Address[0].Address[0].in_addr;
  VAR_15 = VAR_12->Address[0].Address[0].sin_port;
  break;

    default:
  FUNC_8(VAR_6, VAR_18);
  return VAR_5;
    }

    VAR_14 = VAR_6->Address;
    if (FUNC_0(&VAR_14))
    {




        if(!(VAR_17 = FUNC_6( &VAR_13 ))) {
            FUNC_8(VAR_6, VAR_18);
            return VAR_3;
        }

        VAR_14 = VAR_17->Interface->Unicast;
    }
    else
    {
        if(!(VAR_17 = FUNC_4( &VAR_14, ((void*)0) ))) {
            FUNC_8(VAR_6, VAR_18);
            return VAR_2;
        }
    }

    VAR_16 = FUNC_1( VAR_6,
        &VAR_11,
        &VAR_13,
        VAR_15,
        &VAR_14,
        VAR_6->Port,
        VAR_8,
        VAR_9 );

    FUNC_8(VAR_6, VAR_18);

    if( !FUNC_5(VAR_16) )
  return VAR_16;

    VAR_16 = FUNC_2(&VAR_11, VAR_17);
    if (!FUNC_5(VAR_16))
        return VAR_16;

    *VAR_10 = VAR_9;

    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;


typedef int ULONG ;
struct TYPE_23__ {int IPv4Address; } ;
struct TYPE_30__ {TYPE_1__ Address; int Type; } ;
struct TYPE_29__ {TYPE_8__ Address; } ;
struct TYPE_28__ {TYPE_13__* Interface; } ;
struct TYPE_27__ {TYPE_3__* Address; } ;
struct TYPE_26__ {int RemoteAddress; } ;
struct TYPE_25__ {int AddressType; TYPE_2__* Address; } ;
struct TYPE_24__ {int in_addr; } ;
struct TYPE_22__ {TYPE_8__ Unicast; } ;
typedef int * PULONG ;
typedef TYPE_4__* PTDI_CONNECTION_INFORMATION ;
typedef TYPE_5__* PTA_IP_ADDRESS ;
typedef TYPE_6__* PNEIGHBOR_CACHE_ENTRY ;
typedef int PCHAR ;
typedef TYPE_7__* PADDRESS_FILE ;
typedef int NTSTATUS ;
typedef int KIRQL ;
typedef int IP_PACKET ;
typedef TYPE_8__ IP_ADDRESS ;


 scalar_t__ FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int *,TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_7__*,int *) ;
 int VAR_1 ;
 TYPE_6__* FUNC_3 (TYPE_8__*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*,TYPE_13__*,int *,TYPE_8__*,int ,int ) ;
 TYPE_6__* FUNC_6 (TYPE_8__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_7__*,int ) ;

NTSTATUS FUNC_9(
    PADDRESS_FILE VAR_6,
    PTDI_CONNECTION_INFORMATION VAR_7,
    PCHAR VAR_8,
    ULONG VAR_9,
    PULONG VAR_10 )
{
    IP_PACKET VAR_11;
    PTA_IP_ADDRESS VAR_12 = (PTA_IP_ADDRESS)VAR_7->RemoteAddress;
    IP_ADDRESS VAR_13, VAR_14;
    NTSTATUS VAR_15;
    PNEIGHBOR_CACHE_ENTRY VAR_16;
    KIRQL VAR_17;

    FUNC_7(VAR_1,("Sending Datagram(%x %x %x %d)\n",
      VAR_6, VAR_7, VAR_8, VAR_9));
    FUNC_7(VAR_1,("RemoteAddressTa: %x\n", VAR_12));

    switch( VAR_12->Address[0].AddressType ) {
        case 128:
            VAR_13.Type = VAR_0;
            VAR_13.Address.IPv4Address =
                VAR_12->Address[0].Address[0].in_addr;
            break;

        default:
            return VAR_5;
    }

    FUNC_7(VAR_1,("About to get route to destination\n"));

    FUNC_2(VAR_6, &VAR_17);

    VAR_14 = VAR_6->Address;
    if (FUNC_0(&VAR_14))
    {




        if(!(VAR_16 = FUNC_6( &VAR_13 )))
        {
            FUNC_8(VAR_6, VAR_17);
            return VAR_3;
        }

        VAR_14 = VAR_16->Interface->Unicast;
    }
    else
    {
        if(!(VAR_16 = FUNC_3( &VAR_14, ((void*)0) )))
        {
            FUNC_8(VAR_6, VAR_17);
            return VAR_2;
        }
    }

    VAR_15 = FUNC_5( VAR_6,
                                VAR_16->Interface,
                                &VAR_11,
                                &VAR_13,
                                VAR_8,
                                VAR_9 );

    FUNC_8(VAR_6, VAR_17);

    if( !FUNC_4(VAR_15) )
        return VAR_15;

    FUNC_7(VAR_1,("About to send datagram\n"));

    VAR_15 = FUNC_1(&VAR_11, VAR_16);
    if (!FUNC_4(VAR_15))
        return VAR_15;

    *VAR_10 = VAR_9;

    FUNC_7(VAR_1,("Leaving\n"));

    return VAR_4;
}

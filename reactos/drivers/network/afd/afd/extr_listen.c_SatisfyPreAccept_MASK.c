
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_24__ {int Address; int SequenceNumber; } ;
struct TYPE_23__ {TYPE_2__* ConnInfo; int Seq; } ;
struct TYPE_20__ {int Status; scalar_t__ Information; } ;
struct TYPE_16__ {int SystemBuffer; } ;
struct TYPE_22__ {TYPE_5__ IoStatus; scalar_t__ MdlAddress; TYPE_1__ AssociatedIrp; } ;
struct TYPE_21__ {TYPE_4__* Address; int TAAddressCount; } ;
struct TYPE_19__ {TYPE_3__* Address; int AddressLength; int AddressType; } ;
struct TYPE_18__ {int in_addr; int sin_port; } ;
struct TYPE_17__ {int RemoteAddress; } ;
typedef TYPE_6__* PTA_IP_ADDRESS ;
typedef TYPE_7__* PIRP ;
typedef scalar_t__ PCHAR ;
typedef TYPE_8__* PAFD_TDI_OBJECT_QELT ;
typedef TYPE_9__* PAFD_RECEIVED_ACCEPT_DATA ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_7__*,int ) ;

__attribute__((used)) static NTSTATUS FUNC_6( PIRP VAR_3, PAFD_TDI_OBJECT_QELT VAR_4 ) {
    PAFD_RECEIVED_ACCEPT_DATA VAR_5 =
        (PAFD_RECEIVED_ACCEPT_DATA)VAR_3->AssociatedIrp.SystemBuffer;
    PTA_IP_ADDRESS VAR_6;

    VAR_5->SequenceNumber = VAR_4->Seq;

    FUNC_0(VAR_1,("Giving SEQ %u to userland\n", VAR_4->Seq));
    FUNC_0(VAR_1,("Socket Address (K) %p (U) %p\n",
                            &VAR_5->Address,
                            VAR_4->ConnInfo->RemoteAddress));

    FUNC_4( &VAR_5->Address,
                                   VAR_4->ConnInfo->RemoteAddress );

    VAR_6 = (PTA_IP_ADDRESS)&VAR_5->Address;

    FUNC_0(VAR_1,("IPAddr->TAAddressCount %d\n",
                            VAR_6->TAAddressCount));
    FUNC_0(VAR_1,("IPAddr->Address[0].AddressType %u\n",
                            VAR_6->Address[0].AddressType));
    FUNC_0(VAR_1,("IPAddr->Address[0].AddressLength %u\n",
                            VAR_6->Address[0].AddressLength));
    FUNC_0(VAR_1,("IPAddr->Address[0].Address[0].sin_port %x\n",
                            VAR_6->Address[0].Address[0].sin_port));
    FUNC_0(VAR_1,("IPAddr->Address[0].Address[0].sin_addr %x\n",
                            VAR_6->Address[0].Address[0].in_addr));

    if( VAR_3->MdlAddress ) FUNC_5( VAR_3, FUNC_2( VAR_3 ) );

    VAR_3->IoStatus.Information = ((PCHAR)&VAR_6[1]) - ((PCHAR)VAR_5);
    VAR_3->IoStatus.Status = VAR_2;
    (void)FUNC_3(VAR_3, ((void*)0));
    FUNC_1( VAR_3, VAR_0 );
    return VAR_2;
}

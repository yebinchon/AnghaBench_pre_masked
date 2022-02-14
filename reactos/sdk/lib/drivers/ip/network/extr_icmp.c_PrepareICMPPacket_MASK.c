
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef scalar_t__ ULONG ;
typedef int UINT ;
struct TYPE_26__ {int TTL; } ;
struct TYPE_21__ {int IPv4Address; } ;
struct TYPE_25__ {TYPE_3__ Address; } ;
struct TYPE_19__ {int IPv4Address; } ;
struct TYPE_20__ {TYPE_1__ Address; } ;
struct TYPE_24__ {TYPE_2__ Unicast; } ;
struct TYPE_23__ {scalar_t__ TotalSize; int HeaderSize; scalar_t__ Header; TYPE_7__* Data; TYPE_7__ DstAddr; int NdisPacket; int MappedHeader; scalar_t__ Flags; } ;
struct TYPE_22__ {int VerIHL; int Ttl; int DstAddr; int SrcAddr; scalar_t__ Checksum; int Protocol; scalar_t__ FlagsFragOfs; scalar_t__ Id; int TotalLength; scalar_t__ Tos; } ;
typedef int PNDIS_PACKET ;
typedef TYPE_4__* PIPv4_HEADER ;
typedef TYPE_5__* PIP_PACKET ;
typedef TYPE_6__* PIP_INTERFACE ;
typedef TYPE_7__* PIP_ADDRESS ;
typedef TYPE_7__* PCHAR ;
typedef TYPE_9__* PADDRESS_FILE ;
typedef int NDIS_STATUS ;
typedef int IPv4_HEADER ;
typedef int IP_ADDRESS ;
typedef int BOOLEAN ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,TYPE_7__**,scalar_t__*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_7__*,TYPE_7__*,int) ;
 int FUNC_7 (int ,char*) ;
 int VAR_5 ;
 int FUNC_8 (scalar_t__) ;

BOOLEAN FUNC_9(
    PADDRESS_FILE VAR_6,
    PIP_INTERFACE VAR_7,
    PIP_PACKET VAR_8,
    PIP_ADDRESS VAR_9,
    PCHAR VAR_10,
    UINT VAR_11)
{
    PNDIS_PACKET VAR_12;
    NDIS_STATUS VAR_13;
    PIPv4_HEADER VAR_14;
    ULONG VAR_15;

    FUNC_7(VAR_0, ("Called. DataSize (%d).\n", VAR_11));

    FUNC_3(VAR_8, VAR_3);


    VAR_8->Flags = 0;

    VAR_15 = sizeof(IPv4_HEADER) + VAR_11;


    VAR_13 = FUNC_1( &VAR_12, ((void*)0), VAR_15 );

    if( !FUNC_4(VAR_13) ) return VAR_1;

    VAR_8->NdisPacket = VAR_12;
    VAR_8->MappedHeader = VAR_5;

    FUNC_2( VAR_8->NdisPacket, 0,
  (PCHAR *)&VAR_8->Header, &VAR_8->TotalSize );
    FUNC_0(VAR_8->TotalSize == VAR_15);

    FUNC_7(VAR_0, ("Size (%d). Data at (0x%X).\n", VAR_15, VAR_10));
    FUNC_7(VAR_0, ("NdisPacket at (0x%X).\n", VAR_12));

    VAR_8->HeaderSize = sizeof(IPv4_HEADER);
    VAR_8->Data = ((PCHAR)VAR_8->Header) + VAR_8->HeaderSize;

    FUNC_7(VAR_0, ("Copying Address: %x -> %x\n",
        &VAR_8->DstAddr, VAR_9));

    FUNC_6(&VAR_8->DstAddr, VAR_9, sizeof(IP_ADDRESS));
    FUNC_6(VAR_8->Data, VAR_10, VAR_11);



    VAR_14 = (PIPv4_HEADER)VAR_8->Header;


    VAR_14->VerIHL = 0x45;

    VAR_14->Tos = 0;

    VAR_14->TotalLength = FUNC_8((USHORT)VAR_11 + sizeof(IPv4_HEADER));

    VAR_14->Id = (USHORT)FUNC_5();

    VAR_14->FlagsFragOfs = 0;

    if (VAR_6)
        VAR_14->Ttl = VAR_6->TTL;
    else
        VAR_14->Ttl = 128;

    VAR_14->Protocol = VAR_2;

    VAR_14->Checksum = 0;

    VAR_14->SrcAddr = VAR_7->Unicast.Address.IPv4Address;

    VAR_14->DstAddr = VAR_9->Address.IPv4Address;


    FUNC_7(VAR_4,("Leaving\n"));

    return VAR_5;
}

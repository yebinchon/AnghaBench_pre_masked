
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* USHORT ;
typedef void* UINT ;
typedef int UDP_HEADER ;
struct TYPE_6__ {scalar_t__ Data; scalar_t__ Header; int NdisPacket; } ;
struct TYPE_5__ {void* Checksum; void* Length; void* DestPort; void* SourcePort; } ;
typedef int PVOID ;
typedef TYPE_1__* PUDP_HEADER ;
typedef int PUCHAR ;
typedef int PIPv4_HEADER ;
typedef TYPE_2__* PIP_PACKET ;
typedef int PIP_ADDRESS ;
typedef scalar_t__ PCHAR ;
typedef int PADDRESS_FILE ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int ,void*,int ,void*,TYPE_2__*,void*,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,void*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (int ,int ,void*) ;
 void* FUNC_5 (void*) ;

NTSTATUS FUNC_6(
    PADDRESS_FILE VAR_3,
    PIP_ADDRESS VAR_4,
    USHORT VAR_5,
    PIP_ADDRESS VAR_6,
    USHORT VAR_7,
    PIP_PACKET VAR_8,
    PVOID VAR_9,
    UINT VAR_10)
{
    PUDP_HEADER VAR_11;
    NTSTATUS VAR_12;

    FUNC_3(VAR_1, ("Packet: %x NdisPacket %x\n",
       VAR_8, VAR_8->NdisPacket));

    VAR_12 = FUNC_0
        ( VAR_3, VAR_4, VAR_5,
          VAR_6, VAR_7,
          VAR_8, VAR_10, VAR_0,
          sizeof(UDP_HEADER), (PVOID *)&VAR_11 );

    if (!FUNC_1(VAR_12))
        return VAR_12;


    VAR_11->SourcePort = VAR_7;
    VAR_11->DestPort = VAR_5;
    VAR_11->Checksum = 0;

    VAR_11->Length = FUNC_5(VAR_10 + sizeof(UDP_HEADER));

    FUNC_3(VAR_1, ("Copying data (hdr %x data %x (%d))\n",
       VAR_8->Header, VAR_8->Data,
       (PCHAR)VAR_8->Data - (PCHAR)VAR_8->Header));

    FUNC_2(VAR_8->Data, VAR_9, VAR_10);

    VAR_11->Checksum = FUNC_4((PIPv4_HEADER)VAR_8->Header,
                                                 (PUCHAR)VAR_11,
                                                 VAR_10 + sizeof(UDP_HEADER));
    VAR_11->Checksum = FUNC_5(VAR_11->Checksum);

    FUNC_3(VAR_1, ("Packet: %d ip %d udp %d payload\n",
       (PCHAR)VAR_11 - (PCHAR)VAR_8->Header,
       (PCHAR)VAR_8->Data - (PCHAR)VAR_11,
       VAR_10));

    return VAR_2;
}

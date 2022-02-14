
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int NextPacket; int PacketLength; int Status; } ;
struct TYPE_8__ {int PacketOffset; int NextPacket; int CurrentPage; TYPE_1__ PacketHeader; int MiniportAdapterHandle; } ;
typedef int PUCHAR ;
typedef TYPE_2__* PNIC_ADAPTER ;
typedef int PACKET_HEADER ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static VOID FUNC_4(
    PNIC_ADAPTER VAR_3)





{
    BOOLEAN VAR_4 = VAR_0;

    FUNC_0(VAR_1, ("Called.\n"));


    VAR_3->PacketOffset = VAR_3->NextPacket << 8;
    FUNC_2(VAR_3,
                (PUCHAR)&VAR_3->PacketHeader,
                VAR_3->PacketOffset,
                sizeof(PACKET_HEADER));

    FUNC_0(VAR_1, ("HEADER: (Status)       (0x%X)\n", VAR_3->PacketHeader.Status));
    FUNC_0(VAR_1, ("HEADER: (NextPacket)   (0x%X)\n", VAR_3->PacketHeader.NextPacket));
    FUNC_0(VAR_1, ("HEADER: (PacketLength) (0x%X)\n", VAR_3->PacketHeader.PacketLength));

    if (VAR_3->PacketHeader.PacketLength < 64 ||
        VAR_3->PacketHeader.PacketLength > 1518) {
        FUNC_0(VAR_1, ("Bogus packet size (%d).\n",
            VAR_3->PacketHeader.PacketLength));
        VAR_4 = VAR_2;
    }

    if (VAR_4) {

        VAR_3->NextPacket = VAR_3->CurrentPage;
    } else {
 FUNC_0(VAR_1,("Adapter->MiniportAdapterHandle: %x\n",
     VAR_3->MiniportAdapterHandle));
        FUNC_1(VAR_3);


        VAR_3->NextPacket = VAR_3->PacketHeader.NextPacket;
    }


    FUNC_3(VAR_3);
}

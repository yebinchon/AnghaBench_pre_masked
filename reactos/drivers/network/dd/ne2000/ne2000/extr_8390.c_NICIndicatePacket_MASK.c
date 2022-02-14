
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_5__ {scalar_t__ PacketLength; } ;
struct TYPE_6__ {scalar_t__ LookaheadSize; int * Lookahead; int MiniportAdapterHandle; TYPE_1__ PacketHeader; scalar_t__ PacketOffset; } ;
typedef int * PVOID ;
typedef int PUCHAR ;
typedef TYPE_2__* PNIC_ADAPTER ;
typedef int PACKET_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__,int) ;
 int FUNC_2 (int ,int *,int *,int,int *,int,int) ;
 int VAR_3 ;

__attribute__((used)) static VOID FUNC_3(
    PNIC_ADAPTER VAR_4)





{
    UINT VAR_5;

    VAR_5 = (VAR_4->PacketHeader.PacketLength <
        (VAR_4->LookaheadSize + VAR_0))?
        (VAR_4->PacketHeader.PacketLength) :
        (VAR_4->LookaheadSize + VAR_0);


    FUNC_1(VAR_4,
                (PUCHAR)&VAR_4->Lookahead,
                VAR_4->PacketOffset + sizeof(PACKET_HEADER),
                VAR_5 + VAR_0);

    FUNC_0(VAR_2, ("Indicating (%d) bytes.\n", VAR_5));
    FUNC_0(VAR_2, ("ne2000!NICIndicatePacket: Indicating (%d) bytes.\n", VAR_5));
    if (VAR_5 >= VAR_0) {
 FUNC_0(VAR_1,("Adapter->MiniportAdapterHandle: %x\n",
     VAR_4->MiniportAdapterHandle));
        FUNC_2(VAR_4->MiniportAdapterHandle,
                                ((void*)0),
                                (PVOID)&VAR_4->Lookahead,
                                VAR_0,
                                (PVOID)&VAR_4->Lookahead[VAR_0],
                                VAR_5 - VAR_0,
                                VAR_4->PacketHeader.PacketLength - VAR_0);
    } else {
        FUNC_2(VAR_4->MiniportAdapterHandle,
                                ((void*)0),
                                (PVOID)&VAR_4->Lookahead,
                                VAR_5,
                                ((void*)0),
                                0,
                                0);
    }
}

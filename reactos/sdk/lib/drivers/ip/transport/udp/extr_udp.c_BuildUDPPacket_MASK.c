
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int UDP_HEADER ;
struct TYPE_15__ {int Type; } ;
struct TYPE_14__ {int (* Free ) (TYPE_1__*) ;int NdisPacket; scalar_t__ TotalSize; } ;
typedef TYPE_1__* PIP_PACKET ;
typedef TYPE_2__* PIP_ADDRESS ;
typedef int PCHAR ;
typedef int PADDRESS_FILE ;
typedef int NTSTATUS ;
typedef int IPv4_HEADER ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*,int ,TYPE_2__*,int ,TYPE_1__*,int ,scalar_t__) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

NTSTATUS FUNC_9(
    PADDRESS_FILE VAR_5,
    PIP_PACKET VAR_6,
    PIP_ADDRESS VAR_7,
    USHORT VAR_8,
    PIP_ADDRESS VAR_9,
    USHORT VAR_10,
    PCHAR VAR_11,
    UINT VAR_12 )
{
    NTSTATUS VAR_13;

    FUNC_6(VAR_0, ("Called.\n"));


    FUNC_4(VAR_6, 129);

    VAR_6->TotalSize = sizeof(IPv4_HEADER) + sizeof(UDP_HEADER) + VAR_12;


    VAR_13 = FUNC_2(&VAR_6->NdisPacket,
                                      ((void*)0),
                                      VAR_6->TotalSize );

    if( !FUNC_5(VAR_13) )
    {
        VAR_6->Free(VAR_6);
        return VAR_13;
    }

    FUNC_6(VAR_1, ("Allocated packet: %x\n", VAR_6->NdisPacket));
    FUNC_6(VAR_1, ("Local Addr : %s\n", FUNC_0(VAR_9)));
    FUNC_6(VAR_1, ("Remote Addr: %s\n", FUNC_0(VAR_7)));

    switch (VAR_7->Type) {
        case 129:
            VAR_13 = FUNC_1(VAR_5, VAR_7, VAR_8,
                                      VAR_9, VAR_10, VAR_6, VAR_11, VAR_12);
            break;
        case 128:

            FUNC_6(VAR_2, ("IPv6 UDP datagrams are not supported.\n"));
        default:
            VAR_13 = VAR_4;
            break;
    }
    if (!FUNC_5(VAR_13)) {
        FUNC_6(VAR_2, ("Cannot add UDP header. Status = (0x%X)\n",
                                VAR_13));
        VAR_6->Free(VAR_6);
        return VAR_13;
    }

    FUNC_6(VAR_1, ("Displaying packet\n"));

    FUNC_3(VAR_6);

    FUNC_6(VAR_1, ("Leaving\n"));

    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
struct TYPE_18__ {int Protocol; } ;
struct TYPE_17__ {int Type; } ;
struct TYPE_16__ {int Flags; scalar_t__ Data; scalar_t__ Header; int (* Free ) (TYPE_1__*) ;int NdisPacket; scalar_t__ TotalSize; } ;
typedef int PVOID ;
typedef TYPE_1__* PIP_PACKET ;
typedef TYPE_2__* PIP_ADDRESS ;
typedef scalar_t__ PCHAR ;
typedef TYPE_3__* PADDRESS_FILE ;
typedef int NTSTATUS ;
typedef int IPv4_HEADER ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int ,TYPE_2__*,int ,TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (TYPE_1__*) ;

NTSTATUS FUNC_9(
    PADDRESS_FILE VAR_6,
    PIP_PACKET VAR_7,
    PIP_ADDRESS VAR_8,
    USHORT VAR_9,
    PIP_ADDRESS VAR_10,
    USHORT VAR_11,
    PCHAR VAR_12,
    UINT VAR_13 )
{
    NTSTATUS VAR_14;
    PCHAR VAR_15;

    FUNC_7(VAR_1, ("Called.\n"));


    FUNC_4(VAR_7, 129);

    VAR_7->TotalSize = sizeof(IPv4_HEADER) + VAR_13;


    VAR_14 = FUNC_2( &VAR_7->NdisPacket,
           ((void*)0),
           VAR_7->TotalSize );

    if( !FUNC_5(VAR_14) ) return VAR_14;

    FUNC_7(VAR_2, ("Allocated packet: %x\n", VAR_7->NdisPacket));
    FUNC_7(VAR_2, ("Local Addr : %s\n", FUNC_0(VAR_10)));
    FUNC_7(VAR_2, ("Remote Addr: %s\n", FUNC_0(VAR_8)));

    switch (VAR_8->Type) {
    case 129:
 VAR_14 = FUNC_1
            (VAR_6, VAR_8, VAR_9,
             VAR_10, VAR_11, VAR_7, VAR_13,
             VAR_6->Protocol,
             0, (PVOID *)&VAR_15 );
 break;
    case 128:

        VAR_14 = VAR_5;
 FUNC_7(VAR_3, ("IPv6 RawIp datagrams are not supported.\n"));
        break;

    default:
 VAR_14 = VAR_5;
        FUNC_7(VAR_3, ("Bad Address Type %d\n", VAR_8->Type));
 break;
    }

    if( !FUNC_5(VAR_14) ) {
        FUNC_7(VAR_3, ("Cannot add header. Status = (0x%X)\n",
                                VAR_14));
        VAR_7->Free(VAR_7);
        return VAR_14;
    }

    FUNC_7(VAR_2, ("Copying data (hdr %x data %x (%d))\n",
       VAR_7->Header, VAR_7->Data,
       (PCHAR)VAR_7->Data - (PCHAR)VAR_7->Header));

    FUNC_6( VAR_7->Data, VAR_12, VAR_13 );

    VAR_7->Flags |= VAR_0;

    FUNC_7(VAR_2, ("Displaying packet\n"));

    FUNC_3(VAR_7);

    FUNC_7(VAR_2, ("Leaving\n"));

    return VAR_4;
}

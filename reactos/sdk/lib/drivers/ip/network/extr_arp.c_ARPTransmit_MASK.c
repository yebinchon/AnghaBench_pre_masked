
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int USHORT ;
typedef int UCHAR ;
struct TYPE_13__ {int IPv4Address; } ;
struct TYPE_16__ {int Type; TYPE_1__ Address; } ;
struct TYPE_15__ {int Context; int (* Transmit ) (int ,TYPE_2__*,int ,int *,int ) ;TYPE_4__ Unicast; int Address; scalar_t__ AddressLength; } ;
struct TYPE_14__ {int DLComplete; } ;
typedef int PVOID ;
typedef TYPE_2__* PNDIS_PACKET ;
typedef TYPE_3__* PIP_INTERFACE ;
typedef TYPE_4__* PIP_ADDRESS ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int ,int ,int,int,int ,int *,int ,int *,int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,TYPE_2__*,int ,int *,int ) ;

BOOLEAN FUNC_7(PIP_ADDRESS VAR_8, PVOID VAR_9,
                    PIP_INTERFACE VAR_10)







{
    PNDIS_PACKET VAR_11;
    UCHAR VAR_12;
    USHORT VAR_13;

    FUNC_4(VAR_2, ("Called.\n"));



    if (!VAR_8)
        VAR_8 = &VAR_10->Unicast;

    switch (VAR_8->Type) {
        case 129:
            VAR_13 = (USHORT)VAR_3;
            VAR_12 = 4;
            break;
        case 128:
            VAR_13 = (USHORT)VAR_4;
            VAR_12 = 16;
            break;
        default:
     FUNC_4(VAR_2,("Bad Address Type %x\n", VAR_8->Type));
     FUNC_1();

            return VAR_5;
    }

    VAR_11 = FUNC_3(
        VAR_10,
        FUNC_5(0x0001),
        VAR_13,
        (UCHAR)VAR_10->AddressLength,
        (UCHAR)VAR_12,
        VAR_10->Address,
        &VAR_10->Unicast.Address.IPv4Address,
        VAR_9,
        &VAR_8->Address.IPv4Address,
        VAR_1);

    if( !VAR_11 ) return VAR_5;

    FUNC_0(VAR_11);
    FUNC_0(FUNC_2(VAR_11));
    FUNC_2(VAR_11)->DLComplete = VAR_0;

    FUNC_4(VAR_2,("Sending ARP Packet\n"));

    (*VAR_10->Transmit)(VAR_10->Context, VAR_11,
        0, ((void*)0), VAR_6);

    return VAR_7;
}

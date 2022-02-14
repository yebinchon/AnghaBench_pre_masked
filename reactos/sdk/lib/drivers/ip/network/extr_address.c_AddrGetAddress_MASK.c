
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int Type; } ;
struct TYPE_10__ {int AddressType; int Address; int AddressLength; } ;
struct TYPE_9__ {int in_addr; int sin_port; } ;
struct TYPE_8__ {scalar_t__ TAAddressCount; TYPE_3__* Address; } ;
typedef int * PUSHORT ;
typedef TYPE_1__* PTRANSPORT_ADDRESS ;
typedef TYPE_2__* PTDI_ADDRESS_IP ;
typedef TYPE_3__* PTA_ADDRESS ;
typedef TYPE_4__* PIP_ADDRESS ;
typedef int NTSTATUS ;
typedef scalar_t__ INT ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


NTSTATUS FUNC_1(
    PTRANSPORT_ADDRESS VAR_3,
    PIP_ADDRESS VAR_4,
    PUSHORT VAR_5)
{
    PTA_ADDRESS VAR_6;
    INT VAR_7;


    VAR_6 = VAR_3->Address;

    for (VAR_7 = 0; VAR_7 < VAR_3->TAAddressCount; VAR_7++) {
        switch (VAR_6->AddressType) {
        case 128:
            if (VAR_6->AddressLength >= VAR_2) {

                PTDI_ADDRESS_IP VAR_8 = (PTDI_ADDRESS_IP)VAR_6->Address;
                *VAR_5 = VAR_8->sin_port;
  VAR_4->Type = VAR_6->AddressType;
  VAR_8 = (PTDI_ADDRESS_IP)VAR_6->Address;
  FUNC_0(VAR_4, VAR_8->in_addr);
  return VAR_1;
     }
 }
    }

    return VAR_0;
}

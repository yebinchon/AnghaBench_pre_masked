
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int IPv4Address; } ;
struct TYPE_6__ {int Type; TYPE_2__ Address; } ;
typedef TYPE_1__* PIP_ADDRESS ;
typedef int IPv6_RAW_ADDRESS ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;


 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;

BOOLEAN FUNC_2(
    PIP_ADDRESS VAR_1,
    PIP_ADDRESS VAR_2)
{
    if (VAR_1->Type != VAR_2->Type) {
        FUNC_0("AddrIsEqual: Unequal Address Types\n");
        return VAR_0;
    }

    switch (VAR_1->Type) {
        case 129:
            return (VAR_1->Address.IPv4Address == VAR_2->Address.IPv4Address);

        case 128:
            return (FUNC_1(&VAR_1->Address, &VAR_2->Address,
                sizeof(IPv6_RAW_ADDRESS)) == sizeof(IPv6_RAW_ADDRESS));
            break;

        default:
            FUNC_0("AddrIsEqual: Bad address type\n");
            break;
    }

    return VAR_0;
}

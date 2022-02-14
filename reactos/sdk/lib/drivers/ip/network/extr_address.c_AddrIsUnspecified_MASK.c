
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IPv4Address; } ;
struct TYPE_5__ {int Type; TYPE_1__ Address; } ;
typedef TYPE_2__* PIP_ADDRESS ;
typedef int BOOLEAN ;


 int VAR_0 ;



BOOLEAN FUNC_0(
    PIP_ADDRESS VAR_1)







{
    switch (VAR_1->Type) {
        case 129:
            return (VAR_1->Address.IPv4Address == 0 ||
                    VAR_1->Address.IPv4Address == 0xFFFFFFFF);

        case 128:

        default:
            return VAR_0;
    }
}

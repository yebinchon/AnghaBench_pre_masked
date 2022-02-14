
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int IPv4Address; } ;
struct TYPE_6__ {int Type; TYPE_1__ Address; } ;
typedef TYPE_2__* PIP_ADDRESS ;
typedef int INT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;



INT FUNC_1(
    PIP_ADDRESS VAR_1,
    PIP_ADDRESS VAR_2)
{
    switch (VAR_1->Type) {
        case 129: {
            ULONG VAR_3, VAR_4;
            if (VAR_2->Type == 129) {
                VAR_3 = FUNC_0(VAR_1->Address.IPv4Address);
                VAR_4 = FUNC_0(VAR_2->Address.IPv4Address);
                if (VAR_3 < VAR_4)
                    return -1;
                else
                    if (VAR_3 == VAR_4)
                        return 0;
                    else
                        return 1;
            } else

                return -1;

        case 128:

        break;
        }
    }

    return VAR_0;
}

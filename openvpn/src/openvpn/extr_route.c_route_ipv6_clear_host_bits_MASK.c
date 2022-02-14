
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* s6_addr; } ;
struct route_ipv6 {int netbits; TYPE_1__ network; } ;



void
FUNC_0( struct route_ipv6 *VAR_0 )
{




    int VAR_1 = 15;
    int VAR_2 = 128 - VAR_0->netbits;

    while (VAR_1 >= 0 && VAR_2 > 0)
    {
        if (VAR_2 >= 8)
        {
            VAR_0->network.s6_addr[VAR_1--] = 0; VAR_2 -= 8;
        }
        else
        {
            VAR_0->network.s6_addr[VAR_1--] &= (0xff << VAR_2); VAR_2 = 0;
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ addr; scalar_t__ netmask; } ;
struct route_gateway_info {int const flags; size_t n_addrs; struct route_gateway_address* addrs; TYPE_1__ gateway; } ;
struct route_gateway_address {scalar_t__ addr; scalar_t__ netmask; } ;
typedef scalar_t__ in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(in_addr_t VAR_5,
            in_addr_t VAR_6,
            in_addr_t VAR_7,
            const struct route_gateway_info *VAR_8)
{

    const int VAR_9 = (VAR_2|VAR_4|VAR_3);
    if (VAR_8
        && (VAR_8->flags & VAR_9) == VAR_9
        && VAR_7 == VAR_8->gateway.addr
        && VAR_6 == 0xFFFFFFFF)
    {
        if (((VAR_5 ^ VAR_8->gateway.addr) & VAR_8->gateway.netmask) == 0)
        {
            return VAR_0;
        }
        else
        {

            size_t VAR_10;
            for (VAR_10 = 0; VAR_10 < VAR_8->n_addrs; ++VAR_10)
            {
                const struct route_gateway_address *VAR_11 = &VAR_8->addrs[VAR_10];
                if (((VAR_5 ^ VAR_11->addr) & VAR_11->netmask) == 0)
                {
                    return VAR_0;
                }
            }
        }
    }
    return VAR_1;
}

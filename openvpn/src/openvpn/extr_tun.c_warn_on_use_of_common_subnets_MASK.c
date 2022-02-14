
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int netmask; } ;
struct route_gateway_info {int const flags; TYPE_1__ gateway; } ;
struct gc_arena {int dummy; } ;
typedef int openvpn_net_ctx_t ;
typedef int in_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gc_arena*) ;
 struct gc_arena FUNC_1 () ;
 int FUNC_2 (struct route_gateway_info*,int *) ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(openvpn_net_ctx_t *VAR_3)
{
    struct gc_arena VAR_4 = FUNC_1();
    struct route_gateway_info VAR_5;
    const int VAR_6 = (VAR_1|VAR_2);

    FUNC_2(&VAR_5, VAR_3);
    if ((VAR_5.flags & VAR_6) == VAR_6)
    {
        const in_addr_t VAR_7 = VAR_5.gateway.addr & VAR_5.gateway.netmask;
        if (VAR_7 == 0xC0A80000 || VAR_7 == 0xC0A80100)
        {
            FUNC_3(VAR_0, "NOTE: your local LAN uses the extremely common subnet address 192.168.0.x or 192.168.1.x.  Be aware that this might create routing conflicts if you connect to the VPN server from public locations such as internet cafes that use the same subnet.");
        }
    }
    FUNC_0(&VAR_4);
}

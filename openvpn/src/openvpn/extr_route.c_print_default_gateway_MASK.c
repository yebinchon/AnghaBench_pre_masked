
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int netbits_ipv6; int addr_ipv6; } ;
struct route_ipv6_gateway_info {int flags; int hwaddr; int iface; int adapter_index; TYPE_2__ gateway; } ;
struct TYPE_3__ {int netmask; int addr; } ;
struct route_gateway_info {int flags; int hwaddr; int iface; int adapter_index; TYPE_1__ gateway; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct buffer FUNC_1 (int,struct gc_arena*) ;
 int FUNC_2 (struct buffer*,char*,...) ;
 int FUNC_3 (int ,int,int ,int,char*,struct gc_arena*) ;
 int FUNC_4 (struct gc_arena*) ;
 struct gc_arena FUNC_5 () ;
 int FUNC_6 (int const,char*,int ) ;
 int FUNC_7 (int ,int ,struct gc_arena*) ;
 int FUNC_8 (int ,int ,struct gc_arena*) ;

void
FUNC_9(const int VAR_5,
                      const struct route_gateway_info *VAR_6,
                      const struct route_ipv6_gateway_info *VAR_7)
{
    struct gc_arena VAR_8 = FUNC_5();
    if (VAR_6 && (VAR_6->flags & VAR_0))
    {
        struct buffer VAR_9 = FUNC_1(256, &VAR_8);
        FUNC_2(&VAR_9, "ROUTE_GATEWAY");
        if (VAR_6->flags & VAR_4)
        {
            FUNC_2(&VAR_9, " ON_LINK");
        }
        else
        {
            FUNC_2(&VAR_9, " %s", FUNC_8(VAR_6->gateway.addr, 0, &VAR_8));
        }
        if (VAR_6->flags & VAR_3)
        {
            FUNC_2(&VAR_9, "/%s", FUNC_8(VAR_6->gateway.netmask, 0, &VAR_8));
        }






        if (VAR_6->flags & VAR_2)
        {
            FUNC_2(&VAR_9, " IFACE=%s", VAR_6->iface);
        }

        if (VAR_6->flags & VAR_1)
        {
            FUNC_2(&VAR_9, " HWADDR=%s", FUNC_3(VAR_6->hwaddr, 6, 0, 1, ":", &VAR_8));
        }
        FUNC_6(VAR_5, "%s", FUNC_0(&VAR_9));
    }

    if (VAR_7 && (VAR_7->flags & VAR_0))
    {
        struct buffer VAR_10 = FUNC_1(256, &VAR_8);
        FUNC_2(&VAR_10, "ROUTE6_GATEWAY");
        FUNC_2(&VAR_10, " %s", FUNC_7(VAR_7->gateway.addr_ipv6, 0, &VAR_8));
        if (VAR_7->flags & VAR_4)
        {
            FUNC_2(&VAR_10, " ON_LINK");
        }
        if (VAR_7->flags & VAR_3)
        {
            FUNC_2(&VAR_10, "/%d", VAR_7->gateway.netbits_ipv6);
        }






        if (VAR_7->flags & VAR_2)
        {
            FUNC_2(&VAR_10, " IFACE=%s", VAR_7->iface);
        }

        if (VAR_7->flags & VAR_1)
        {
            FUNC_2(&VAR_10, " HWADDR=%s", FUNC_3(VAR_7->hwaddr, 6, 0, 1, ":", &VAR_8));
        }
        FUNC_6(VAR_5, "%s", FUNC_0(&VAR_10));
    }
    FUNC_4(&VAR_8);
}

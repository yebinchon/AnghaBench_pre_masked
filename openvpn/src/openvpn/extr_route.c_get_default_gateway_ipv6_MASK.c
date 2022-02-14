
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_ipv6_gateway_info {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int openvpn_net_ctx_t ;


 int FUNC_0 (struct route_ipv6_gateway_info) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(struct route_ipv6_gateway_info *VAR_1,
                         const struct in6_addr *VAR_2, openvpn_net_ctx_t *VAR_3)
{
    FUNC_1(VAR_0, "no support for get_default_gateway_ipv6() on this system");
    FUNC_0(*VAR_1);
}

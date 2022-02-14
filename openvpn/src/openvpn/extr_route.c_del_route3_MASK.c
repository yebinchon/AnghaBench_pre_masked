
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {int dummy; } ;
struct route_ipv4 {int flags; void* gateway; void* netmask; void* network; } ;
struct route_gateway_info {int dummy; } ;
struct env_set {int dummy; } ;
typedef int openvpn_net_ctx_t ;
typedef void* in_addr_t ;


 int FUNC_0 (struct route_ipv4) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct route_ipv4*,struct tuntap const*,unsigned int,struct route_gateway_info const*,struct env_set const*,int *) ;

__attribute__((used)) static void
FUNC_2(in_addr_t VAR_2,
           in_addr_t VAR_3,
           in_addr_t VAR_4,
           const struct tuntap *VAR_5,
           unsigned int VAR_6,
           const struct route_gateway_info *VAR_7,
           const struct env_set *VAR_8,
           openvpn_net_ctx_t *VAR_9)
{
    struct route_ipv4 VAR_10;
    FUNC_0(VAR_10);
    VAR_10.flags = VAR_1|VAR_0;
    VAR_10.network = VAR_2;
    VAR_10.netmask = VAR_3;
    VAR_10.gateway = VAR_4;
    FUNC_1(&VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}

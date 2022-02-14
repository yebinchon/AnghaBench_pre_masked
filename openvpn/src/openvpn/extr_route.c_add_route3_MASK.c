
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {int dummy; } ;
struct route_ipv4 {void* gateway; void* netmask; void* network; int flags; } ;
struct route_gateway_info {int dummy; } ;
struct env_set {int dummy; } ;
typedef int openvpn_net_ctx_t ;
typedef void* in_addr_t ;


 int FUNC_0 (struct route_ipv4) ;
 int VAR_0 ;
 int FUNC_1 (struct route_ipv4*,struct tuntap const*,unsigned int,struct route_gateway_info const*,struct env_set const*,int *) ;

__attribute__((used)) static void
FUNC_2(in_addr_t VAR_1,
           in_addr_t VAR_2,
           in_addr_t VAR_3,
           const struct tuntap *VAR_4,
           unsigned int VAR_5,
           const struct route_gateway_info *VAR_6,
           const struct env_set *VAR_7,
           openvpn_net_ctx_t *VAR_8)
{
    struct route_ipv4 VAR_9;
    FUNC_0(VAR_9);
    VAR_9.flags = VAR_0;
    VAR_9.network = VAR_1;
    VAR_9.netmask = VAR_2;
    VAR_9.gateway = VAR_3;
    FUNC_1(&VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}

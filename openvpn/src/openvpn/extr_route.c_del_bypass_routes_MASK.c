
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {int dummy; } ;
struct route_gateway_info {int dummy; } ;
struct route_bypass {int n_bypass; scalar_t__* bypass; } ;
struct env_set {int dummy; } ;
typedef int openvpn_net_ctx_t ;
typedef int in_addr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,struct tuntap const*,unsigned int,struct route_gateway_info const*,struct env_set const*,int *) ;

__attribute__((used)) static void
FUNC_1(struct route_bypass *VAR_2,
                  in_addr_t VAR_3,
                  const struct tuntap *VAR_4,
                  unsigned int VAR_5,
                  const struct route_gateway_info *VAR_6,
                  const struct env_set *VAR_7,
                  openvpn_net_ctx_t *VAR_8)
{
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_2->n_bypass; ++VAR_9)
    {
        if (VAR_2->bypass[VAR_9])
        {
            FUNC_0(VAR_2->bypass[VAR_9],
                       VAR_0,
                       VAR_3,
                       VAR_4,
                       VAR_5 | VAR_1,
                       VAR_6,
                       VAR_7,
                       VAR_8);
        }
    }
}

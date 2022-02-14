
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_list {int dummy; } ;
struct options {scalar_t__ topology; char* ifconfig_remote_netmask; char* route_default_gateway; int route_default_metric; int routes; int dev_type; int dev; } ;
struct link_socket_info {int dummy; } ;
struct env_set {int dummy; } ;
typedef int openvpn_net_ctx_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct route_list*,int ,char const*,int,int ,struct env_set*,int *) ;
 int FUNC_2 (struct link_socket_info const*) ;
 int FUNC_3 (struct env_set*,struct route_list*) ;

__attribute__((used)) static void
FUNC_4(const struct options *VAR_3,
                   struct route_list *VAR_4,
                   const struct link_socket_info *VAR_5,
                   struct env_set *VAR_6,
                   openvpn_net_ctx_t *VAR_7)
{
    const char *VAR_8 = ((void*)0);
    int VAR_9 = FUNC_0(VAR_3->dev, VAR_3->dev_type);
    int VAR_10 = 0;

    if (VAR_9 == VAR_0 && (VAR_3->topology == VAR_1 || VAR_3->topology == VAR_2))
    {
        VAR_8 = VAR_3->ifconfig_remote_netmask;
    }
    if (VAR_3->route_default_gateway)
    {
        VAR_8 = VAR_3->route_default_gateway;
    }
    if (VAR_3->route_default_metric)
    {
        VAR_10 = VAR_3->route_default_metric;
    }

    if (FUNC_1(VAR_4,
                        VAR_3->routes,
                        VAR_8,
                        VAR_10,
                        FUNC_2(VAR_5),
                        VAR_6,
                        VAR_7))
    {

        FUNC_3(VAR_6, VAR_4);
    }
}

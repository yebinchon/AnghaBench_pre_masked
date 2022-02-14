
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct route_ipv6_list {int dummy; } ;
struct options {char* ifconfig_ipv6_remote; char* route_ipv6_default_gateway; int route_default_metric; TYPE_1__* routes_ipv6; } ;
struct link_socket_info {int dummy; } ;
struct env_set {int dummy; } ;
typedef int openvpn_net_ctx_t ;
struct TYPE_3__ {int flags; int gc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int *) ;
 scalar_t__ FUNC_1 (struct route_ipv6_list*,TYPE_1__*,char const*,int,int ,struct env_set*,int *) ;
 int FUNC_2 (struct link_socket_info const*) ;
 int FUNC_3 (struct env_set*,struct route_ipv6_list*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(const struct options *VAR_1,
                        struct route_ipv6_list *VAR_2,
                        const struct link_socket_info *VAR_3,
                        struct env_set *VAR_4,
                        openvpn_net_ctx_t *VAR_5)
{
    const char *VAR_6 = ((void*)0);
    int VAR_7 = -1;

    VAR_6 = VAR_1->ifconfig_ipv6_remote;
    if (VAR_1->route_ipv6_default_gateway)
    {
        VAR_6 = VAR_1->route_ipv6_default_gateway;
    }

    if (VAR_1->route_default_metric)
    {
        VAR_7 = VAR_1->route_default_metric;
    }



    if (VAR_1->routes_ipv6->flags & VAR_0)
    {
        char *VAR_8[] = { "::/3", "2000::/4", "3000::/4", "fc00::/7", ((void*)0) };
        int VAR_9;

        for (VAR_9 = 0; VAR_8[VAR_9]; VAR_9++)
        {
            FUNC_0( VAR_1->routes_ipv6,
                                           FUNC_4(VAR_8[VAR_9], VAR_1->routes_ipv6->gc),
                                           ((void*)0), ((void*)0) );
        }
    }

    if (FUNC_1(VAR_2,
                             VAR_1->routes_ipv6,
                             VAR_6,
                             VAR_7,
                             FUNC_2(VAR_3),
                             VAR_4,
                             VAR_5))
    {

        FUNC_3(VAR_4, VAR_2);
    }
}

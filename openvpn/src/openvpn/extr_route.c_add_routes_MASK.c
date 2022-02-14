
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {int actual_name; int did_ifconfig_ipv6_setup; } ;
struct route_list {int iflags; int rgi; struct route_ipv4* routes; } ;
struct route_ipv6_list {int iflags; struct route_ipv6* routes_ipv6; } ;
struct route_ipv6 {struct route_ipv6* next; } ;
struct route_ipv4 {int netmask; int network; struct route_ipv4* next; } ;
struct env_set {int dummy; } ;
typedef int openvpn_net_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct route_ipv4*,struct tuntap const*,unsigned int,int *,struct env_set const*,int *) ;
 int FUNC_1 (struct route_ipv6*,struct tuntap const*,unsigned int,struct env_set const*,int *) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (struct route_ipv4*,struct tuntap const*,unsigned int,int *,struct env_set const*,int *) ;
 int FUNC_4 (struct route_ipv6*,struct tuntap const*,unsigned int,struct env_set const*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (scalar_t__,int ,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (struct route_list*,struct tuntap const*,unsigned int,struct env_set const*,int *) ;

void
FUNC_8(struct route_list *VAR_5, struct route_ipv6_list *VAR_6,
           const struct tuntap *VAR_7, unsigned int VAR_8,
           const struct env_set *VAR_9, openvpn_net_ctx_t *VAR_10)
{
    FUNC_7(VAR_5, VAR_7, VAR_8, VAR_9, VAR_10);
    if (VAR_5 && !(VAR_5->iflags & VAR_2) )
    {
        struct route_ipv4 *VAR_11;
        for (VAR_11 = VAR_5->routes; VAR_11; VAR_11 = VAR_11->next)
        {
            FUNC_2(VAR_11->network, VAR_11->netmask, "route");
            if (VAR_8 & VAR_3)
            {
                FUNC_3(VAR_11, VAR_7, VAR_8, &VAR_5->rgi, VAR_9, VAR_10);
            }
            FUNC_0(VAR_11, VAR_7, VAR_8, &VAR_5->rgi, VAR_9, VAR_10);
        }
        VAR_5->iflags |= VAR_2;
    }
    if (VAR_6 && !(VAR_6->iflags & VAR_2) )
    {
        struct route_ipv6 *VAR_12;

        if (!VAR_7->did_ifconfig_ipv6_setup)
        {
            FUNC_6(VAR_0, "WARNING: OpenVPN was configured to add an IPv6 "
                "route over %s. However, no IPv6 has been configured for "
                "this interface, therefore the route installation may "
                "fail or may not work as expected.", VAR_7->actual_name);
        }

        for (VAR_12 = VAR_6->routes_ipv6; VAR_12; VAR_12 = VAR_12->next)
        {
            if (VAR_8 & VAR_3)
            {
                FUNC_4(VAR_12, VAR_7, VAR_8, VAR_9, VAR_10);
            }
            FUNC_1(VAR_12, VAR_7, VAR_8, VAR_9, VAR_10);
        }
        VAR_6->iflags |= VAR_2;
    }
}

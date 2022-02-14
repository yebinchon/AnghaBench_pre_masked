
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap {int dummy; } ;
struct route_list {int iflags; int rgi; struct route_ipv4* routes; } ;
struct route_ipv6_list {int iflags; struct route_ipv6* routes_ipv6; } ;
struct route_ipv6 {struct route_ipv6* next; } ;
struct route_ipv4 {struct route_ipv4* next; } ;
struct env_set {int dummy; } ;
typedef int openvpn_net_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (struct route_ipv6_list*) ;
 int FUNC_1 (struct route_list*) ;
 int FUNC_2 (struct route_ipv4*,struct tuntap const*,unsigned int,int *,struct env_set const*,int *) ;
 int FUNC_3 (struct route_ipv6*,struct tuntap const*,unsigned int,struct env_set const*,int *) ;
 int FUNC_4 (struct route_list*,struct tuntap const*,unsigned int,struct env_set const*,int *) ;

void
FUNC_5(struct route_list *VAR_1, struct route_ipv6_list *VAR_2,
              const struct tuntap *VAR_3, unsigned int VAR_4,
              const struct env_set *VAR_5, openvpn_net_ctx_t *VAR_6)
{
    if (VAR_1 && VAR_1->iflags & VAR_0)
    {
        struct route_ipv4 *VAR_7;
        for (VAR_7 = VAR_1->routes; VAR_7; VAR_7 = VAR_7->next)
        {
            FUNC_2(VAR_7, VAR_3, VAR_4, &VAR_1->rgi, VAR_5, VAR_6);
        }
        VAR_1->iflags &= ~VAR_0;
    }

    FUNC_4(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_1)
    {
        FUNC_1(VAR_1);
    }

    if (VAR_2 && (VAR_2->iflags & VAR_0) )
    {
        struct route_ipv6 *VAR_8;
        for (VAR_8 = VAR_2->routes_ipv6; VAR_8; VAR_8 = VAR_8->next)
        {
            FUNC_3(VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);
        }
        VAR_2->iflags &= ~VAR_0;
    }

    if (VAR_2)
    {
        FUNC_0(VAR_2);
    }
}

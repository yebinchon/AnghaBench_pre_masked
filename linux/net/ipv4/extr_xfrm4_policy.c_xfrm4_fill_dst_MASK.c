
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int rt_flags; scalar_t__ rt_gw_family; int rt_uncached; int rt_mtu_locked; int rt_pmtu; int rt_gw6; int rt_gw4; int rt_uses_gateway; int rt_type; int rt_is_input; int rt_iif; } ;
struct TYPE_6__ {struct net_device* dev; } ;
struct TYPE_7__ {TYPE_4__ rt; TYPE_2__ dst; } ;
struct xfrm_dst {TYPE_3__ u; scalar_t__ route; } ;
struct rtable {int rt_flags; scalar_t__ rt_gw_family; int rt_mtu_locked; int rt_pmtu; int rt_gw6; int rt_gw4; int rt_uses_gateway; int rt_type; int rt_is_input; } ;
struct net_device {int dummy; } ;
struct flowi4 {int flowi4_iif; } ;
struct TYPE_5__ {struct flowi4 ip4; } ;
struct flowi {TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct xfrm_dst *VAR_5, struct net_device *VAR_6,
     const struct flowi *VAR_7)
{
 struct rtable *VAR_8 = (struct rtable *)VAR_5->route;
 const struct flowi4 *VAR_9 = &VAR_7->u.ip4;

 VAR_5->u.rt.rt_iif = VAR_9->flowi4_iif;

 VAR_5->u.dst.dev = VAR_6;
 FUNC_1(VAR_6);



 VAR_5->u.rt.rt_is_input = VAR_8->rt_is_input;
 VAR_5->u.rt.rt_flags = VAR_8->rt_flags & (VAR_2 | VAR_4 |
           VAR_3);
 VAR_5->u.rt.rt_type = VAR_8->rt_type;
 VAR_5->u.rt.rt_uses_gateway = VAR_8->rt_uses_gateway;
 VAR_5->u.rt.rt_gw_family = VAR_8->rt_gw_family;
 if (VAR_8->rt_gw_family == VAR_0)
  VAR_5->u.rt.rt_gw4 = VAR_8->rt_gw4;
 else if (VAR_8->rt_gw_family == VAR_1)
  VAR_5->u.rt.rt_gw6 = VAR_8->rt_gw6;
 VAR_5->u.rt.rt_pmtu = VAR_8->rt_pmtu;
 VAR_5->u.rt.rt_mtu_locked = VAR_8->rt_mtu_locked;
 FUNC_0(&VAR_5->u.rt.rt_uncached);
 FUNC_2(&VAR_5->u.rt);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lwtstate; int lastuse; int error; int output; int input; int flags; } ;
struct rtable {scalar_t__ rt_gw_family; TYPE_1__ dst; int rt_uncached; int rt_gw6; int rt_gw4; int rt_mtu_locked; int rt_pmtu; int rt_iif; int rt_is_input; int rt_type; int rt_flags; int rt_genid; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 struct rtable* FUNC_2 (int *,struct net_device*,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

struct rtable *FUNC_5(struct net_device *VAR_6, struct rtable *VAR_7)
{
 struct rtable *VAR_8;

 VAR_8 = FUNC_2(&VAR_4, VAR_6, 1, VAR_3,
      VAR_7->dst.flags);

 if (VAR_8) {
  VAR_8->rt_genid = FUNC_4(FUNC_1(VAR_6));
  VAR_8->rt_flags = VAR_7->rt_flags;
  VAR_8->rt_type = VAR_7->rt_type;
  VAR_8->rt_is_input = VAR_7->rt_is_input;
  VAR_8->rt_iif = VAR_7->rt_iif;
  VAR_8->rt_pmtu = VAR_7->rt_pmtu;
  VAR_8->rt_mtu_locked = VAR_7->rt_mtu_locked;
  VAR_8->rt_gw_family = VAR_7->rt_gw_family;
  if (VAR_7->rt_gw_family == VAR_0)
   VAR_8->rt_gw4 = VAR_7->rt_gw4;
  else if (VAR_7->rt_gw_family == VAR_1)
   VAR_8->rt_gw6 = VAR_7->rt_gw6;
  FUNC_0(&VAR_8->rt_uncached);

  VAR_8->dst.flags |= VAR_2;
  VAR_8->dst.input = VAR_7->dst.input;
  VAR_8->dst.output = VAR_7->dst.output;
  VAR_8->dst.error = VAR_7->dst.error;
  VAR_8->dst.lastuse = VAR_5;
  VAR_8->dst.lwtstate = FUNC_3(VAR_7->dst.lwtstate);
 }
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_entry {int __use; scalar_t__ dev; int output; int input; } ;
struct rtable {scalar_t__ rt_gw_family; struct dst_entry dst; int rt_uncached; int rt_gw6; int rt_gw4; int rt_uses_gateway; int rt_type; int rt_flags; int rt_genid; int rt_mtu_locked; int rt_pmtu; int rt_iif; int rt_is_input; } ;
struct net {scalar_t__ loopback_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dst_entry* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 struct rtable* FUNC_3 (int *,int *,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct dst_entry*) ;
 int VAR_6 ;
 int FUNC_5 (struct net*) ;

struct dst_entry *FUNC_6(struct net *VAR_7, struct dst_entry *VAR_8)
{
 struct rtable *VAR_9 = (struct rtable *) VAR_8;
 struct rtable *VAR_10;

 VAR_10 = FUNC_3(&VAR_6, ((void*)0), 1, VAR_2, 0);
 if (VAR_10) {
  struct dst_entry *VAR_11 = &VAR_10->dst;

  VAR_11->__use = 1;
  VAR_11->input = VAR_4;
  VAR_11->output = VAR_5;

  VAR_11->dev = VAR_7->loopback_dev;
  if (VAR_11->dev)
   FUNC_2(VAR_11->dev);

  VAR_10->rt_is_input = VAR_9->rt_is_input;
  VAR_10->rt_iif = VAR_9->rt_iif;
  VAR_10->rt_pmtu = VAR_9->rt_pmtu;
  VAR_10->rt_mtu_locked = VAR_9->rt_mtu_locked;

  VAR_10->rt_genid = FUNC_5(VAR_7);
  VAR_10->rt_flags = VAR_9->rt_flags;
  VAR_10->rt_type = VAR_9->rt_type;
  VAR_10->rt_uses_gateway = VAR_9->rt_uses_gateway;
  VAR_10->rt_gw_family = VAR_9->rt_gw_family;
  if (VAR_10->rt_gw_family == VAR_0)
   VAR_10->rt_gw4 = VAR_9->rt_gw4;
  else if (VAR_10->rt_gw_family == VAR_1)
   VAR_10->rt_gw6 = VAR_9->rt_gw6;

  FUNC_1(&VAR_10->rt_uncached);
 }

 FUNC_4(VAR_8);

 return VAR_10 ? &VAR_10->dst : FUNC_0(-VAR_3);
}

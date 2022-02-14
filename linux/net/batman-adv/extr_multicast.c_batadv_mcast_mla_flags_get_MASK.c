
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct batadv_priv {struct net_device* soft_iface; } ;
struct batadv_mcast_querier_state {void* shadowing; void* exists; } ;
struct batadv_mcast_mla_flags {int enabled; int bridged; int tvlv_flags; struct batadv_mcast_querier_state querier_ipv6; struct batadv_mcast_querier_state querier_ipv4; } ;
typedef int mla_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct batadv_priv*,struct net_device*) ;
 void* FUNC_3 (struct net_device*,int ) ;
 void* FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct batadv_mcast_mla_flags*,int ,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static struct batadv_mcast_mla_flags
FUNC_8(struct batadv_priv *VAR_8)
{
 struct net_device *VAR_9 = VAR_8->soft_iface;
 struct batadv_mcast_querier_state *VAR_10, *VAR_11;
 struct batadv_mcast_mla_flags VAR_12;
 struct net_device *VAR_13;

 VAR_13 = FUNC_1(VAR_9);

 FUNC_6(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.enabled = 1;
 VAR_12.tvlv_flags |= FUNC_2(VAR_8,
              VAR_13);

 if (!VAR_13)
  return VAR_12;

 FUNC_5(VAR_13);

 VAR_12.bridged = 1;
 VAR_10 = &VAR_12.querier_ipv4;
 VAR_11 = &VAR_12.querier_ipv6;

 if (!FUNC_0(VAR_5))
  FUNC_7("No bridge IGMP snooping compiled - multicast optimizations disabled\n");

 VAR_10->exists = FUNC_4(VAR_9, VAR_6);
 VAR_10->shadowing = FUNC_3(VAR_9, VAR_6);

 VAR_11->exists = FUNC_4(VAR_9, VAR_7);
 VAR_11->shadowing = FUNC_3(VAR_9, VAR_7);

 VAR_12.tvlv_flags |= VAR_2;
 if (!VAR_10->exists || VAR_10->shadowing) {
  VAR_12.tvlv_flags |= VAR_0;
  VAR_12.tvlv_flags &= ~VAR_3;
 }

 if (!VAR_11->exists || VAR_11->shadowing) {
  VAR_12.tvlv_flags |= VAR_1;
  VAR_12.tvlv_flags &= ~VAR_4;
 }

 return VAR_12;
}

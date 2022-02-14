
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ len; TYPE_1__* dev; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_vlan {int flags; int stats; } ;
struct net_bridge_port {int flags; } ;
struct net_bridge {TYPE_1__* dev; } ;
struct br_vlan_stats {int syncp; int tx_packets; int tx_bytes; } ;
struct TYPE_4__ {int vlan_filtered; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct net_bridge_vlan*) ;
 scalar_t__ FUNC_3 (struct net_bridge*,int ) ;
 struct net_bridge_vlan* FUNC_4 (struct net_bridge_vlan_group*,int ) ;
 int FUNC_5 (struct sk_buff*,int *) ;
 int FUNC_6 (struct net_bridge_vlan*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct br_vlan_stats* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

struct sk_buff *FUNC_11(struct net_bridge *VAR_4,
          const struct net_bridge_port *VAR_5,
          struct net_bridge_vlan_group *VAR_6,
          struct sk_buff *VAR_7)
{
 struct br_vlan_stats *VAR_8;
 struct net_bridge_vlan *VAR_9;
 u16 VAR_10;


 if (!FUNC_0(VAR_7)->vlan_filtered)
  goto out;





 FUNC_5(VAR_7, &VAR_10);
 VAR_9 = FUNC_4(VAR_6, VAR_10);





 if (!VAR_9 || !FUNC_6(VAR_9)) {
  if ((VAR_4->dev->flags & VAR_3) && VAR_7->dev == VAR_4->dev) {
   goto out;
  } else {
   FUNC_7(VAR_7);
   return ((void*)0);
  }
 }
 if (FUNC_3(VAR_4, VAR_1)) {
  VAR_8 = FUNC_8(VAR_9->stats);
  FUNC_9(&VAR_8->syncp);
  VAR_8->tx_bytes += VAR_7->len;
  VAR_8->tx_packets++;
  FUNC_10(&VAR_8->syncp);
 }

 if (VAR_9->flags & VAR_0)
  FUNC_1(VAR_7);

 if (VAR_5 && (VAR_5->flags & VAR_2) &&
     FUNC_2(VAR_7, VAR_9)) {
  FUNC_7(VAR_7);
  return ((void*)0);
 }
out:
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; scalar_t__ len; } ;
struct pcpu_sw_netstats {int syncp; int rx_bytes; int rx_packets; } ;
struct net_device {int flags; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge {int stats; } ;
struct TYPE_2__ {struct net_device* brdev; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int *,struct sk_buff*,struct net_device*,int *,int ) ;
 int FUNC_2 (struct net_bridge_vlan_group*,struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct net_bridge*,int *,struct net_bridge_vlan_group*,struct sk_buff*) ;
 int FUNC_4 (struct net_bridge*,int *,struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int VAR_5 ;
 struct net_bridge_vlan_group* FUNC_6 (struct net_bridge*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct net_bridge* FUNC_9 (struct net_device*) ;
 struct pcpu_sw_netstats* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_6)
{
 struct net_device *VAR_7, *VAR_8 = FUNC_0(VAR_6)->brdev;
 struct net_bridge *VAR_9 = FUNC_9(VAR_8);
 struct net_bridge_vlan_group *VAR_10;
 struct pcpu_sw_netstats *VAR_11 = FUNC_10(VAR_9->stats);

 FUNC_11(&VAR_11->syncp);
 VAR_11->rx_packets++;
 VAR_11->rx_bytes += VAR_6->len;
 FUNC_12(&VAR_11->syncp);

 VAR_10 = FUNC_6(VAR_9);




 if (!(VAR_8->flags & VAR_1) &&
     !FUNC_2(VAR_10, VAR_6)) {
  FUNC_8(VAR_6);
  return VAR_2;
 }

 VAR_7 = VAR_6->dev;
 VAR_6->dev = VAR_8;
 VAR_6 = FUNC_3(VAR_9, ((void*)0), VAR_10, VAR_6);
 if (!VAR_6)
  return VAR_2;

 FUNC_4(VAR_9, ((void*)0), VAR_6, FUNC_5(VAR_6),
      VAR_0);

 return FUNC_1(VAR_3, VAR_4,
         FUNC_7(VAR_7), ((void*)0), VAR_6, VAR_7, ((void*)0),
         VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct vlan_pcpu_stats {int syncp; int rx_multicast; int rx_bytes; int rx_packets; } ;
struct sk_buff {scalar_t__ pkt_type; unsigned int data; scalar_t__ len; int vlan_tci; int priority; int mac_len; int vlan_proto; struct net_device* dev; } ;
struct net_device {int flags; int dev_addr; } ;
typedef int __be16 ;
struct TYPE_4__ {int h_dest; } ;
struct TYPE_3__ {int flags; int vlan_pcpu_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,unsigned int) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 struct vlan_pcpu_stats* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;
 TYPE_1__* FUNC_16 (struct net_device*) ;
 struct net_device* FUNC_17 (struct net_device*,int ,int ) ;
 int FUNC_18 (struct net_device*,int ) ;
 struct sk_buff* FUNC_19 (struct sk_buff*,int ,int ,int ) ;

bool FUNC_20(struct sk_buff **VAR_7)
{
 struct sk_buff *VAR_8 = *VAR_7;
 __be16 VAR_9 = VAR_8->vlan_proto;
 u16 VAR_10 = FUNC_11(VAR_8);
 struct net_device *VAR_11;
 struct vlan_pcpu_stats *VAR_12;

 VAR_11 = FUNC_17(VAR_8->dev, VAR_9, VAR_10);
 if (!VAR_11)
  return 0;

 VAR_8 = *VAR_7 = FUNC_10(VAR_8, VAR_0);
 if (FUNC_15(!VAR_8))
  return 0;

 if (FUNC_15(!(VAR_11->flags & VAR_1))) {
  FUNC_3(VAR_8);
  *VAR_7 = ((void*)0);
  return 0;
 }

 VAR_8->dev = VAR_11;
 if (FUNC_15(VAR_8->pkt_type == VAR_4)) {



  if (FUNC_2(FUNC_1(VAR_8)->h_dest, VAR_11->dev_addr))
   VAR_8->pkt_type = VAR_2;
 }

 if (!(FUNC_16(VAR_11)->flags & VAR_5) &&
     !FUNC_5(VAR_11) &&
     !FUNC_4(VAR_11)) {
  unsigned int VAR_13 = VAR_8->data - FUNC_6(VAR_8);






  FUNC_8(VAR_8, VAR_13);
  VAR_8 = *VAR_7 = FUNC_19(VAR_8, VAR_8->vlan_proto,
          VAR_8->vlan_tci, VAR_8->mac_len);
  if (!VAR_8)
   return 0;
  FUNC_7(VAR_8, VAR_13 + VAR_6);
  FUNC_9(VAR_8);
 }

 VAR_8->priority = FUNC_18(VAR_11, VAR_8->vlan_tci);
 FUNC_0(VAR_8);

 VAR_12 = FUNC_12(FUNC_16(VAR_11)->vlan_pcpu_stats);

 FUNC_13(&VAR_12->syncp);
 VAR_12->rx_packets++;
 VAR_12->rx_bytes += VAR_8->len;
 if (VAR_8->pkt_type == VAR_3)
  VAR_12->rx_multicast++;
 FUNC_14(&VAR_12->syncp);

 return 1;
}

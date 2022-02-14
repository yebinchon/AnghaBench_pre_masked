
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ protocol; scalar_t__ vlan_proto; scalar_t__ len; scalar_t__ vlan_tci; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_vlan {int stats; } ;
struct net_bridge {scalar_t__ vlan_proto; } ;
struct br_vlan_stats {int syncp; int rx_packets; int rx_bytes; } ;
struct TYPE_2__ {int vlan_filtered; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct net_bridge_vlan_group*) ;
 scalar_t__ FUNC_3 (struct net_bridge const*,int ) ;
 struct net_bridge_vlan* FUNC_4 (struct net_bridge_vlan_group*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,scalar_t__*) ;
 int FUNC_6 (struct net_bridge_vlan*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 struct sk_buff* FUNC_14 (struct sk_buff*) ;
 struct br_vlan_stats* FUNC_15 (int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;
 struct sk_buff* FUNC_19 (struct sk_buff*,scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_20(const struct net_bridge *VAR_2,
         struct net_bridge_vlan_group *VAR_3,
         struct sk_buff *VAR_4, u16 *VAR_5)
{
 struct br_vlan_stats *VAR_6;
 struct net_bridge_vlan *VAR_7;
 bool VAR_8;

 FUNC_0(VAR_4)->vlan_filtered = 1;




 if (FUNC_18(!FUNC_13(VAR_4) &&
       VAR_4->protocol == VAR_2->vlan_proto)) {
  VAR_4 = FUNC_14(VAR_4);
  if (FUNC_18(!VAR_4))
   return 0;
 }

 if (!FUNC_5(VAR_4, VAR_5)) {

  if (VAR_4->vlan_proto != VAR_2->vlan_proto) {

   FUNC_10(VAR_4, VAR_1);
   VAR_4 = FUNC_19(VAR_4, VAR_4->vlan_proto,
       FUNC_12(VAR_4));
   if (FUNC_18(!VAR_4))
    return 0;

   FUNC_9(VAR_4, VAR_1);
   FUNC_11(VAR_4);
   *VAR_5 = 0;
   VAR_8 = 0;
  } else {
   VAR_8 = 1;
  }
 } else {

  VAR_8 = 0;
 }

 if (!*VAR_5) {
  u16 VAR_9 = FUNC_2(VAR_3);





  if (!VAR_9)
   goto drop;




  *VAR_5 = VAR_9;
  if (FUNC_8(!VAR_8))

   FUNC_1(VAR_4, VAR_2->vlan_proto, VAR_9);
  else





   VAR_4->vlan_tci |= VAR_9;


  if (!FUNC_3(VAR_2, VAR_0))
   return 1;
 }
 VAR_7 = FUNC_4(VAR_3, *VAR_5);
 if (!VAR_7 || !FUNC_6(VAR_7))
  goto drop;

 if (FUNC_3(VAR_2, VAR_0)) {
  VAR_6 = FUNC_15(VAR_7->stats);
  FUNC_16(&VAR_6->syncp);
  VAR_6->rx_bytes += VAR_4->len;
  VAR_6->rx_packets++;
  FUNC_17(&VAR_6->syncp);
 }

 return 1;

drop:
 FUNC_7(VAR_4);
 return 0;
}

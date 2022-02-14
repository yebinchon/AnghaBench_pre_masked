
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_ethhdr {int h_vlan_encapsulated_proto; } ;
struct sk_buff {int mark; scalar_t__ len; int protocol; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_dest; int h_source; int h_proto; } ;
struct batadv_priv {int isolation_mark; int isolation_mark_mask; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_bcast_packet {scalar_t__ packet_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 scalar_t__ VAR_4 ;
 int FUNC_0 (struct batadv_priv*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct batadv_priv*,struct sk_buff*,unsigned short,int) ;
 unsigned short FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct batadv_priv*,int ) ;
 scalar_t__ FUNC_4 (struct batadv_priv*,int ,int ,unsigned short) ;
 int FUNC_5 (struct batadv_priv*,struct batadv_orig_node*,int ,unsigned short) ;
 scalar_t__ FUNC_6 (struct batadv_priv*,int ,unsigned short) ;
 scalar_t__ FUNC_7 (struct batadv_priv*,unsigned short) ;
 struct ethhdr* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,struct net_device*) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*) ;
 struct batadv_priv* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct sk_buff*,scalar_t__) ;
 int FUNC_18 (struct sk_buff*,struct ethhdr*,scalar_t__) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (int) ;

void FUNC_22(struct net_device *VAR_5,
    struct sk_buff *VAR_6, int VAR_7,
    struct batadv_orig_node *VAR_8)
{
 struct batadv_bcast_packet *VAR_9;
 struct batadv_priv *VAR_10 = FUNC_13(VAR_5);
 struct vlan_ethhdr *VAR_11;
 struct ethhdr *VAR_12;
 unsigned short VAR_13;
 bool VAR_14;

 VAR_9 = (struct batadv_bcast_packet *)VAR_6->data;
 VAR_14 = (VAR_9->packet_type == VAR_0);

 FUNC_19(VAR_6, VAR_7);
 FUNC_20(VAR_6);




 FUNC_15(VAR_6);

 if (FUNC_21(!FUNC_17(VAR_6, VAR_3)))
  goto dropped;

 VAR_13 = FUNC_2(VAR_6, 0);
 VAR_12 = FUNC_8(VAR_6);

 switch (FUNC_16(VAR_12->h_proto)) {
 case 129:
  if (!FUNC_17(VAR_6, VAR_4))
   goto dropped;

  VAR_11 = (struct vlan_ethhdr *)VAR_6->data;


  if (VAR_11->h_vlan_encapsulated_proto != FUNC_10(128))
   break;


 case 128:
  goto dropped;
 }


 VAR_6->protocol = FUNC_9(VAR_6, VAR_5);
 FUNC_18(VAR_6, FUNC_8(VAR_6), VAR_3);

 FUNC_3(VAR_10, VAR_1);
 FUNC_0(VAR_10, VAR_2,
      VAR_6->len + VAR_3);




 if (FUNC_1(VAR_10, VAR_6, VAR_13, VAR_14))
  goto out;

 if (VAR_8)
  FUNC_5(VAR_10, VAR_8,
           VAR_12->h_source, VAR_13);

 if (FUNC_11(VAR_12->h_dest)) {



  if (FUNC_7(VAR_10, VAR_13) &&
      FUNC_6(VAR_10, VAR_12->h_source,
       VAR_13)) {



   VAR_6->mark &= ~VAR_10->isolation_mark_mask;
   VAR_6->mark |= VAR_10->isolation_mark;
  }
 } else if (FUNC_4(VAR_10, VAR_12->h_source,
      VAR_12->h_dest, VAR_13)) {
  goto dropped;
 }

 FUNC_14(VAR_6);
 goto out;

dropped:
 FUNC_12(VAR_6);
out:
 return;
}

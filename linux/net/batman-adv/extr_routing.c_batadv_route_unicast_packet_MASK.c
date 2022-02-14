
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct ethhdr {int h_source; } ;
struct batadv_unicast_packet {int ttl; int packet_type; int dest; } ;
struct batadv_unicast_4addr_packet {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_hard_iface {int soft_iface; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct batadv_priv*,int ,scalar_t__) ;
 int FUNC_1 (struct batadv_priv*,int ) ;
 struct batadv_orig_node* FUNC_2 (struct batadv_priv*,int ) ;
 int FUNC_3 (struct batadv_orig_node*) ;
 int FUNC_4 (struct sk_buff*,struct batadv_orig_node*,struct batadv_hard_iface*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 struct ethhdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 struct batadv_priv* FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_6,
           struct batadv_hard_iface *VAR_7)
{
 struct batadv_priv *VAR_8 = FUNC_8(VAR_7->soft_iface);
 struct batadv_orig_node *VAR_9 = ((void*)0);
 struct batadv_unicast_packet *VAR_10;
 struct ethhdr *VAR_11 = FUNC_6(VAR_6);
 int VAR_12, VAR_13, VAR_14 = VAR_3;
 unsigned int VAR_15;

 VAR_10 = (struct batadv_unicast_packet *)VAR_6->data;


 if (VAR_10->ttl < 2) {
  FUNC_9("Warning - can't forward unicast packet from %pM to %pM: ttl exceeded\n",
    VAR_11->h_source, VAR_10->dest);
  goto free_skb;
 }


 VAR_9 = FUNC_2(VAR_8, VAR_10->dest);

 if (!VAR_9)
  goto free_skb;


 if (FUNC_10(VAR_6, VAR_2) < 0)
  goto put_orig_node;


 VAR_10 = (struct batadv_unicast_packet *)VAR_6->data;
 VAR_10->ttl--;

 switch (VAR_10->packet_type) {
 case 128:
  VAR_13 = sizeof(struct batadv_unicast_4addr_packet);
  break;
 case 129:
  VAR_13 = sizeof(struct batadv_unicast_packet);
  break;
 default:

  VAR_13 = -1;
  break;
 }

 if (VAR_13 > 0)
  FUNC_5(VAR_6, VAR_13);

 VAR_15 = VAR_6->len;
 VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_7);


 if (VAR_12 == VAR_5) {
  VAR_14 = VAR_4;

  FUNC_1(VAR_8, VAR_0);
  FUNC_0(VAR_8, VAR_1,
       VAR_15 + VAR_2);
 }


 VAR_6 = ((void*)0);

put_orig_node:
 FUNC_3(VAR_9);
free_skb:
 FUNC_7(VAR_6);

 return VAR_14;
}

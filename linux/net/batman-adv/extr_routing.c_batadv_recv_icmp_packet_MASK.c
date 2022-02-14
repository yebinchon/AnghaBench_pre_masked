
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ data; } ;
struct ethhdr {int h_dest; int h_source; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_icmp_packet_rr {size_t rr_cur; int * rr; } ;
struct batadv_icmp_header {scalar_t__ msg_type; int ttl; int dst; } ;
struct batadv_hard_iface {int soft_iface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct batadv_priv*,int ) ;
 struct batadv_orig_node* FUNC_1 (struct batadv_priv*,int ) ;
 int FUNC_2 (struct batadv_orig_node*) ;
 int FUNC_3 (struct batadv_priv*,struct sk_buff*) ;
 int FUNC_4 (struct batadv_priv*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct batadv_orig_node*,struct batadv_hard_iface*) ;
 struct ethhdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*) ;
 struct batadv_priv* FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*,int) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int) ;

int FUNC_16(struct sk_buff *VAR_7,
       struct batadv_hard_iface *VAR_8)
{
 struct batadv_priv *VAR_9 = FUNC_11(VAR_8->soft_iface);
 struct batadv_icmp_header *VAR_10;
 struct batadv_icmp_packet_rr *VAR_11;
 struct ethhdr *VAR_12;
 struct batadv_orig_node *VAR_13 = ((void*)0);
 int VAR_14 = sizeof(struct batadv_icmp_header);
 int VAR_15, VAR_16 = VAR_4;


 if (FUNC_15(!FUNC_12(VAR_7, VAR_14)))
  goto free_skb;

 VAR_12 = FUNC_6(VAR_7);


 if (!FUNC_9(VAR_12->h_dest))
  goto free_skb;


 if (FUNC_8(VAR_12->h_source))
  goto free_skb;


 if (!FUNC_0(VAR_9, VAR_12->h_dest))
  goto free_skb;

 VAR_10 = (struct batadv_icmp_header *)VAR_7->data;


 if ((VAR_10->msg_type == VAR_0 ||
      VAR_10->msg_type == VAR_1) &&
     VAR_7->len >= sizeof(struct batadv_icmp_packet_rr)) {
  if (FUNC_14(VAR_7) < 0)
   goto free_skb;


  if (FUNC_13(VAR_7, VAR_3) < 0)
   goto free_skb;

  VAR_12 = FUNC_6(VAR_7);
  VAR_10 = (struct batadv_icmp_header *)VAR_7->data;
  VAR_11 = (struct batadv_icmp_packet_rr *)VAR_10;
  if (VAR_11->rr_cur >= VAR_2)
   goto free_skb;

  FUNC_7(VAR_11->rr[VAR_11->rr_cur],
    VAR_12->h_dest);
  VAR_11->rr_cur++;
 }


 if (FUNC_0(VAR_9, VAR_10->dst))
  return FUNC_4(VAR_9, VAR_7);


 if (VAR_10->ttl < 2)
  return FUNC_3(VAR_9, VAR_7);


 VAR_13 = FUNC_1(VAR_9, VAR_10->dst);
 if (!VAR_13)
  goto free_skb;


 if (FUNC_13(VAR_7, VAR_3) < 0)
  goto put_orig_node;

 VAR_10 = (struct batadv_icmp_header *)VAR_7->data;


 VAR_10->ttl--;


 VAR_15 = FUNC_5(VAR_7, VAR_13, VAR_8);
 if (VAR_15 == VAR_6)
  VAR_16 = VAR_5;


 VAR_7 = ((void*)0);

put_orig_node:
 if (VAR_13)
  FUNC_2(VAR_13);
free_skb:
 FUNC_10(VAR_7);

 return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int h_source; int h_dest; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {void* last_bcast_seqno; int bcast_seqno_lock; int bcast_bits; int bcast_seqno_reset; } ;
struct batadv_hard_iface {int soft_iface; } ;
struct batadv_bcast_packet {int ttl; int seqno; int orig; } ;
typedef void* s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct batadv_priv*,struct sk_buff*,int,int) ;
 scalar_t__ FUNC_1 (struct batadv_priv*,int ,void*,int) ;
 scalar_t__ FUNC_2 (struct batadv_priv*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct batadv_orig_node*,int) ;
 scalar_t__ FUNC_4 (struct batadv_priv*,struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (struct batadv_priv*,struct sk_buff*,int) ;
 int FUNC_6 (struct batadv_priv*,struct sk_buff*,int) ;
 int FUNC_7 (int ,struct sk_buff*,int,struct batadv_orig_node*) ;
 scalar_t__ FUNC_8 (struct batadv_priv*,int ) ;
 struct batadv_orig_node* FUNC_9 (struct batadv_priv*,int ) ;
 int FUNC_10 (struct batadv_orig_node*) ;
 int FUNC_11 (struct sk_buff*,int) ;
 scalar_t__ FUNC_12 (int ,void*,void*) ;
 scalar_t__ FUNC_13 (struct batadv_priv*,void*,int ,int *,int *) ;
 struct ethhdr* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct sk_buff*) ;
 struct batadv_priv* FUNC_18 (int ) ;
 void* FUNC_19 (int ) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int) ;

int FUNC_24(struct sk_buff *VAR_3,
        struct batadv_hard_iface *VAR_4)
{
 struct batadv_priv *VAR_5 = FUNC_18(VAR_4->soft_iface);
 struct batadv_orig_node *VAR_6 = ((void*)0);
 struct batadv_bcast_packet *VAR_7;
 struct ethhdr *VAR_8;
 int VAR_9 = sizeof(*VAR_7);
 int VAR_10 = VAR_1;
 s32 VAR_11;
 u32 VAR_12;


 if (FUNC_23(!FUNC_20(VAR_3, VAR_9)))
  goto free_skb;

 VAR_8 = FUNC_14(VAR_3);


 if (!FUNC_15(VAR_8->h_dest))
  goto free_skb;


 if (FUNC_16(VAR_8->h_source))
  goto free_skb;


 if (FUNC_8(VAR_5, VAR_8->h_source))
  goto free_skb;

 VAR_7 = (struct batadv_bcast_packet *)VAR_3->data;


 if (FUNC_8(VAR_5, VAR_7->orig))
  goto free_skb;

 if (VAR_7->ttl < 2)
  goto free_skb;

 VAR_6 = FUNC_9(VAR_5, VAR_7->orig);

 if (!VAR_6)
  goto free_skb;

 FUNC_21(&VAR_6->bcast_seqno_lock);

 VAR_12 = FUNC_19(VAR_7->seqno);

 if (FUNC_12(VAR_6->bcast_bits, VAR_6->last_bcast_seqno,
       VAR_12))
  goto spin_unlock;

 VAR_11 = VAR_12 - VAR_6->last_bcast_seqno;


 if (FUNC_13(VAR_5, VAR_11,
        VAR_0,
        &VAR_6->bcast_seqno_reset, ((void*)0)))
  goto spin_unlock;




 if (FUNC_1(VAR_5, VAR_6->bcast_bits, VAR_11, 1))
  VAR_6->last_bcast_seqno = VAR_12;

 FUNC_22(&VAR_6->bcast_seqno_lock);


 if (FUNC_2(VAR_5, VAR_3))
  goto free_skb;

 FUNC_11(VAR_3, sizeof(struct batadv_bcast_packet));


 FUNC_0(VAR_5, VAR_3, 1, 0);




 if (FUNC_3(VAR_3, VAR_6, VAR_9))
  goto free_skb;

 if (FUNC_5(VAR_5, VAR_3, VAR_9))
  goto rx_success;
 if (FUNC_4(VAR_5, VAR_3, VAR_9))
  goto rx_success;

 FUNC_6(VAR_5, VAR_3, VAR_9);


 FUNC_7(VAR_4->soft_iface, VAR_3, VAR_9, VAR_6);

rx_success:
 VAR_10 = VAR_2;
 goto out;

spin_unlock:
 FUNC_22(&VAR_6->bcast_seqno_lock);
free_skb:
 FUNC_17(VAR_3);
out:
 if (VAR_6)
  FUNC_10(VAR_6);
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ priority; scalar_t__ data; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_hard_iface {int batman_adv_ptype; int net_dev; int soft_iface; } ;
struct batadv_frag_packet {int dest; scalar_t__ priority; int orig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct batadv_priv*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int *,int *) ;
 scalar_t__ FUNC_2 (struct batadv_priv*,struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff**,struct batadv_orig_node*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct batadv_hard_iface*,struct batadv_orig_node*) ;
 int FUNC_5 (struct batadv_priv*,int ) ;
 int FUNC_6 (struct batadv_priv*,int ) ;
 struct batadv_orig_node* FUNC_7 (struct batadv_priv*,int ) ;
 int FUNC_8 (struct batadv_orig_node*) ;
 int FUNC_9 (struct sk_buff*) ;
 struct batadv_priv* FUNC_10 (int ) ;

int FUNC_11(struct sk_buff *VAR_4,
       struct batadv_hard_iface *VAR_5)
{
 struct batadv_priv *VAR_6 = FUNC_10(VAR_5->soft_iface);
 struct batadv_orig_node *VAR_7 = ((void*)0);
 struct batadv_frag_packet *VAR_8;
 int VAR_9 = VAR_2;

 if (FUNC_2(VAR_6, VAR_4,
     sizeof(*VAR_8)) < 0)
  goto free_skb;

 VAR_8 = (struct batadv_frag_packet *)VAR_4->data;
 VAR_7 = FUNC_7(VAR_6, VAR_8->orig);
 if (!VAR_7)
  goto free_skb;

 VAR_4->priority = VAR_8->priority + 256;


 if (!FUNC_6(VAR_6, VAR_8->dest) &&
     FUNC_4(VAR_4, VAR_5, VAR_7)) {

  VAR_4 = ((void*)0);
  VAR_9 = VAR_3;
  goto put_orig_node;
 }

 FUNC_5(VAR_6, VAR_0);
 FUNC_0(VAR_6, VAR_1, VAR_4->len);


 if (!FUNC_3(&VAR_4, VAR_7))
  goto put_orig_node;




 if (VAR_4) {
  FUNC_1(VAR_4, VAR_5->net_dev,
           &VAR_5->batman_adv_ptype, ((void*)0));

  VAR_4 = ((void*)0);
 }

 VAR_9 = VAR_3;

put_orig_node:
 FUNC_8(VAR_7);
free_skb:
 FUNC_9(VAR_4);

 return VAR_9;
}

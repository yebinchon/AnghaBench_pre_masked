
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct batadv_unicast_packet {int dest; } ;
struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {int soft_iface; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_priv*,struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (struct batadv_priv*,int ) ;
 int FUNC_2 (struct sk_buff*,struct batadv_hard_iface*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct batadv_priv* FUNC_4 (int ) ;

int FUNC_5(struct sk_buff *VAR_1,
      struct batadv_hard_iface *VAR_2)
{
 struct batadv_unicast_packet *VAR_3;
 struct batadv_priv *VAR_4 = FUNC_4(VAR_2->soft_iface);
 int VAR_5, VAR_6 = sizeof(*VAR_3);

 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_6);
 if (VAR_5 < 0)
  goto free_skb;


 VAR_3 = (struct batadv_unicast_packet *)VAR_1->data;
 if (FUNC_1(VAR_4, VAR_3->dest))
  goto free_skb;

 return FUNC_2(VAR_1, VAR_2);

free_skb:
 FUNC_3(VAR_1);
 return VAR_0;
}

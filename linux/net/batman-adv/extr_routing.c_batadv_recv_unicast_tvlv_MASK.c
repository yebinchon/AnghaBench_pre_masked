
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct batadv_unicast_tvlv_packet {int dst; int src; int tvlv_len; } ;
struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {int soft_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct batadv_priv*,struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_priv*,int,int *,int ,int ,unsigned char*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct batadv_priv* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;

int FUNC_8(struct sk_buff *VAR_2,
        struct batadv_hard_iface *VAR_3)
{
 struct batadv_priv *VAR_4 = FUNC_4(VAR_3->soft_iface);
 struct batadv_unicast_tvlv_packet *VAR_5;
 unsigned char *VAR_6;
 u16 VAR_7;
 int VAR_8 = sizeof(*VAR_5);
 int VAR_9 = VAR_0;

 if (FUNC_0(VAR_4, VAR_2, VAR_8) < 0)
  goto free_skb;


 if (FUNC_6(VAR_2, VAR_8) < 0)
  goto free_skb;


 if (FUNC_7(VAR_2) < 0)
  goto free_skb;

 VAR_5 = (struct batadv_unicast_tvlv_packet *)VAR_2->data;

 VAR_6 = (unsigned char *)(VAR_2->data + VAR_8);
 VAR_7 = FUNC_5(VAR_5->tvlv_len);

 if (VAR_7 > VAR_2->len - VAR_8)
  goto free_skb;

 VAR_9 = FUNC_2(VAR_4, 0, ((void*)0),
          VAR_5->src,
          VAR_5->dst,
          VAR_6, VAR_7);

 if (VAR_9 != VAR_1) {
  VAR_9 = FUNC_1(VAR_2, VAR_3);

  VAR_2 = ((void*)0);
 }

free_skb:
 FUNC_3(VAR_2);

 return VAR_9;
}

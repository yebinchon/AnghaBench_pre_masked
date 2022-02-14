
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int h_dest; } ;
struct batadv_unicast_packet {scalar_t__ ttvn; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct batadv_orig_node*) ;
 int FUNC_1 (struct batadv_priv*,struct sk_buff*,struct batadv_orig_node*,int) ;
 int FUNC_2 (struct sk_buff*,struct batadv_orig_node*,int *) ;
 scalar_t__ FUNC_3 (struct batadv_priv*,int ,unsigned short) ;
 struct ethhdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct batadv_priv *VAR_1,
       struct sk_buff *VAR_2, int VAR_3,
       int VAR_4,
       struct batadv_orig_node *VAR_5,
       unsigned short VAR_6)
{
 struct batadv_unicast_packet *VAR_7;
 struct ethhdr *VAR_8;
 int VAR_9 = VAR_0;

 if (!VAR_5)
  goto out;

 switch (VAR_3) {
 case 129:
  if (!FUNC_0(VAR_2, VAR_5))
   goto out;
  break;
 case 128:
  if (!FUNC_1(VAR_1, VAR_2,
          VAR_5,
          VAR_4))
   goto out;
  break;
 default:



  goto out;
 }




 VAR_8 = FUNC_4(VAR_2);
 VAR_7 = (struct batadv_unicast_packet *)VAR_2->data;






 if (FUNC_3(VAR_1, VAR_8->h_dest, VAR_6))
  VAR_7->ttvn = VAR_7->ttvn - 1;

 VAR_9 = FUNC_2(VAR_2, VAR_5, ((void*)0));

 VAR_2 = ((void*)0);

out:
 FUNC_5(VAR_2);
 return VAR_9;
}

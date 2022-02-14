
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct batadv_priv {int fragmentation; } ;
struct batadv_orig_node {struct batadv_priv* bat_priv; } ;
struct batadv_neigh_node {TYPE_2__* if_incoming; } ;
struct batadv_hard_iface {int dummy; } ;
struct TYPE_4__ {TYPE_1__* net_dev; } ;
struct TYPE_3__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct batadv_neigh_node* FUNC_1 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_hard_iface*) ;
 int FUNC_2 (struct sk_buff*,struct batadv_orig_node*,struct batadv_neigh_node*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct batadv_neigh_node*) ;
 int FUNC_4 (struct batadv_neigh_node*) ;
 int FUNC_5 (struct sk_buff*,struct batadv_neigh_node*) ;
 int FUNC_6 (struct sk_buff*) ;

int FUNC_7(struct sk_buff *VAR_2,
       struct batadv_orig_node *VAR_3,
       struct batadv_hard_iface *VAR_4)
{
 struct batadv_priv *VAR_5 = VAR_3->bat_priv;
 struct batadv_neigh_node *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto free_skb;
 }




 if (FUNC_0(&VAR_5->fragmentation) &&
     VAR_2->len > VAR_6->if_incoming->net_dev->mtu) {

  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_6);

  VAR_2 = ((void*)0);

  goto put_neigh_node;
 }





 if (VAR_4 && FUNC_3(VAR_2, VAR_6))
  VAR_7 = -VAR_0;
 else
  VAR_7 = FUNC_5(VAR_2, VAR_6);


 VAR_2 = ((void*)0);

put_neigh_node:
 FUNC_4(VAR_6);
free_skb:
 FUNC_6(VAR_2);

 return VAR_7;
}

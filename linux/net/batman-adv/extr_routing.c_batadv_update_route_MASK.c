
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_neigh_node {int dummy; } ;
struct batadv_hard_iface {int dummy; } ;


 int FUNC_0 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_hard_iface*,struct batadv_neigh_node*) ;
 int FUNC_1 (struct batadv_neigh_node*) ;
 struct batadv_neigh_node* FUNC_2 (struct batadv_orig_node*,struct batadv_hard_iface*) ;

void FUNC_3(struct batadv_priv *VAR_0,
    struct batadv_orig_node *VAR_1,
    struct batadv_hard_iface *VAR_2,
    struct batadv_neigh_node *VAR_3)
{
 struct batadv_neigh_node *VAR_4 = ((void*)0);

 if (!VAR_1)
  goto out;

 VAR_4 = FUNC_2(VAR_1, VAR_2);

 if (VAR_4 != VAR_3)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

out:
 if (VAR_4)
  FUNC_1(VAR_4);
}

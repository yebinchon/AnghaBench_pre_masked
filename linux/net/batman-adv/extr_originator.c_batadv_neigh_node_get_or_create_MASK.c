
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_orig_node {int dummy; } ;
struct batadv_neigh_node {int dummy; } ;
struct batadv_hard_iface {int dummy; } ;


 struct batadv_neigh_node* FUNC_0 (struct batadv_orig_node*,struct batadv_hard_iface*,int const*) ;
 struct batadv_neigh_node* FUNC_1 (struct batadv_orig_node*,struct batadv_hard_iface*,int const*) ;

struct batadv_neigh_node *
FUNC_2(struct batadv_orig_node *VAR_0,
    struct batadv_hard_iface *VAR_1,
    const u8 *VAR_2)
{
 struct batadv_neigh_node *VAR_3;


 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}

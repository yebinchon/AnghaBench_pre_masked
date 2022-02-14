
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_orig_node {int dummy; } ;
struct batadv_neigh_node {struct batadv_orig_node* orig_node; } ;
struct batadv_hard_iface {int dummy; } ;


 struct batadv_neigh_node* FUNC_0 (struct batadv_orig_node*,struct batadv_hard_iface*,int const*) ;

__attribute__((used)) static struct batadv_neigh_node *
FUNC_1(struct batadv_hard_iface *VAR_0,
   const u8 *VAR_1,
   struct batadv_orig_node *VAR_2,
   struct batadv_orig_node *VAR_3)
{
 struct batadv_neigh_node *VAR_4;

 VAR_4 = FUNC_0(VAR_2,
           VAR_0, VAR_1);
 if (!VAR_4)
  goto out;

 VAR_4->orig_node = VAR_3;

out:
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_neigh_node {int dummy; } ;
struct batadv_hard_iface {int dummy; } ;


 int FUNC_0 (struct batadv_neigh_node*,struct batadv_hard_iface*,struct batadv_neigh_node*,struct batadv_hard_iface*,int*) ;

__attribute__((used)) static int FUNC_1(struct batadv_neigh_node *VAR_0,
       struct batadv_hard_iface *VAR_1,
       struct batadv_neigh_node *VAR_2,
       struct batadv_hard_iface *VAR_3)
{
 bool VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2,
           VAR_3, &VAR_5);
 if (!VAR_4)
  return 0;

 return VAR_5;
}

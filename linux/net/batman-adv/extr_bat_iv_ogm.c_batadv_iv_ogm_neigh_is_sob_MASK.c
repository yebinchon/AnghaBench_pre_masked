
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_neigh_node {int dummy; } ;
struct batadv_hard_iface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_neigh_node*,struct batadv_hard_iface*,struct batadv_neigh_node*,struct batadv_hard_iface*,int*) ;

__attribute__((used)) static bool
FUNC_1(struct batadv_neigh_node *VAR_1,
      struct batadv_hard_iface *VAR_2,
      struct batadv_neigh_node *VAR_3,
      struct batadv_hard_iface *VAR_4)
{
 bool VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3,
           VAR_4, &VAR_6);
 if (!VAR_5)
  return 0;

 VAR_5 = VAR_6 > -VAR_0;
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct batadv_neigh_node {int dummy; } ;
struct TYPE_2__ {int tq_avg; } ;
struct batadv_neigh_ifinfo {TYPE_1__ bat_iv; } ;
struct batadv_hard_iface {int dummy; } ;


 struct batadv_neigh_ifinfo* FUNC_0 (struct batadv_neigh_node*,struct batadv_hard_iface*) ;
 int FUNC_1 (struct batadv_neigh_ifinfo*) ;

__attribute__((used)) static bool
FUNC_2(struct batadv_neigh_node *VAR_0,
          struct batadv_hard_iface *VAR_1,
          u8 *VAR_2)
{
 struct batadv_neigh_ifinfo *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  return 0;

 *VAR_2 = VAR_3->bat_iv.tq_avg;
 FUNC_1(VAR_3);

 return 1;
}

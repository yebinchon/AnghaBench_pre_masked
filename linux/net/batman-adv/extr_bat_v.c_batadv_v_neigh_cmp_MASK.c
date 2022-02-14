
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_neigh_node {int dummy; } ;
struct TYPE_2__ {int throughput; } ;
struct batadv_neigh_ifinfo {TYPE_1__ bat_v; } ;
struct batadv_hard_iface {int dummy; } ;


 struct batadv_neigh_ifinfo* FUNC_0 (struct batadv_neigh_node*,struct batadv_hard_iface*) ;
 int FUNC_1 (struct batadv_neigh_ifinfo*) ;

__attribute__((used)) static int FUNC_2(struct batadv_neigh_node *VAR_0,
         struct batadv_hard_iface *VAR_1,
         struct batadv_neigh_node *VAR_2,
         struct batadv_hard_iface *VAR_3)
{
 struct batadv_neigh_ifinfo *VAR_4, *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_4)
  goto err_ifinfo1;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5)
  goto err_ifinfo2;

 VAR_6 = VAR_4->bat_v.throughput - VAR_5->bat_v.throughput;

 FUNC_1(VAR_5);
err_ifinfo2:
 FUNC_1(VAR_4);
err_ifinfo1:
 return VAR_6;
}

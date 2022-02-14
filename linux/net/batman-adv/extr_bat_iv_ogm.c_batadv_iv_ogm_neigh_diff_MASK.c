
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct batadv_neigh_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ tq_avg; } ;
struct batadv_neigh_ifinfo {TYPE_1__ bat_iv; } ;
struct batadv_hard_iface {int dummy; } ;


 struct batadv_neigh_ifinfo* FUNC_0 (struct batadv_neigh_node*,struct batadv_hard_iface*) ;
 int FUNC_1 (struct batadv_neigh_ifinfo*) ;

__attribute__((used)) static bool FUNC_2(struct batadv_neigh_node *VAR_0,
         struct batadv_hard_iface *VAR_1,
         struct batadv_neigh_node *VAR_2,
         struct batadv_hard_iface *VAR_3,
         int *VAR_4)
{
 struct batadv_neigh_ifinfo *VAR_5, *VAR_6;
 u8 VAR_7, VAR_8;
 bool VAR_9 = 1;

 VAR_5 = FUNC_0(VAR_0, VAR_1);
 VAR_6 = FUNC_0(VAR_2, VAR_3);

 if (!VAR_5 || !VAR_6) {
  VAR_9 = 0;
  goto out;
 }

 VAR_7 = VAR_5->bat_iv.tq_avg;
 VAR_8 = VAR_6->bat_iv.tq_avg;
 *VAR_4 = (int)VAR_7 - (int)VAR_8;

out:
 if (VAR_5)
  FUNC_1(VAR_5);
 if (VAR_6)
  FUNC_1(VAR_6);

 return VAR_9;
}

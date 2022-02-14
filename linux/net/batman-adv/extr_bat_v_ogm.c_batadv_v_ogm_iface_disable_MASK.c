
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aggr_list_lock; int aggr_wq; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; } ;


 int FUNC_0 (struct batadv_hard_iface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct batadv_hard_iface *VAR_0)
{
 FUNC_1(&VAR_0->bat_v.aggr_wq);

 FUNC_2(&VAR_0->bat_v.aggr_list_lock);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_0->bat_v.aggr_list_lock);
}

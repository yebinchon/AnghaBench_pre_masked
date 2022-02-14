
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aggr_wq; int aggr_list_lock; int aggr_list; scalar_t__ aggr_len; int elp_interval; int throughput_override; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct batadv_hard_iface *VAR_1)
{



 FUNC_1(&VAR_1->bat_v.throughput_override, 0);
 FUNC_1(&VAR_1->bat_v.elp_interval, 500);

 VAR_1->bat_v.aggr_len = 0;
 FUNC_2(&VAR_1->bat_v.aggr_list);
 FUNC_3(&VAR_1->bat_v.aggr_list_lock);
 FUNC_0(&VAR_1->bat_v.aggr_wq,
     VAR_0);
}

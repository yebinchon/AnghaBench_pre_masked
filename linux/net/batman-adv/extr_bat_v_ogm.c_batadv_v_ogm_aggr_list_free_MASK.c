
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ aggr_len; int aggr_list; int aggr_list_lock; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 struct sk_buff* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct batadv_hard_iface *VAR_0)
{
 struct sk_buff *VAR_1;

 FUNC_1(&VAR_0->bat_v.aggr_list_lock);

 while ((VAR_1 = FUNC_2(&VAR_0->bat_v.aggr_list)))
  FUNC_0(VAR_1);

 VAR_0->bat_v.aggr_len = 0;
}

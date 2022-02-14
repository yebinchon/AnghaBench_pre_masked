
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * elp_skb; int elp_wq; } ;
struct batadv_hard_iface {TYPE_1__ bat_v; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct batadv_hard_iface *VAR_0)
{
 FUNC_0(&VAR_0->bat_v.elp_wq);

 FUNC_1(VAR_0->bat_v.elp_skb);
 VAR_0->bat_v.elp_skb = ((void*)0);
}

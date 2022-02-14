
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ogm_buff_mutex; int * ogm_buff; } ;
struct batadv_hard_iface {TYPE_1__ bat_iv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct batadv_hard_iface *VAR_0)
{
 FUNC_1(&VAR_0->bat_iv.ogm_buff_mutex);

 FUNC_0(VAR_0->bat_iv.ogm_buff);
 VAR_0->bat_iv.ogm_buff = ((void*)0);

 FUNC_2(&VAR_0->bat_iv.ogm_buff_mutex);
}

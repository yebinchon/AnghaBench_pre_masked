
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ogm_buff_mutex; scalar_t__ ogm_buff_len; int * ogm_buff; int ogm_wq; } ;
struct batadv_priv {TYPE_1__ bat_v; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct batadv_priv *VAR_0)
{
 FUNC_0(&VAR_0->bat_v.ogm_wq);

 FUNC_2(&VAR_0->bat_v.ogm_buff_mutex);

 FUNC_1(VAR_0->bat_v.ogm_buff);
 VAR_0->bat_v.ogm_buff = ((void*)0);
 VAR_0->bat_v.ogm_buff_len = 0;

 FUNC_3(&VAR_0->bat_v.ogm_buff_mutex);
}

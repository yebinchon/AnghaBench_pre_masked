
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ogm_buff_mutex; } ;
struct batadv_hard_iface {scalar_t__ if_status; TYPE_1__ bat_iv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct batadv_hard_iface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct batadv_hard_iface *VAR_2)
{
 if (VAR_2->if_status == VAR_0 ||
     VAR_2->if_status == VAR_1)
  return;

 FUNC_1(&VAR_2->bat_iv.ogm_buff_mutex);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->bat_iv.ogm_buff_mutex);
}

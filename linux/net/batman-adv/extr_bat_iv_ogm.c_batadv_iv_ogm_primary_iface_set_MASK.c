
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_ogm_packet {int ttl; } ;
struct TYPE_2__ {int ogm_buff_mutex; void* ogm_buff; } ;
struct batadv_hard_iface {TYPE_1__ bat_iv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct batadv_hard_iface *VAR_1)
{
 struct batadv_ogm_packet *VAR_2;
 void *VAR_3;

 FUNC_0(&VAR_1->bat_iv.ogm_buff_mutex);

 VAR_3 = VAR_1->bat_iv.ogm_buff;
 if (!VAR_3)
  goto unlock;

 VAR_2 = VAR_3;
 VAR_2->ttl = VAR_0;

unlock:
 FUNC_1(&VAR_1->bat_iv.ogm_buff_mutex);
}

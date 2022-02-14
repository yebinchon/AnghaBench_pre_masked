
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct batadv_ogm_packet {int prev_sender; int orig; } ;
struct TYPE_3__ {int ogm_buff_mutex; void* ogm_buff; } ;
struct batadv_hard_iface {TYPE_1__ bat_iv; TYPE_2__* net_dev; } ;
struct TYPE_4__ {int dev_addr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct batadv_hard_iface *VAR_0)
{
 struct batadv_ogm_packet *VAR_1;
 void *VAR_2;

 FUNC_1(&VAR_0->bat_iv.ogm_buff_mutex);

 VAR_2 = VAR_0->bat_iv.ogm_buff;
 if (!VAR_2)
  goto unlock;

 VAR_1 = VAR_2;
 FUNC_0(VAR_1->orig,
   VAR_0->net_dev->dev_addr);
 FUNC_0(VAR_1->prev_sender,
   VAR_0->net_dev->dev_addr);

unlock:
 FUNC_2(&VAR_0->bat_iv.ogm_buff_mutex);
}

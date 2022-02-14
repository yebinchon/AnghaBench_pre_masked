
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ogm_buff_mutex; scalar_t__ ogm_buff; } ;
struct batadv_priv {TYPE_2__ bat_v; } ;
struct batadv_ogm2_packet {int orig; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; int soft_iface; } ;
struct TYPE_3__ {int dev_addr; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct batadv_priv* FUNC_3 (int ) ;

void FUNC_4(struct batadv_hard_iface *VAR_0)
{
 struct batadv_priv *VAR_1 = FUNC_3(VAR_0->soft_iface);
 struct batadv_ogm2_packet *VAR_2;

 FUNC_1(&VAR_1->bat_v.ogm_buff_mutex);
 if (!VAR_1->bat_v.ogm_buff)
  goto unlock;

 VAR_2 = (struct batadv_ogm2_packet *)VAR_1->bat_v.ogm_buff;
 FUNC_0(VAR_2->orig, VAR_0->net_dev->dev_addr);

unlock:
 FUNC_2(&VAR_1->bat_v.ogm_buff_mutex);
}

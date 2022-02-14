
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_3__ {struct sk_buff* elp_skb; } ;
struct batadv_hard_iface {TYPE_2__* net_dev; TYPE_1__ bat_v; } ;
struct batadv_elp_packet {int orig; } ;
struct TYPE_4__ {int dev_addr; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct batadv_hard_iface *VAR_0,
     struct batadv_hard_iface *VAR_1)
{
 struct batadv_elp_packet *VAR_2;
 struct sk_buff *VAR_3;

 if (!VAR_1->bat_v.elp_skb)
  return;

 VAR_3 = VAR_1->bat_v.elp_skb;
 VAR_2 = (struct batadv_elp_packet *)VAR_3->data;
 FUNC_0(VAR_2->orig,
   VAR_0->net_dev->dev_addr);
}

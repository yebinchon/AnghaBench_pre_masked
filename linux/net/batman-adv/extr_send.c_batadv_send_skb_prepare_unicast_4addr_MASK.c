
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_3__ {int packet_type; } ;
struct batadv_unicast_4addr_packet {int subtype; scalar_t__ reserved; int src; TYPE_1__ u; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_hard_iface {TYPE_2__* net_dev; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_hard_iface*) ;
 struct batadv_hard_iface* FUNC_1 (struct batadv_priv*) ;
 int FUNC_2 (struct sk_buff*,int,struct batadv_orig_node*) ;
 int FUNC_3 (int ,int ) ;

bool FUNC_4(struct batadv_priv *VAR_1,
        struct sk_buff *VAR_2,
        struct batadv_orig_node *VAR_3,
        int VAR_4)
{
 struct batadv_hard_iface *VAR_5;
 struct batadv_unicast_4addr_packet *VAR_6;
 bool VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_1);
 if (!VAR_5)
  goto out;





 if (!FUNC_2(VAR_2, sizeof(*VAR_6),
            VAR_3))
  goto out;

 VAR_6 = (struct batadv_unicast_4addr_packet *)VAR_2->data;
 VAR_6->u.packet_type = VAR_0;
 FUNC_3(VAR_6->src, VAR_5->net_dev->dev_addr);
 VAR_6->subtype = VAR_4;
 VAR_6->reserved = 0;

 VAR_7 = 1;
out:
 if (VAR_5)
  FUNC_0(VAR_5);
 return VAR_7;
}

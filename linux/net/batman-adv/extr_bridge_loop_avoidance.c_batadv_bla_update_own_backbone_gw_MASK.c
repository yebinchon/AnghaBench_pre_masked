
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct batadv_bla_backbone_gw {int lasttime; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (struct batadv_bla_backbone_gw*) ;
 struct batadv_bla_backbone_gw* FUNC_1 (struct batadv_priv*,int ,unsigned short,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct batadv_priv *VAR_1,
      struct batadv_hard_iface *VAR_2,
      unsigned short VAR_3)
{
 struct batadv_bla_backbone_gw *VAR_4;

 VAR_4 = FUNC_1(VAR_1,
       VAR_2->net_dev->dev_addr,
       VAR_3, 1);
 if (FUNC_2(!VAR_4))
  return;

 VAR_4->lasttime = VAR_0;
 FUNC_0(VAR_4);
}

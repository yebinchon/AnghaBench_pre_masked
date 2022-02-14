
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ethhdr {int h_source; } ;
struct TYPE_4__ {int loopdetect_lasttime; int loopdetect_addr; } ;
struct batadv_priv {TYPE_2__ bla; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct batadv_bla_backbone_gw {int report_work; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_bla_backbone_gw*) ;
 struct batadv_bla_backbone_gw* FUNC_1 (struct batadv_priv*,int ,unsigned short,int) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct ethhdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool
FUNC_7(struct batadv_priv *VAR_2, struct sk_buff *VAR_3,
       struct batadv_hard_iface *VAR_4,
       unsigned short VAR_5)
{
 struct batadv_bla_backbone_gw *VAR_6;
 struct ethhdr *VAR_7;
 bool VAR_8;

 VAR_7 = FUNC_4(VAR_3);




 if (!FUNC_2(VAR_7->h_source,
    VAR_2->bla.loopdetect_addr))
  return 0;




 if (FUNC_3(VAR_2->bla.loopdetect_lasttime,
     VAR_0))
  return 1;

 VAR_6 = FUNC_1(VAR_2,
       VAR_4->net_dev->dev_addr,
       VAR_5, 1);
 if (FUNC_6(!VAR_6))
  return 1;

 VAR_8 = FUNC_5(VAR_1, &VAR_6->report_work);




 if (!VAR_8)
  FUNC_0(VAR_6);

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct batadv_bla_backbone_gw {int dummy; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct batadv_bla_backbone_gw*) ;
 int FUNC_1 (struct batadv_priv*,int *,unsigned short,struct batadv_bla_backbone_gw*) ;
 struct batadv_bla_backbone_gw* FUNC_2 (struct batadv_priv*,int *,unsigned short,int) ;
 int FUNC_3 (struct batadv_priv*,int *,unsigned short,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct batadv_priv *VAR_1,
    struct batadv_hard_iface *VAR_2,
    u8 *VAR_3, u8 *VAR_4,
    unsigned short VAR_5)
{
 struct batadv_bla_backbone_gw *VAR_6;



 VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_5,
       0);

 if (FUNC_5(!VAR_6))
  return 1;


 FUNC_1(VAR_1, VAR_4, VAR_5, VAR_6);
 if (FUNC_4(VAR_3, VAR_2->net_dev->dev_addr))
  FUNC_3(VAR_1, VAR_4, VAR_5,
          VAR_0);



 FUNC_0(VAR_6);
 return 1;
}

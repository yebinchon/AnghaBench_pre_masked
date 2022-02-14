
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct batadv_orig_node {int orig; TYPE_1__* bat_priv; } ;
struct batadv_bla_backbone_gw {int dummy; } ;
struct TYPE_2__ {int bridge_loop_avoidance; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct batadv_bla_backbone_gw*) ;
 struct batadv_bla_backbone_gw* FUNC_2 (TYPE_1__*,int ,unsigned short) ;
 unsigned short FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

bool FUNC_5(struct sk_buff *VAR_1,
          struct batadv_orig_node *VAR_2, int VAR_3)
{
 struct batadv_bla_backbone_gw *VAR_4;
 unsigned short VAR_5;

 if (!FUNC_0(&VAR_2->bat_priv->bridge_loop_avoidance))
  return 0;


 if (!FUNC_4(VAR_1, VAR_3 + VAR_0))
  return 0;

 VAR_5 = FUNC_3(VAR_1, VAR_3);


 VAR_4 = FUNC_2(VAR_2->bat_priv,
      VAR_2->orig, VAR_5);
 if (!VAR_4)
  return 0;

 FUNC_1(VAR_4);
 return 1;
}

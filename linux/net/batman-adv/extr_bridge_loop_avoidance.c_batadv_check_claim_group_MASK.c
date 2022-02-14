
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ethhdr {int * h_source; } ;
struct batadv_bla_claim_dst {int type; scalar_t__ group; } ;
struct TYPE_3__ {struct batadv_bla_claim_dst claim_dest; } ;
struct batadv_priv {TYPE_1__ bla; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_hard_iface {TYPE_2__* net_dev; } ;
struct TYPE_4__ {int dev_addr; } ;






 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,scalar_t__) ;
 struct batadv_orig_node* FUNC_2 (struct batadv_priv*,int *) ;
 int FUNC_3 (struct batadv_orig_node*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct batadv_priv *VAR_1,
        struct batadv_hard_iface *VAR_2,
        u8 *VAR_3, u8 *VAR_4,
        struct ethhdr *VAR_5)
{
 u8 *VAR_6;
 struct batadv_orig_node *VAR_7;
 struct batadv_bla_claim_dst *VAR_8, *VAR_9;

 VAR_8 = (struct batadv_bla_claim_dst *)VAR_4;
 VAR_9 = &VAR_1->bla.claim_dest;




 switch (VAR_8->type) {
 case 130:
  VAR_6 = VAR_3;
  break;
 case 129:
 case 131:
 case 128:
  VAR_6 = VAR_5->h_source;
  break;
 default:
  return 0;
 }


 if (FUNC_0(VAR_6, VAR_2->net_dev->dev_addr))
  return 0;


 if (VAR_8->group == VAR_9->group)
  return 2;


 VAR_7 = FUNC_2(VAR_1, VAR_6);




 if (!VAR_7)
  return 1;


 if (FUNC_4(VAR_8->group) > FUNC_4(VAR_9->group)) {
  FUNC_1(VAR_0, VAR_1,
      "taking other backbones claim group: %#.4x\n",
      FUNC_4(VAR_8->group));
  VAR_9->group = VAR_8->group;
 }

 FUNC_3(VAR_7);

 return 2;
}

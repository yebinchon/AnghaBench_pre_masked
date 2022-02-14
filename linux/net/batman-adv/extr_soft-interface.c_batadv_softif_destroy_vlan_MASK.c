
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_softif_vlan {int vid; } ;
struct batadv_priv {TYPE_1__* soft_iface; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (struct batadv_softif_vlan*) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_softif_vlan*) ;
 int FUNC_2 (struct batadv_priv*,int ,int ,char*,int) ;

__attribute__((used)) static void FUNC_3(struct batadv_priv *VAR_0,
           struct batadv_softif_vlan *VAR_1)
{



 FUNC_2(VAR_0, VAR_0->soft_iface->dev_addr,
          VAR_1->vid, "vlan interface destroyed", 0);

 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_1);
}

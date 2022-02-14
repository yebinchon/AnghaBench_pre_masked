
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct batadv_softif_vlan {int dummy; } ;
struct batadv_priv {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct batadv_priv*,struct batadv_softif_vlan*) ;
 struct batadv_softif_vlan* FUNC_2 (struct batadv_priv*,int ) ;
 int FUNC_3 (struct batadv_softif_vlan*) ;
 int FUNC_4 (struct net_device*) ;
 struct batadv_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

void FUNC_7(struct net_device *VAR_1)
{
 struct batadv_priv *VAR_2 = FUNC_5(VAR_1);
 struct batadv_softif_vlan *VAR_3;

 FUNC_0();


 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3) {
  FUNC_1(VAR_2, VAR_3);
  FUNC_3(VAR_3);
 }

 FUNC_4(VAR_1);
 FUNC_6(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {int dummy; } ;


 int FUNC_0 (struct batadv_priv*,struct batadv_hard_iface*,struct batadv_hard_iface*) ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 struct batadv_hard_iface* FUNC_2 (struct batadv_priv*) ;
 struct batadv_priv* FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct batadv_priv *VAR_1 = FUNC_3(VAR_0);
 struct batadv_hard_iface *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return;




 FUNC_0(VAR_1, VAR_2, VAR_2);
 FUNC_1(VAR_2);
}

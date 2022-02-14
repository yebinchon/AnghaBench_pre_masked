
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {int soft_iface; } ;


 int FUNC_0 (struct batadv_hard_iface*) ;
 int FUNC_1 (struct batadv_priv*) ;
 struct batadv_priv* FUNC_2 (int ) ;

int FUNC_3(struct batadv_hard_iface *VAR_0)
{
 struct batadv_priv *VAR_1 = FUNC_2(VAR_0->soft_iface);

 FUNC_0(VAR_0);
 FUNC_1(VAR_1);

 return 0;
}

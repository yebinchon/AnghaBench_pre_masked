
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {int soft_iface; } ;


 int FUNC_0 (struct batadv_hard_iface*) ;
 struct batadv_hard_iface* FUNC_1 (struct batadv_priv*) ;
 int FUNC_2 (struct batadv_hard_iface*) ;
 struct batadv_priv* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct batadv_hard_iface *VAR_0)
{
 struct batadv_priv *VAR_1 = FUNC_3(VAR_0->soft_iface);
 struct batadv_hard_iface *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != VAR_0)
  goto out;

 FUNC_2(VAR_0);
out:
 if (VAR_2)
  FUNC_0(VAR_2);
}

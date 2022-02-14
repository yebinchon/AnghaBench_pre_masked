
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {int dummy; } ;


 int FUNC_0 (struct batadv_priv*,struct batadv_hard_iface*,struct batadv_hard_iface*) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_hard_iface*) ;
 struct batadv_hard_iface* FUNC_3 (struct batadv_priv*) ;

__attribute__((used)) static void FUNC_4(struct batadv_priv *VAR_0,
       struct batadv_hard_iface *VAR_1)
{
 struct batadv_hard_iface *VAR_2;

 VAR_2 = FUNC_3(VAR_0);
 if (!VAR_2)
  goto out;

 FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_0, VAR_2, VAR_1);
out:
 if (VAR_2)
  FUNC_2(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_priv {int dummy; } ;
struct batadv_hard_iface {scalar_t__ if_status; int soft_iface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct batadv_hard_iface*) ;
 struct batadv_hard_iface* FUNC_1 (struct batadv_priv*) ;
 int FUNC_2 (struct batadv_hard_iface*,struct batadv_hard_iface*) ;
 struct batadv_priv* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct batadv_hard_iface *VAR_2)
{
 struct batadv_priv *VAR_3 = FUNC_3(VAR_2->soft_iface);
 struct batadv_hard_iface *VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 if (VAR_4) {
  FUNC_2(VAR_4, VAR_2);
  FUNC_0(VAR_4);
 }





 if (VAR_2->if_status == VAR_1)
  VAR_2->if_status = VAR_0;
}

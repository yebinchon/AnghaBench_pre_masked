
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct batadv_softif_vlan {int ap_isolation; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 struct batadv_softif_vlan* FUNC_1 (struct batadv_priv*,int ) ;
 int FUNC_2 (struct batadv_softif_vlan*) ;
 int FUNC_3 (struct nlattr*) ;

__attribute__((used)) static int FUNC_4(struct nlattr *VAR_2,
      struct batadv_priv *VAR_3)
{
 struct batadv_softif_vlan *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_4)
  return -VAR_1;

 FUNC_0(&VAR_4->ap_isolation, !!FUNC_3(VAR_2));
 FUNC_2(VAR_4);

 return 0;
}

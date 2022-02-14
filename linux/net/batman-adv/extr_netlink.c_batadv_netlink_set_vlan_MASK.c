
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {struct nlattr** attrs; struct batadv_softif_vlan** user_ptr; } ;
struct batadv_softif_vlan {int ap_isolation; } ;
struct batadv_priv {int ap_isolation; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct batadv_softif_vlan*,struct batadv_softif_vlan*) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct genl_info *VAR_2)
{
 struct batadv_softif_vlan *VAR_3 = VAR_2->user_ptr[1];
 struct batadv_priv *VAR_4 = VAR_2->user_ptr[0];
 struct nlattr *VAR_5;

 if (VAR_2->attrs[VAR_0]) {
  VAR_5 = VAR_2->attrs[VAR_0];

  FUNC_0(&VAR_3->ap_isolation, !!FUNC_2(VAR_5));
 }

 FUNC_1(VAR_4, VAR_3);

 return 0;
}

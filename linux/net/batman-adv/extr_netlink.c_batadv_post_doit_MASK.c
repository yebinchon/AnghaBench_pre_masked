
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_ops {int internal_flags; } ;
struct genl_info {struct batadv_softif_vlan** user_ptr; } ;
struct batadv_softif_vlan {int soft_iface; } ;
struct batadv_priv {int soft_iface; } ;
struct batadv_hard_iface {int soft_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct batadv_softif_vlan*) ;
 int FUNC_1 (struct batadv_softif_vlan*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct genl_ops *VAR_3, struct sk_buff *VAR_4,
        struct genl_info *VAR_5)
{
 struct batadv_hard_iface *VAR_6;
 struct batadv_softif_vlan *VAR_7;
 struct batadv_priv *VAR_8;

 if (VAR_3->internal_flags & VAR_0 &&
     VAR_5->user_ptr[1]) {
  VAR_6 = VAR_5->user_ptr[1];

  FUNC_0(VAR_6);
 }

 if (VAR_3->internal_flags & VAR_2 && VAR_5->user_ptr[1]) {
  VAR_7 = VAR_5->user_ptr[1];
  FUNC_1(VAR_7);
 }

 if (VAR_3->internal_flags & VAR_1 && VAR_5->user_ptr[0]) {
  VAR_8 = VAR_5->user_ptr[0];
  FUNC_2(VAR_8->soft_iface);
 }
}

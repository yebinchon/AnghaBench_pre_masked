
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int soft_iface; } ;
struct net {int dummy; } ;
struct genl_ops {int internal_flags; } ;
struct genl_info {struct net_device** user_ptr; } ;
struct batadv_softif_vlan {int soft_iface; } ;
struct batadv_priv {int soft_iface; } ;
struct batadv_hard_iface {int soft_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int) ;
 struct net_device* FUNC_3 (struct net_device*,struct net*,struct genl_info*) ;
 struct net_device* FUNC_4 (struct net*,struct genl_info*) ;
 struct net_device* FUNC_5 (struct net_device*,struct net*,struct genl_info*) ;
 int FUNC_6 (int ) ;
 struct net* FUNC_7 (struct genl_info*) ;
 int FUNC_8 (int) ;
 struct net_device* FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(const struct genl_ops *VAR_4, struct sk_buff *VAR_5,
      struct genl_info *VAR_6)
{
 struct net *VAR_7 = FUNC_7(VAR_6);
 struct batadv_hard_iface *VAR_8;
 struct batadv_priv *VAR_9 = ((void*)0);
 struct batadv_softif_vlan *VAR_10;
 struct net_device *VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 int VAR_14;

 VAR_12 = VAR_0 | VAR_2;
 if (FUNC_2(FUNC_8(VAR_4->internal_flags & VAR_12) > 1))
  return -VAR_3;

 VAR_13 = VAR_0 | VAR_2;
 if (FUNC_2((VAR_4->internal_flags & VAR_13) &&
      (~VAR_4->internal_flags & VAR_1)))
  return -VAR_3;

 if (VAR_4->internal_flags & VAR_1) {
  VAR_11 = FUNC_4(VAR_7, VAR_6);
  if (FUNC_0(VAR_11))
   return FUNC_1(VAR_11);

  VAR_9 = FUNC_9(VAR_11);
  VAR_6->user_ptr[0] = VAR_9;
 }

 if (VAR_4->internal_flags & VAR_0) {
  VAR_8 = FUNC_3(VAR_9, VAR_7, VAR_6);
  if (FUNC_0(VAR_8)) {
   VAR_14 = FUNC_1(VAR_8);
   goto err_put_softif;
  }

  VAR_6->user_ptr[1] = VAR_8;
 }

 if (VAR_4->internal_flags & VAR_2) {
  VAR_10 = FUNC_5(VAR_9, VAR_7, VAR_6);
  if (FUNC_0(VAR_10)) {
   VAR_14 = FUNC_1(VAR_10);
   goto err_put_softif;
  }

  VAR_6->user_ptr[1] = VAR_10;
 }

 return 0;

err_put_softif:
 if (VAR_9)
  FUNC_6(VAR_9->soft_iface);

 return VAR_14;
}

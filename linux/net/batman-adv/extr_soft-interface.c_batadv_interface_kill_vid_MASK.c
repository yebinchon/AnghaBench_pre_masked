
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct batadv_softif_vlan {int dummy; } ;
struct batadv_priv {int dummy; } ;
typedef scalar_t__ __be16 ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct batadv_priv*,struct batadv_softif_vlan*) ;
 struct batadv_softif_vlan* FUNC_1 (struct batadv_priv*,unsigned short) ;
 int FUNC_2 (struct batadv_softif_vlan*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct batadv_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4, __be16 VAR_5,
         unsigned short VAR_6)
{
 struct batadv_priv *VAR_7 = FUNC_4(VAR_4);
 struct batadv_softif_vlan *VAR_8;




 if (VAR_5 != FUNC_3(VAR_3))
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_7, VAR_6 | VAR_0);
 if (!VAR_8)
  return -VAR_2;

 FUNC_0(VAR_7, VAR_8);


 FUNC_2(VAR_8);

 return 0;
}

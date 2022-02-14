
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net {int dummy; } ;
struct genl_info {int * attrs; } ;
struct batadv_softif_vlan {int dummy; } ;
struct batadv_priv {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct batadv_softif_vlan* FUNC_0 (int ) ;
 struct batadv_softif_vlan* FUNC_1 (struct batadv_priv*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct batadv_softif_vlan *
FUNC_3(struct batadv_priv *VAR_4, struct net *VAR_5,
     struct genl_info *VAR_6)
{
 struct batadv_softif_vlan *VAR_7;
 u16 VAR_8;

 if (!VAR_6->attrs[VAR_0])
  return FUNC_0(-VAR_2);

 VAR_8 = FUNC_2(VAR_6->attrs[VAR_0]);

 VAR_7 = FUNC_1(VAR_4, VAR_8 | VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_3);

 return VAR_7;
}

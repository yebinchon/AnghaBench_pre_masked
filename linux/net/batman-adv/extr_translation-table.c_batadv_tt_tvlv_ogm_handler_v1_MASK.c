
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct batadv_tvlv_tt_vlan_data {int dummy; } ;
struct batadv_tvlv_tt_data {int ttvn; int num_vlan; } ;
struct batadv_tvlv_tt_change {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_tvlv_tt_vlan_data*,int,struct batadv_tvlv_tt_change*,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct batadv_priv *VAR_0,
       struct batadv_orig_node *VAR_1,
       u8 VAR_2, void *VAR_3,
       u16 VAR_4)
{
 struct batadv_tvlv_tt_vlan_data *VAR_5;
 struct batadv_tvlv_tt_change *VAR_6;
 struct batadv_tvlv_tt_data *VAR_7;
 u16 VAR_8, VAR_9;

 if (VAR_4 < sizeof(*VAR_7))
  return;

 VAR_7 = (struct batadv_tvlv_tt_data *)VAR_3;
 VAR_4 -= sizeof(*VAR_7);

 VAR_9 = FUNC_2(VAR_7->num_vlan);

 if (VAR_4 < sizeof(*VAR_5) * VAR_9)
  return;

 VAR_5 = (struct batadv_tvlv_tt_vlan_data *)(VAR_7 + 1);
 VAR_6 = (struct batadv_tvlv_tt_change *)(VAR_5 + VAR_9);
 VAR_4 -= sizeof(*VAR_5) * VAR_9;

 VAR_8 = FUNC_0(VAR_4);

 FUNC_1(VAR_0, VAR_1, VAR_5, VAR_9, VAR_6,
         VAR_8, VAR_7->ttvn);
}

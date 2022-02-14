
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_tt_local_entry {int dummy; } ;
struct batadv_tt_global_entry {int dummy; } ;
struct batadv_softif_vlan {int ap_isolation; } ;
struct batadv_priv {int dummy; } ;


 scalar_t__ FUNC_0 (struct batadv_tt_local_entry*,struct batadv_tt_global_entry*) ;
 int FUNC_1 (int *) ;
 struct batadv_softif_vlan* FUNC_2 (struct batadv_priv*,unsigned short) ;
 int FUNC_3 (struct batadv_softif_vlan*) ;
 int FUNC_4 (struct batadv_tt_global_entry*) ;
 struct batadv_tt_global_entry* FUNC_5 (struct batadv_priv*,int *,unsigned short) ;
 int FUNC_6 (struct batadv_tt_local_entry*) ;
 struct batadv_tt_local_entry* FUNC_7 (struct batadv_priv*,int *,unsigned short) ;

bool FUNC_8(struct batadv_priv *VAR_0, u8 *VAR_1, u8 *VAR_2,
      unsigned short VAR_3)
{
 struct batadv_tt_local_entry *VAR_4;
 struct batadv_tt_global_entry *VAR_5;
 struct batadv_softif_vlan *VAR_6;
 bool VAR_7 = 0;

 VAR_6 = FUNC_2(VAR_0, VAR_3);
 if (!VAR_6)
  return 0;

 if (!FUNC_1(&VAR_6->ap_isolation))
  goto vlan_put;

 VAR_4 = FUNC_7(VAR_0, VAR_2, VAR_3);
 if (!VAR_4)
  goto vlan_put;

 VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_3);
 if (!VAR_5)
  goto local_entry_put;

 if (FUNC_0(VAR_4, VAR_5))
  VAR_7 = 1;

 FUNC_4(VAR_5);
local_entry_put:
 FUNC_6(VAR_4);
vlan_put:
 FUNC_3(VAR_6);
 return VAR_7;
}

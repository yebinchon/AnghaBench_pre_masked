
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct batadv_tvlv_tt_vlan_data {int dummy; } ;
struct batadv_tvlv_tt_change {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int orig; int tt_lock; int capa_initialized; int last_ttvn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,int ,int,int,int ) ;
 int FUNC_2 (struct batadv_priv*,struct batadv_orig_node*,int,struct batadv_tvlv_tt_vlan_data*,int ,int) ;
 int FUNC_3 (struct batadv_orig_node*,struct batadv_tvlv_tt_vlan_data*,int ) ;
 int FUNC_4 (struct batadv_priv*,struct batadv_orig_node*) ;
 int FUNC_5 (struct batadv_priv*,struct batadv_orig_node*,int ,int,struct batadv_tvlv_tt_change*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct batadv_priv *VAR_2,
      struct batadv_orig_node *VAR_3,
      const void *VAR_4, u16 VAR_5,
      struct batadv_tvlv_tt_change *VAR_6,
      u16 VAR_7, u8 VAR_8)
{
 u8 VAR_9 = (u8)FUNC_0(&VAR_3->last_ttvn);
 struct batadv_tvlv_tt_vlan_data *VAR_10;
 bool VAR_11 = 1;
 bool VAR_12;

 VAR_10 = (struct batadv_tvlv_tt_vlan_data *)VAR_4;
 VAR_12 = FUNC_8(VAR_1,
          &VAR_3->capa_initialized);




 if ((!VAR_12 && VAR_8 == 1) || VAR_8 - VAR_9 == 1) {





  if (!VAR_7) {
   VAR_11 = 0;
   goto request_table;
  }

  FUNC_6(&VAR_3->tt_lock);

  FUNC_5(VAR_2, VAR_3, VAR_7,
      VAR_8, VAR_6);





  FUNC_4(VAR_2, VAR_3);

  FUNC_7(&VAR_3->tt_lock);
  if (!FUNC_3(VAR_3, VAR_10,
      VAR_5))
   goto request_table;
 } else {



  if (!VAR_12 || VAR_8 != VAR_9 ||
      !FUNC_3(VAR_3, VAR_10,
      VAR_5)) {
request_table:
   FUNC_1(VAR_0, VAR_2,
       "TT inconsistency for %pM. Need to retrieve the correct information (ttvn: %u last_ttvn: %u num_changes: %u)\n",
       VAR_3->orig, VAR_8, VAR_9,
       VAR_7);
   FUNC_2(VAR_2, VAR_3, VAR_8,
            VAR_10, VAR_5,
            VAR_11);
   return;
  }
 }
}

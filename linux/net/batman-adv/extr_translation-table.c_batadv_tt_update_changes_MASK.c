
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct batadv_tvlv_tt_change {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int last_ttvn; } ;


 int FUNC_0 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_tvlv_tt_change*,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_tvlv_tt_change*,int ) ;

__attribute__((used)) static void FUNC_4(struct batadv_priv *VAR_0,
         struct batadv_orig_node *VAR_1,
         u16 VAR_2, u8 VAR_3,
         struct batadv_tvlv_tt_change *VAR_4)
{
 FUNC_0(VAR_0, VAR_1, VAR_4,
      VAR_2, VAR_3);

 FUNC_3(VAR_0, VAR_1, VAR_4,
       FUNC_2(VAR_2));
 FUNC_1(&VAR_1->last_ttvn, VAR_3);
}

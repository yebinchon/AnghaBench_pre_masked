
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct batadv_tvlv_tt_change {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int last_ttvn; int tt_buff_lock; int * tt_buff; scalar_t__ tt_buff_len; } ;


 int FUNC_0 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_tvlv_tt_change*,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 struct batadv_orig_node* FUNC_2 (struct batadv_priv*,int *) ;
 int FUNC_3 (struct batadv_orig_node*) ;
 int FUNC_4 (struct batadv_priv*,struct batadv_orig_node*,int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct batadv_priv *VAR_0,
      struct batadv_tvlv_tt_change *VAR_1,
      u8 VAR_2, u8 *VAR_3,
      u16 VAR_4)
{
 struct batadv_orig_node *VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_3);
 if (!VAR_5)
  goto out;


 FUNC_4(VAR_0, VAR_5, -1,
      "Received full table");

 FUNC_0(VAR_0, VAR_5, VAR_1, VAR_4,
      VAR_2);

 FUNC_6(&VAR_5->tt_buff_lock);
 FUNC_5(VAR_5->tt_buff);
 VAR_5->tt_buff_len = 0;
 VAR_5->tt_buff = ((void*)0);
 FUNC_7(&VAR_5->tt_buff_lock);

 FUNC_1(&VAR_5->last_ttvn, VAR_2);

out:
 if (VAR_5)
  FUNC_3(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_tt_global_entry {int orig_list_count; } ;
struct batadv_priv {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct batadv_tt_global_entry*) ;
 struct batadv_tt_global_entry* FUNC_2 (struct batadv_priv*,int const*,unsigned short) ;

int FUNC_3(struct batadv_priv *VAR_0,
    const u8 *VAR_1, unsigned short VAR_2)
{
 struct batadv_tt_global_entry *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_0(&VAR_3->orig_list_count);
 FUNC_1(VAR_3);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct batadv_tt_orig_list_entry {int flags; } ;
struct batadv_tt_global_entry {int dummy; } ;
struct batadv_orig_node {int dummy; } ;


 struct batadv_tt_orig_list_entry* FUNC_0 (struct batadv_tt_global_entry const*,struct batadv_orig_node const*) ;
 int FUNC_1 (struct batadv_tt_orig_list_entry*) ;

__attribute__((used)) static bool
FUNC_2(const struct batadv_tt_global_entry *VAR_0,
    const struct batadv_orig_node *VAR_1,
    u8 *VAR_2)
{
 struct batadv_tt_orig_list_entry *VAR_3;
 bool VAR_4 = 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3) {
  VAR_4 = 1;

  if (VAR_2)
   *VAR_2 = VAR_3->flags;

  FUNC_1(VAR_3);
 }

 return VAR_4;
}

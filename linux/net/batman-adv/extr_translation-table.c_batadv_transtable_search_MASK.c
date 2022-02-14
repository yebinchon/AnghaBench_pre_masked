
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct batadv_tt_orig_list_entry {struct batadv_orig_node* orig_node; } ;
struct TYPE_2__ {int flags; } ;
struct batadv_tt_local_entry {TYPE_1__ common; } ;
struct batadv_tt_global_entry {int dummy; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int refcount; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct batadv_tt_local_entry*,struct batadv_tt_global_entry*) ;
 struct batadv_tt_orig_list_entry* FUNC_1 (struct batadv_priv*,struct batadv_tt_global_entry*) ;
 int FUNC_2 (struct batadv_tt_global_entry*) ;
 struct batadv_tt_global_entry* FUNC_3 (struct batadv_priv*,int const*,unsigned short) ;
 int FUNC_4 (struct batadv_tt_local_entry*) ;
 struct batadv_tt_local_entry* FUNC_5 (struct batadv_priv*,int const*,unsigned short) ;
 scalar_t__ FUNC_6 (struct batadv_priv*,unsigned short) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

struct batadv_orig_node *FUNC_10(struct batadv_priv *VAR_1,
        const u8 *VAR_2,
        const u8 *VAR_3,
        unsigned short VAR_4)
{
 struct batadv_tt_local_entry *VAR_5 = ((void*)0);
 struct batadv_tt_global_entry *VAR_6 = ((void*)0);
 struct batadv_orig_node *VAR_7 = ((void*)0);
 struct batadv_tt_orig_list_entry *VAR_8;

 if (VAR_2 && FUNC_6(VAR_1, VAR_4)) {
  VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_4);
  if (!VAR_5 ||
      (VAR_5->common.flags & VAR_0))
   goto out;
 }

 VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_4);
 if (!VAR_6)
  goto out;




 if (VAR_5 &&
     FUNC_0(VAR_5, VAR_6))
  goto out;

 FUNC_8();
 VAR_8 = FUNC_1(VAR_1, VAR_6);

 if (VAR_8)
  VAR_7 = VAR_8->orig_node;
 if (VAR_7 && !FUNC_7(&VAR_7->refcount))
  VAR_7 = ((void*)0);
 FUNC_9();

out:
 if (VAR_6)
  FUNC_2(VAR_6);
 if (VAR_5)
  FUNC_4(VAR_5);

 return VAR_7;
}

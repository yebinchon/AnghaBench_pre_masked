
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct batadv_tt_orig_list_entry {int ttvn; int list; int refcount; void* flags; struct batadv_orig_node* orig_node; } ;
struct TYPE_2__ {int vid; } ;
struct batadv_tt_global_entry {int list_lock; int orig_list_count; int orig_list; TYPE_1__ common; } ;
struct batadv_orig_node {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct batadv_tt_orig_list_entry* FUNC_2 (struct batadv_tt_global_entry*,struct batadv_orig_node*) ;
 int FUNC_3 (struct batadv_orig_node*,int ) ;
 int FUNC_4 (struct batadv_tt_global_entry*) ;
 int VAR_1 ;
 int FUNC_5 (struct batadv_tt_orig_list_entry*) ;
 int FUNC_6 (int *,int *) ;
 struct batadv_tt_orig_list_entry* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void
FUNC_12(struct batadv_tt_global_entry *VAR_2,
    struct batadv_orig_node *VAR_3, int VAR_4,
    u8 VAR_5)
{
 struct batadv_tt_orig_list_entry *VAR_6;

 FUNC_10(&VAR_2->list_lock);

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6) {



  VAR_6->ttvn = VAR_4;
  VAR_6->flags = VAR_5;
  goto sync_flags;
 }

 VAR_6 = FUNC_7(VAR_1, VAR_0);
 if (!VAR_6)
  goto out;

 FUNC_0(&VAR_6->list);
 FUNC_8(&VAR_3->refcount);
 FUNC_3(VAR_3, VAR_2->common.vid);
 VAR_6->orig_node = VAR_3;
 VAR_6->ttvn = VAR_4;
 VAR_6->flags = VAR_5;
 FUNC_9(&VAR_6->refcount);

 FUNC_8(&VAR_6->refcount);
 FUNC_6(&VAR_6->list,
      &VAR_2->orig_list);
 FUNC_1(&VAR_2->orig_list_count);

sync_flags:
 FUNC_4(VAR_2);
out:
 if (VAR_6)
  FUNC_5(VAR_6);

 FUNC_11(&VAR_2->list_lock);
}

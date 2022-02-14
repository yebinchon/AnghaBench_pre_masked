
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_tt_orig_list_entry {int list; int orig_node; } ;
struct TYPE_2__ {int vid; } ;
struct batadv_tt_global_entry {int orig_list_count; TYPE_1__ common; int list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct batadv_tt_orig_list_entry*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct batadv_tt_global_entry *VAR_0,
     struct batadv_tt_orig_list_entry *VAR_1)
{
 FUNC_4(&VAR_0->list_lock);

 FUNC_1(VAR_1->orig_node,
      VAR_0->common.vid);
 FUNC_0(&VAR_0->orig_list_count);



 FUNC_3(&VAR_1->list);
 FUNC_2(VAR_1);
}

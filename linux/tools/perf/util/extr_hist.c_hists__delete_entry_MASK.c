
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rb_root_cached {int dummy; } ;
struct hists {int nr_non_filtered_entries; int nr_entries; struct rb_root_cached entries; struct rb_root_cached* entries_in; struct rb_root_cached entries_collapsed; } ;
struct hist_entry {int filtered; int rb_node; int rb_node_in; TYPE_1__* parent_he; } ;
struct TYPE_2__ {struct rb_root_cached hroot_out; struct rb_root_cached hroot_in; } ;


 int FUNC_0 (struct hist_entry*) ;
 scalar_t__ FUNC_1 (struct hists*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct rb_root_cached*) ;

__attribute__((used)) static void FUNC_3(struct hists *VAR_1, struct hist_entry *VAR_2)
{
 struct rb_root_cached *VAR_3;
 struct rb_root_cached *VAR_4;

 if (VAR_2->parent_he) {
  VAR_3 = &VAR_2->parent_he->hroot_in;
  VAR_4 = &VAR_2->parent_he->hroot_out;
 } else {
  if (FUNC_1(VAR_1, VAR_0))
   VAR_3 = &VAR_1->entries_collapsed;
  else
   VAR_3 = VAR_1->entries_in;
  VAR_4 = &VAR_1->entries;
 }

 FUNC_2(&VAR_2->rb_node_in, VAR_3);
 FUNC_2(&VAR_2->rb_node, VAR_4);

 --VAR_1->nr_entries;
 if (!VAR_2->filtered)
  --VAR_1->nr_non_filtered_entries;

 FUNC_0(VAR_2);
}

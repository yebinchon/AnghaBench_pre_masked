
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u64 ;
struct rb_node {int dummy; } ;
struct hist_browser {void* nr_hierarchy_entries; void* nr_non_filtered_entries; int min_pcnt; TYPE_1__* hists; } ;
struct TYPE_4__ {int report_hierarchy; } ;
struct TYPE_3__ {void* nr_non_filtered_entries; int entries; } ;


 struct rb_node* FUNC_0 (struct rb_node*,int ) ;
 struct rb_node* FUNC_1 (int *) ;
 struct rb_node* FUNC_2 (struct rb_node*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct hist_browser *VAR_1)
{
 u64 VAR_2 = 0;
 struct rb_node *VAR_3 = FUNC_1(&VAR_1->hists->entries);

 if (VAR_1->min_pcnt == 0 && !VAR_0.report_hierarchy) {
  VAR_1->nr_non_filtered_entries = VAR_1->hists->nr_non_filtered_entries;
  return;
 }

 while ((VAR_3 = FUNC_0(VAR_3, VAR_1->min_pcnt)) != ((void*)0)) {
  VAR_2++;
  VAR_3 = FUNC_2(VAR_3);
 }

 VAR_1->nr_non_filtered_entries = VAR_2;
 VAR_1->nr_hierarchy_entries = VAR_2;
}

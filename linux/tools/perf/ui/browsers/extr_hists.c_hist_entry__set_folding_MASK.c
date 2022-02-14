
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int nr_rows; int has_no_entry; scalar_t__ leaf; int depth; scalar_t__ filtered; } ;
struct hist_browser {double min_pcnt; int nr_callchain_rows; int nr_hierarchy_entries; } ;


 int FUNC_0 (struct hist_entry*,struct hist_browser*,int) ;
 double FUNC_1 (struct hist_entry*) ;
 int FUNC_2 (struct hist_entry*,double) ;

__attribute__((used)) static void FUNC_3(struct hist_entry *VAR_0,
        struct hist_browser *VAR_1, bool VAR_2)
{
 double VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_0->filtered || VAR_3 < VAR_1->min_pcnt)
  return;

 FUNC_0(VAR_0, VAR_1, VAR_2);

 if (!VAR_0->depth || VAR_2)
  VAR_1->nr_hierarchy_entries++;
 if (VAR_0->leaf)
  VAR_1->nr_callchain_rows += VAR_0->nr_rows;
 else if (VAR_2 && !FUNC_2(VAR_0, VAR_1->min_pcnt)) {
  VAR_1->nr_hierarchy_entries++;
  VAR_0->has_no_entry = 1;
  VAR_0->nr_rows = 1;
 } else
  VAR_0->has_no_entry = 0;
}

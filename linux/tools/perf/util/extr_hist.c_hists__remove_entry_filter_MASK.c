
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nr_non_filtered_samples; } ;
struct hists {TYPE_1__ stats; } ;
struct TYPE_7__ {scalar_t__ nr_events; } ;
struct hist_entry {int filtered; int unfolded; int has_no_entry; TYPE_3__ stat; scalar_t__ nr_rows; scalar_t__ row_offset; struct hist_entry* parent_he; } ;
typedef enum hist_filter { ____Placeholder_hist_filter } hist_filter ;
struct TYPE_6__ {scalar_t__ report_hierarchy; } ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (struct hists*,struct hist_entry*) ;
 int FUNC_2 (struct hists*,struct hist_entry*) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct hists *VAR_1, struct hist_entry *VAR_2,
           enum hist_filter VAR_3)
{
 VAR_2->filtered &= ~(1 << VAR_3);

 if (VAR_0.report_hierarchy) {
  struct hist_entry *VAR_4 = VAR_2->parent_he;

  while (VAR_4) {
   FUNC_0(&VAR_4->stat, &VAR_2->stat);

   VAR_4->filtered &= ~(1 << VAR_3);

   if (VAR_4->filtered)
    goto next;


   VAR_4->unfolded = 0;
   VAR_4->has_no_entry = 0;
   VAR_4->row_offset = 0;
   VAR_4->nr_rows = 0;
next:
   VAR_4 = VAR_4->parent_he;
  }
 }

 if (VAR_2->filtered)
  return;


 VAR_2->unfolded = 0;
 VAR_2->has_no_entry = 0;
 VAR_2->row_offset = 0;
 VAR_2->nr_rows = 0;

 VAR_1->stats.nr_non_filtered_samples += VAR_2->stat.nr_events;

 FUNC_2(VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_2);
}

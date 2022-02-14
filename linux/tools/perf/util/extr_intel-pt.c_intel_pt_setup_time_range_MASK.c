
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_pt_queue {int sel_start; scalar_t__ sel_timestamp; scalar_t__ sel_idx; } ;
struct intel_pt {TYPE_1__* time_ranges; int range_cnt; } ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;



__attribute__((used)) static void FUNC_0(struct intel_pt *VAR_0,
          struct intel_pt_queue *VAR_1)
{
 if (!VAR_0->range_cnt)
  return;

 VAR_1->sel_timestamp = VAR_0->time_ranges[0].start;
 VAR_1->sel_idx = 0;

 if (VAR_1->sel_timestamp) {
  VAR_1->sel_start = 1;
 } else {
  VAR_1->sel_timestamp = VAR_0->time_ranges[0].end;
  VAR_1->sel_start = 0;
 }
}

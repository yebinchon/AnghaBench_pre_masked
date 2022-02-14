
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_pt_queue {int sel_start; size_t sel_idx; int sel_timestamp; struct intel_pt* pt; } ;
struct intel_pt {int range_cnt; TYPE_1__* time_ranges; } ;
struct TYPE_2__ {int start; int end; } ;



__attribute__((used)) static bool FUNC_0(struct intel_pt_queue *VAR_0)
{
 struct intel_pt *VAR_1 = VAR_0->pt;

 if (VAR_0->sel_start) {

  VAR_0->sel_start = 0;
  VAR_0->sel_timestamp = VAR_1->time_ranges[VAR_0->sel_idx].end;
  return 1;
 } else if (VAR_0->sel_idx + 1 < VAR_1->range_cnt) {

  VAR_0->sel_start = 1;
  VAR_0->sel_idx += 1;
  VAR_0->sel_timestamp = VAR_1->time_ranges[VAR_0->sel_idx].start;
  return 1;
 }


 return 0;
}

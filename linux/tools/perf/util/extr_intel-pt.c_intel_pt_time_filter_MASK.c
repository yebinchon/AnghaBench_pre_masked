
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct intel_pt_queue {scalar_t__ timestamp; scalar_t__ sel_timestamp; int have_sample; int switch_state; int decoder; int pt; scalar_t__ sync_switch; scalar_t__ sel_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,struct intel_pt_queue*) ;
 int FUNC_2 (struct intel_pt_queue*) ;

__attribute__((used)) static int FUNC_3(struct intel_pt_queue *VAR_2, u64 *VAR_3)
{
 int VAR_4;

 while (1) {
  if (VAR_2->sel_start) {
   if (VAR_2->timestamp >= VAR_2->sel_timestamp) {

    FUNC_2(VAR_2);
    if (!VAR_2->sel_timestamp) {

     return 0;
    }

    continue;
   }

   VAR_2->have_sample = 0;
   if (VAR_2->sel_timestamp > *VAR_3) {
    if (VAR_2->sync_switch) {
     FUNC_1(VAR_2->pt, VAR_2);
     VAR_2->switch_state = VAR_1;
    }
    *VAR_3 = VAR_2->sel_timestamp;
    VAR_4 = FUNC_0(VAR_2->decoder,
           VAR_2->sel_timestamp);
    if (VAR_4)
     return VAR_4;
   }
   return 0;
  } else if (VAR_2->timestamp > VAR_2->sel_timestamp) {

   if (!FUNC_2(VAR_2)) {

    VAR_2->have_sample = 0;
    VAR_2->switch_state = VAR_0;
    return 1;
   }

   continue;
  } else {

   return 0;
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cs_etm_traceid_queue {int last_branch_pos; int packet; int prev_packet; struct branch_stack* last_branch_rb; } ;
struct cs_etm_queue {TYPE_3__* etm; } ;
struct branch_stack {scalar_t__ nr; struct branch_entry* entries; } ;
struct TYPE_4__ {int predicted; scalar_t__ mispred; } ;
struct branch_entry {TYPE_1__ flags; int to; int from; } ;
struct TYPE_5__ {int last_branch_sz; } ;
struct TYPE_6__ {TYPE_2__ synth_opts; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cs_etm_queue *VAR_0,
       struct cs_etm_traceid_queue *VAR_1)
{
 struct branch_stack *VAR_2 = VAR_1->last_branch_rb;
 struct branch_entry *VAR_3;







 if (!VAR_1->last_branch_pos)
  VAR_1->last_branch_pos = VAR_0->etm->synth_opts.last_branch_sz;

 VAR_1->last_branch_pos -= 1;

 VAR_3 = &VAR_2->entries[VAR_1->last_branch_pos];
 VAR_3->from = FUNC_1(VAR_1->prev_packet);
 VAR_3->to = FUNC_0(VAR_1->packet);

 VAR_3->flags.mispred = 0;
 VAR_3->flags.predicted = 1;





 if (VAR_2->nr < VAR_0->etm->synth_opts.last_branch_sz)
  VAR_2->nr += 1;
}

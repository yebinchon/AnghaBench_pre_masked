
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_pt_state {int flags; int to_ip; int from_ip; } ;
struct intel_pt_queue {int last_branch_pos; TYPE_3__* pt; struct branch_stack* last_branch_rb; struct intel_pt_state* state; } ;
struct branch_stack {scalar_t__ nr; struct branch_entry* entries; } ;
struct TYPE_4__ {int abort; int in_tx; int mispred; } ;
struct branch_entry {TYPE_1__ flags; int to; int from; } ;
struct TYPE_5__ {int last_branch_sz; } ;
struct TYPE_6__ {TYPE_2__ synth_opts; int mispred_all; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct intel_pt_queue *VAR_2)
{
 const struct intel_pt_state *VAR_3 = VAR_2->state;
 struct branch_stack *VAR_4 = VAR_2->last_branch_rb;
 struct branch_entry *VAR_5;

 if (!VAR_2->last_branch_pos)
  VAR_2->last_branch_pos = VAR_2->pt->synth_opts.last_branch_sz;

 VAR_2->last_branch_pos -= 1;

 VAR_5 = &VAR_4->entries[VAR_2->last_branch_pos];
 VAR_5->from = VAR_3->from_ip;
 VAR_5->to = VAR_3->to_ip;
 VAR_5->flags.abort = !!(VAR_3->flags & VAR_0);
 VAR_5->flags.in_tx = !!(VAR_3->flags & VAR_1);

 VAR_5->flags.mispred = VAR_2->pt->mispred_all;

 if (VAR_4->nr < VAR_2->pt->synth_opts.last_branch_sz)
  VAR_4->nr += 1;
}

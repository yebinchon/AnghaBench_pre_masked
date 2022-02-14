
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_pt_queue {size_t last_branch_pos; TYPE_2__* pt; struct branch_stack* last_branch; struct branch_stack* last_branch_rb; } ;
struct branch_stack {size_t nr; int * entries; } ;
struct branch_entry {int dummy; } ;
struct TYPE_3__ {size_t last_branch_sz; } ;
struct TYPE_4__ {TYPE_1__ synth_opts; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_1(struct intel_pt_queue *VAR_0)
{
 struct branch_stack *VAR_1 = VAR_0->last_branch_rb;
 struct branch_stack *VAR_2 = VAR_0->last_branch;
 size_t VAR_3 = 0;

 VAR_2->nr = VAR_1->nr;

 if (!VAR_1->nr)
  return;

 VAR_3 = VAR_0->pt->synth_opts.last_branch_sz - VAR_0->last_branch_pos;
 FUNC_0(&VAR_2->entries[0],
        &VAR_1->entries[VAR_0->last_branch_pos],
        sizeof(struct branch_entry) * VAR_3);

 if (VAR_1->nr >= VAR_0->pt->synth_opts.last_branch_sz) {
  FUNC_0(&VAR_2->entries[VAR_3],
         &VAR_1->entries[0],
         sizeof(struct branch_entry) * VAR_0->last_branch_pos);
 }
}

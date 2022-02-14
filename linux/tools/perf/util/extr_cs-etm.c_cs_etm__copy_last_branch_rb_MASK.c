
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cs_etm_traceid_queue {size_t last_branch_pos; struct branch_stack* last_branch; struct branch_stack* last_branch_rb; } ;
struct cs_etm_queue {TYPE_2__* etm; } ;
struct branch_stack {size_t nr; int * entries; } ;
struct branch_entry {int dummy; } ;
struct TYPE_3__ {size_t last_branch_sz; } ;
struct TYPE_4__ {TYPE_1__ synth_opts; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline
void FUNC_1(struct cs_etm_queue *VAR_0,
     struct cs_etm_traceid_queue *VAR_1)
{
 struct branch_stack *VAR_2 = VAR_1->last_branch_rb;
 struct branch_stack *VAR_3 = VAR_1->last_branch;
 size_t VAR_4 = 0;





 VAR_3->nr = VAR_2->nr;




 if (!VAR_2->nr)
  return;






 VAR_4 = VAR_0->etm->synth_opts.last_branch_sz - VAR_1->last_branch_pos;
 FUNC_0(&VAR_3->entries[0],
        &VAR_2->entries[VAR_1->last_branch_pos],
        sizeof(struct branch_entry) * VAR_4);
 if (VAR_2->nr >= VAR_0->etm->synth_opts.last_branch_sz) {
  FUNC_0(&VAR_3->entries[VAR_4],
         &VAR_2->entries[0],
         sizeof(struct branch_entry) * VAR_1->last_branch_pos);
 }
}

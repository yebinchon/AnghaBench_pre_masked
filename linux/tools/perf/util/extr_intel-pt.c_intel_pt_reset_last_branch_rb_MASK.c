
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_pt_queue {TYPE_1__* last_branch_rb; scalar_t__ last_branch_pos; } ;
struct TYPE_2__ {scalar_t__ nr; } ;



__attribute__((used)) static inline void FUNC_0(struct intel_pt_queue *VAR_0)
{
 VAR_0->last_branch_pos = 0;
 VAR_0->last_branch_rb->nr = 0;
}

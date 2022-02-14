
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max; scalar_t__ nr; int * next; } ;
struct mmu_gather {int fullmm; struct mm_struct* mm; scalar_t__ page_size; int * batch; scalar_t__ batch_count; TYPE_1__ local; TYPE_1__* active; int __pages; scalar_t__ need_flush_all; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmu_gather*) ;
 int FUNC_2 (struct mm_struct*) ;

void FUNC_3(struct mmu_gather *VAR_0, struct mm_struct *VAR_1,
   unsigned long VAR_2, unsigned long VAR_3)
{
 VAR_0->mm = VAR_1;


 VAR_0->fullmm = !(VAR_2 | (VAR_3+1));


 VAR_0->need_flush_all = 0;
 VAR_0->local.next = ((void*)0);
 VAR_0->local.nr = 0;
 VAR_0->local.max = FUNC_0(VAR_0->__pages);
 VAR_0->active = &VAR_0->local;
 VAR_0->batch_count = 0;
 FUNC_1(VAR_0);
 FUNC_2(VAR_0->mm);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather_batch {struct mmu_gather_batch* next; int max; scalar_t__ nr; } ;
struct mmu_gather {scalar_t__ batch_count; struct mmu_gather_batch* active; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static bool FUNC_1(struct mmu_gather *VAR_4)
{
 struct mmu_gather_batch *VAR_5;

 VAR_5 = VAR_4->active;
 if (VAR_5->next) {
  VAR_4->active = VAR_5->next;
  return 1;
 }

 if (VAR_4->batch_count == VAR_2)
  return 0;

 VAR_5 = (void *)FUNC_0(VAR_0 | VAR_3, 0);
 if (!VAR_5)
  return 0;

 VAR_4->batch_count++;
 VAR_5->next = ((void*)0);
 VAR_5->nr = 0;
 VAR_5->max = VAR_1;

 VAR_4->active->next = VAR_5;
 VAR_4->active = VAR_5;

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_gather_batch {scalar_t__ nr; int pages; struct mmu_gather_batch* next; } ;
struct mmu_gather {struct mmu_gather_batch local; struct mmu_gather_batch* active; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mmu_gather *VAR_0)
{
 struct mmu_gather_batch *VAR_1;

 for (VAR_1 = &VAR_0->local; VAR_1 && VAR_1->nr; VAR_1 = VAR_1->next) {
  FUNC_0(VAR_1->pages, VAR_1->nr);
  VAR_1->nr = 0;
 }
 VAR_0->active = &VAR_0->local;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mmu_gather_batch {scalar_t__ nr; scalar_t__ max; struct page** pages; } ;
struct mmu_gather {int page_size; struct mmu_gather_batch* active; int end; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mmu_gather*) ;

bool FUNC_4(struct mmu_gather *VAR_0, struct page *VAR_1, int VAR_2)
{
 struct mmu_gather_batch *VAR_3;

 FUNC_0(!VAR_0->end);





 VAR_3 = VAR_0->active;




 VAR_3->pages[VAR_3->nr++] = VAR_1;
 if (VAR_3->nr == VAR_3->max) {
  if (!FUNC_3(VAR_0))
   return 1;
  VAR_3 = VAR_0->active;
 }
 FUNC_1(VAR_3->nr > VAR_3->max, VAR_1);

 return 0;
}

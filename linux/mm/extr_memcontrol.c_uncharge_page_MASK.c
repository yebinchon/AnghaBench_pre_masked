
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uncharge_gather {unsigned int nr_huge; unsigned int nr_anon; unsigned int nr_file; unsigned int nr_shmem; struct page* dummy_page; int nr_kmem; int pgpgout; int * memcg; } ;
struct page {int * mem_cgroup; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (int,struct page*) ;
 int FUNC_7 (struct page*) ;
 unsigned int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (struct page*) ;
 int FUNC_11 (struct uncharge_gather*) ;
 int FUNC_12 (struct uncharge_gather*) ;

__attribute__((used)) static void FUNC_13(struct page *VAR_0, struct uncharge_gather *VAR_1)
{
 FUNC_6(FUNC_3(VAR_0), VAR_0);
 FUNC_6(FUNC_10(VAR_0) && !FUNC_9(VAR_0) &&
   !FUNC_1(VAR_0) , VAR_0);

 if (!VAR_0->mem_cgroup)
  return;







 if (VAR_1->memcg != VAR_0->mem_cgroup) {
  if (VAR_1->memcg) {
   FUNC_11(VAR_1);
   FUNC_12(VAR_1);
  }
  VAR_1->memcg = VAR_0->mem_cgroup;
 }

 if (!FUNC_2(VAR_0)) {
  unsigned int VAR_2 = 1;

  if (FUNC_5(VAR_0)) {
   VAR_2 = FUNC_8(VAR_0);
   VAR_1->nr_huge += VAR_2;
  }
  if (FUNC_0(VAR_0))
   VAR_1->nr_anon += VAR_2;
  else {
   VAR_1->nr_file += VAR_2;
   if (FUNC_4(VAR_0))
    VAR_1->nr_shmem += VAR_2;
  }
  VAR_1->pgpgout++;
 } else {
  VAR_1->nr_kmem += FUNC_8(VAR_0);
  FUNC_7(VAR_0);
 }

 VAR_1->dummy_page = VAR_0;
 VAR_0->mem_cgroup = ((void*)0);
}

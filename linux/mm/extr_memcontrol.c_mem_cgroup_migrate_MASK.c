
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct mem_cgroup* mem_cgroup; } ;
struct mem_cgroup {int css; int memsw; int memory; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int,struct page*) ;
 int FUNC_4 (struct page*,struct mem_cgroup*,int) ;
 int FUNC_5 (int *,unsigned int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (struct mem_cgroup*,struct page*,int,unsigned int) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct mem_cgroup*,struct page*) ;
 int FUNC_13 (int *,unsigned int) ;

void FUNC_14(struct page *VAR_0, struct page *VAR_1)
{
 struct mem_cgroup *VAR_2;
 unsigned int VAR_3;
 bool VAR_4;
 unsigned long VAR_5;

 FUNC_3(!FUNC_1(VAR_0), VAR_0);
 FUNC_3(!FUNC_1(VAR_1), VAR_1);
 FUNC_3(FUNC_0(VAR_0) != FUNC_0(VAR_1), VAR_1);
 FUNC_3(FUNC_2(VAR_0) != FUNC_2(VAR_1),
         VAR_1);

 if (FUNC_11())
  return;


 if (VAR_1->mem_cgroup)
  return;


 VAR_2 = VAR_0->mem_cgroup;
 if (!VAR_2)
  return;


 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = VAR_4 ? FUNC_7(VAR_1) : 1;

 FUNC_13(&VAR_2->memory, VAR_3);
 if (FUNC_6())
  FUNC_13(&VAR_2->memsw, VAR_3);
 FUNC_5(&VAR_2->css, VAR_3);

 FUNC_4(VAR_1, VAR_2, 0);

 FUNC_9(VAR_5);
 FUNC_10(VAR_2, VAR_1, VAR_4, VAR_3);
 FUNC_12(VAR_2, VAR_1);
 FUNC_8(VAR_5);
}

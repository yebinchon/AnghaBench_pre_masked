
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int mapping; } ;
struct mem_cgroup {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int,struct page*) ;
 int FUNC_3 (struct page*,struct mem_cgroup*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct mem_cgroup*,struct page*,int,unsigned int) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (TYPE_1__,unsigned int) ;
 int FUNC_11 (struct mem_cgroup*,struct page*) ;
 int FUNC_12 (struct page*) ;

void FUNC_13(struct page *VAR_0, struct mem_cgroup *VAR_1,
         bool VAR_2, bool VAR_3)
{
 unsigned int VAR_4 = VAR_3 ? FUNC_5(VAR_0) : 1;

 FUNC_2(!VAR_0->mapping, VAR_0);
 FUNC_2(FUNC_0(VAR_0) && !VAR_2, VAR_0);

 if (FUNC_9())
  return;





 if (!VAR_1)
  return;

 FUNC_3(VAR_0, VAR_1, VAR_2);

 FUNC_6();
 FUNC_8(VAR_1, VAR_0, VAR_3, VAR_4);
 FUNC_11(VAR_1, VAR_0);
 FUNC_7();

 if (FUNC_4() && FUNC_1(VAR_0)) {
  swp_entry_t VAR_5 = { .val = FUNC_12(VAR_0) };





  FUNC_10(VAR_5, VAR_4);
 }
}

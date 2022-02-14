
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
struct lruvec {int inactive_age; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 struct lruvec* FUNC_2 (int ,struct mem_cgroup*) ;
 struct mem_cgroup* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct page *VAR_0)
{
 struct mem_cgroup *VAR_1;
 struct lruvec *VAR_2;

 FUNC_5();







 VAR_1 = FUNC_3(VAR_0);
 if (!FUNC_1() && !VAR_1)
  goto out;
 VAR_2 = FUNC_2(FUNC_4(VAR_0), VAR_1);
 FUNC_0(&VAR_2->inactive_age);
out:
 FUNC_6();
}

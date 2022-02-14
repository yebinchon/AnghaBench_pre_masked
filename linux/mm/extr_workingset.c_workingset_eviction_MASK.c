
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pglist_data {int dummy; } ;
struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
struct lruvec {int inactive_age; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int,struct page*) ;
 unsigned long FUNC_4 (int *) ;
 int FUNC_5 (struct mem_cgroup*) ;
 struct lruvec* FUNC_6 (struct pglist_data*,struct mem_cgroup*) ;
 void* FUNC_7 (int,struct pglist_data*,unsigned long,int ) ;
 int FUNC_8 (struct page*) ;
 struct mem_cgroup* FUNC_9 (struct page*) ;
 struct pglist_data* FUNC_10 (struct page*) ;

void *FUNC_11(struct page *VAR_0)
{
 struct pglist_data *VAR_1 = FUNC_10(VAR_0);
 struct mem_cgroup *VAR_2 = FUNC_9(VAR_0);
 int VAR_3 = FUNC_5(VAR_2);
 unsigned long VAR_4;
 struct lruvec *VAR_5;


 FUNC_3(FUNC_0(VAR_0), VAR_0);
 FUNC_3(FUNC_8(VAR_0), VAR_0);
 FUNC_3(!FUNC_1(VAR_0), VAR_0);

 VAR_5 = FUNC_6(VAR_1, VAR_2);
 VAR_4 = FUNC_4(&VAR_5->inactive_age);
 return FUNC_7(VAR_3, VAR_1, VAR_4, FUNC_2(VAR_0));
}

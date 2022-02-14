
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pglist_data {int dummy; } ;
struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
struct lruvec {int inactive_age; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *) ;
 int FUNC_4 (struct lruvec*,int ) ;
 unsigned long FUNC_5 (struct lruvec*,int ,int ) ;
 int FUNC_6 () ;
 struct mem_cgroup* FUNC_7 (int) ;
 struct lruvec* FUNC_8 (struct pglist_data*,struct mem_cgroup*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (void*,int*,struct pglist_data**,unsigned long*,int*) ;

void FUNC_12(struct page *VAR_6, void *VAR_7)
{
 unsigned long VAR_8;
 struct pglist_data *VAR_9;
 unsigned long VAR_10;
 struct mem_cgroup *VAR_11;
 unsigned long VAR_12;
 struct lruvec *VAR_13;
 unsigned long VAR_14;
 bool VAR_15;
 int VAR_16;

 FUNC_11(VAR_7, &VAR_16, &VAR_9, &VAR_12, &VAR_15);

 FUNC_9();
 VAR_11 = FUNC_7(VAR_16);
 if (!FUNC_6() && !VAR_11)
  goto out;
 VAR_13 = FUNC_8(VAR_9, VAR_11);
 VAR_14 = FUNC_3(&VAR_13->inactive_age);
 VAR_10 = FUNC_5(VAR_13, VAR_1, VAR_2);
 VAR_8 = (VAR_14 - VAR_12) & VAR_0;

 FUNC_4(VAR_13, VAR_4);






 if (VAR_8 > VAR_10)
  goto out;

 FUNC_0(VAR_6);
 FUNC_2(&VAR_13->inactive_age);
 FUNC_4(VAR_13, VAR_3);


 if (VAR_15) {
  FUNC_1(VAR_6);
  FUNC_4(VAR_13, VAR_5);
 }
out:
 FUNC_10();
}

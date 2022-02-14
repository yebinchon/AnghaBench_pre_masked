
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
struct lruvec {int dummy; } ;
typedef int pg_data_t ;
typedef enum node_stat_item { ____Placeholder_node_stat_item } node_stat_item ;


 int FUNC_0 (struct lruvec*,int,int) ;
 int FUNC_1 (int *,int,int) ;
 struct lruvec* FUNC_2 (int *,struct mem_cgroup*) ;
 struct mem_cgroup* FUNC_3 (struct page*) ;
 int * FUNC_4 (struct page*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct mem_cgroup* VAR_0 ;
 struct page* FUNC_7 (void*) ;

void FUNC_8(void *VAR_1, enum node_stat_item VAR_2, int VAR_3)
{
 struct page *VAR_4 = FUNC_7(VAR_1);
 pg_data_t *VAR_5 = FUNC_4(VAR_4);
 struct mem_cgroup *VAR_6;
 struct lruvec *VAR_7;

 FUNC_5();
 VAR_6 = FUNC_3(VAR_4);


 if (!VAR_6 || VAR_6 == VAR_0) {
  FUNC_1(VAR_5, VAR_2, VAR_3);
 } else {
  VAR_7 = FUNC_2(VAR_5, VAR_6);
  FUNC_0(VAR_7, VAR_2, VAR_3);
 }
 FUNC_6();
}

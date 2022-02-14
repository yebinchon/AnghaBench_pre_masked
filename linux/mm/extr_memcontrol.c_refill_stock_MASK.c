
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memcg_stock_pcp {unsigned int nr_pages; struct mem_cgroup* cached; } ;
struct mem_cgroup {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct memcg_stock_pcp*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int VAR_1 ;
 struct memcg_stock_pcp* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mem_cgroup *VAR_2, unsigned int VAR_3)
{
 struct memcg_stock_pcp *VAR_4;
 unsigned long VAR_5;

 FUNC_2(VAR_5);

 VAR_4 = FUNC_3(&VAR_1);
 if (VAR_4->cached != VAR_2) {
  FUNC_0(VAR_4);
  VAR_4->cached = VAR_2;
 }
 VAR_4->nr_pages += VAR_3;

 if (VAR_4->nr_pages > VAR_0)
  FUNC_0(VAR_4);

 FUNC_1(VAR_5);
}

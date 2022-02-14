
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memcg_stock_pcp {unsigned int nr_pages; struct mem_cgroup* cached; } ;
struct mem_cgroup {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_1 ;
 struct memcg_stock_pcp* FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct mem_cgroup *VAR_2, unsigned int VAR_3)
{
 struct memcg_stock_pcp *VAR_4;
 unsigned long VAR_5;
 bool VAR_6 = 0;

 if (VAR_3 > VAR_0)
  return VAR_6;

 FUNC_1(VAR_5);

 VAR_4 = FUNC_2(&VAR_1);
 if (VAR_2 == VAR_4->cached && VAR_4->nr_pages >= VAR_3) {
  VAR_4->nr_pages -= VAR_3;
  VAR_6 = 1;
 }

 FUNC_0(VAR_5);

 return VAR_6;
}

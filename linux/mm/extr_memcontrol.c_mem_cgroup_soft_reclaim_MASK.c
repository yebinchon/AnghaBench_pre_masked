
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup_reclaim_cookie {int priority; int * pgdat; } ;
struct mem_cgroup {int dummy; } ;
typedef int pg_data_t ;
typedef int gfp_t ;


 int VAR_0 ;
 struct mem_cgroup* FUNC_0 (struct mem_cgroup*,struct mem_cgroup*,struct mem_cgroup_reclaim_cookie*) ;
 int FUNC_1 (struct mem_cgroup*,struct mem_cgroup*) ;
 scalar_t__ FUNC_2 (struct mem_cgroup*,int ,int,int *,unsigned long*) ;
 unsigned long FUNC_3 (struct mem_cgroup*) ;

__attribute__((used)) static int FUNC_4(struct mem_cgroup *VAR_1,
       pg_data_t *VAR_2,
       gfp_t VAR_3,
       unsigned long *VAR_4)
{
 struct mem_cgroup *VAR_5 = ((void*)0);
 int VAR_6 = 0;
 int VAR_7 = 0;
 unsigned long VAR_8;
 unsigned long VAR_9;
 struct mem_cgroup_reclaim_cookie VAR_10 = {
  .pgdat = VAR_2,
  .priority = 0,
 };

 VAR_8 = FUNC_3(VAR_1);

 while (1) {
  VAR_5 = FUNC_0(VAR_1, VAR_5, &VAR_10);
  if (!VAR_5) {
   VAR_7++;
   if (VAR_7 >= 2) {





    if (!VAR_6)
     break;






    if (VAR_6 >= (VAR_8 >> 2) ||
     (VAR_7 > VAR_0))
     break;
   }
   continue;
  }
  VAR_6 += FUNC_2(VAR_5, VAR_3, 0,
     VAR_2, &VAR_9);
  *VAR_4 += VAR_9;
  if (!FUNC_3(VAR_1))
   break;
 }
 FUNC_1(VAR_1, VAR_5);
 return VAR_6;
}

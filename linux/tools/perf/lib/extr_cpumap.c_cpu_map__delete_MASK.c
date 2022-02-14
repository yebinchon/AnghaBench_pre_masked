
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int refcnt; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct perf_cpu_map*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct perf_cpu_map *VAR_0)
{
 if (VAR_0) {
  FUNC_0(FUNC_2(&VAR_0->refcnt) != 0,
     "cpu_map refcnt unbalanced\n");
  FUNC_1(VAR_0);
 }
}

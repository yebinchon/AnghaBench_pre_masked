
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int nr; int refcnt; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct perf_thread_map*) ;
 struct perf_thread_map* FUNC_2 (struct perf_thread_map*,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct perf_thread_map *VAR_0)
{
 if (VAR_0) {
  int VAR_1;

  FUNC_0(FUNC_3(&VAR_0->refcnt) != 0,
     "thread map refcnt unbalanced\n");
  for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++)
   FUNC_1(FUNC_2(VAR_0, VAR_1));
  FUNC_1(VAR_0);
 }
}

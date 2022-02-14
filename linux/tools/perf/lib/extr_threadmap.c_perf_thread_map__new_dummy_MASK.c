
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int nr; int refcnt; } ;


 int FUNC_0 (struct perf_thread_map*,int ,int) ;
 int FUNC_1 (int *,int) ;
 struct perf_thread_map* FUNC_2 (int) ;

struct perf_thread_map *FUNC_3(void)
{
 struct perf_thread_map *VAR_0 = FUNC_2(1);

 if (VAR_0 != ((void*)0)) {
  FUNC_0(VAR_0, 0, -1);
  VAR_0->nr = 1;
  FUNC_1(&VAR_0->refcnt, 1);
 }
 return VAR_0;
}

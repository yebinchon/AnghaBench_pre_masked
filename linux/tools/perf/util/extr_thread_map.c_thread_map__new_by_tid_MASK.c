
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int nr; int refcnt; } ;
typedef int pid_t ;


 int FUNC_0 (struct perf_thread_map*,int ,int ) ;
 int FUNC_1 (int *,int) ;
 struct perf_thread_map* FUNC_2 (int) ;

struct perf_thread_map *FUNC_3(pid_t VAR_0)
{
 struct perf_thread_map *VAR_1 = FUNC_2(1);

 if (VAR_1 != ((void*)0)) {
  FUNC_0(VAR_1, 0, VAR_0);
  VAR_1->nr = 1;
  FUNC_1(&VAR_1->refcnt, 1);
 }

 return VAR_1;
}

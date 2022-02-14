
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union perf_event {int thread_map; } ;
struct perf_thread_map {int dummy; } ;
typedef int FILE ;


 size_t FUNC_0 (int *,char*) ;
 int FUNC_1 (struct perf_thread_map*) ;
 scalar_t__ FUNC_2 (struct perf_thread_map*,int *) ;
 struct perf_thread_map* FUNC_3 (int *) ;

size_t FUNC_4(union perf_event *VAR_0, FILE *VAR_1)
{
 struct perf_thread_map *VAR_2 = FUNC_3(&VAR_0->thread_map);
 size_t VAR_3;

 VAR_3 = FUNC_0(VAR_1, " nr: ");

 if (VAR_2)
  VAR_3 += FUNC_2(VAR_2, VAR_1);
 else
  VAR_3 += FUNC_0(VAR_1, "failed to get threads from event\n");

 FUNC_1(VAR_2);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sched {int show_callchain; } ;
struct perf_sample {int * callchain; } ;
struct idle_thread_runtime {int cursor; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct perf_sched *VAR_1,
    struct idle_thread_runtime *VAR_2,
    struct perf_sample *VAR_3)
{
 if (!VAR_1->show_callchain || VAR_3->callchain == ((void*)0))
  return;

 FUNC_0(&VAR_2->cursor, &VAR_0);
}

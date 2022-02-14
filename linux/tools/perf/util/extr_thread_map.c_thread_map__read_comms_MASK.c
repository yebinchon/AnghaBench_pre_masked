
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int nr; } ;


 int FUNC_0 (struct perf_thread_map*,int) ;

void FUNC_1(struct perf_thread_map *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr; ++VAR_1)
  FUNC_0(VAR_0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int dummy; } ;
struct perf_record_thread_map {int nr; } ;


 struct perf_thread_map* FUNC_0 (int ) ;
 int FUNC_1 (struct perf_thread_map*,struct perf_record_thread_map*) ;

struct perf_thread_map *FUNC_2(struct perf_record_thread_map *VAR_0)
{
 struct perf_thread_map *VAR_1;

 VAR_1 = FUNC_0(VAR_0->nr);
 if (VAR_1)
  FUNC_1(VAR_1, VAR_0);

 return VAR_1;
}

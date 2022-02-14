
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int dummy; } ;
struct perf_cpu_map {int dummy; } ;
struct evlist {int core; } ;


 int VAR_0 ;
 struct perf_cpu_map* FUNC_0 (int *) ;
 int FUNC_1 (struct perf_cpu_map*) ;
 int FUNC_2 (int *,struct perf_cpu_map*,struct perf_thread_map*) ;
 struct perf_thread_map* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct evlist *VAR_1)
{
 struct perf_cpu_map *VAR_2;
 struct perf_thread_map *VAR_3;
 int VAR_4 = -VAR_0;
 VAR_2 = FUNC_0(((void*)0));
 if (!VAR_2)
  goto out;

 VAR_3 = FUNC_3();
 if (!VAR_3)
  goto out_put;

 FUNC_2(&VAR_1->core, VAR_2, VAR_3);
out:
 return VAR_4;
out_put:
 FUNC_1(VAR_2);
 goto out;
}

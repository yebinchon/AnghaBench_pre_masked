
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_cpu_map {int dummy; } ;
struct perf_counts_values {scalar_t__ ena; scalar_t__ run; } ;
struct evsel {unsigned long* per_pkg_mask; int per_pkg; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct perf_cpu_map*,int,int *) ;
 struct perf_cpu_map* FUNC_2 (struct evsel*) ;
 scalar_t__ FUNC_3 (struct perf_cpu_map*) ;
 int FUNC_4 (int,unsigned long*) ;
 unsigned long* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct evsel *VAR_1,
    struct perf_counts_values *VAR_2, int VAR_3, bool *VAR_4)
{
 unsigned long *VAR_5 = VAR_1->per_pkg_mask;
 struct perf_cpu_map *VAR_6 = FUNC_2(VAR_1);
 int VAR_7;

 *VAR_4 = 0;

 if (!VAR_1->per_pkg)
  return 0;

 if (FUNC_3(VAR_6))
  return 0;

 if (!VAR_5) {
  VAR_5 = FUNC_5(FUNC_0());
  if (!VAR_5)
   return -VAR_0;

  VAR_1->per_pkg_mask = VAR_5;
 }
 if (!(VAR_2->run && VAR_2->ena))
  return 0;

 VAR_7 = FUNC_1(VAR_6, VAR_3, ((void*)0));
 if (VAR_7 < 0)
  return -1;

 *VAR_4 = FUNC_4(VAR_7, VAR_5) == 1;
 return 0;
}

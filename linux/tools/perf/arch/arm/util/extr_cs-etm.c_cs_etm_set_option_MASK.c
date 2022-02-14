
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct perf_cpu_map {int dummy; } ;
struct evsel {TYPE_2__* evlist; } ;
struct auxtrace_record {int dummy; } ;
struct TYPE_3__ {struct perf_cpu_map* cpus; } ;
struct TYPE_4__ {TYPE_1__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct perf_cpu_map*,int) ;
 int FUNC_2 (struct auxtrace_record*,struct evsel*,int) ;
 int FUNC_3 (struct auxtrace_record*,struct evsel*,int) ;
 struct perf_cpu_map* FUNC_4 (int *) ;
 int FUNC_5 (struct perf_cpu_map*) ;

__attribute__((used)) static int FUNC_6(struct auxtrace_record *VAR_3,
        struct evsel *VAR_4, u32 VAR_5)
{
 int VAR_6, VAR_7 = -VAR_0;
 struct perf_cpu_map *VAR_8 = VAR_4->evlist->core.cpus;
 struct perf_cpu_map *VAR_9 = FUNC_4(((void*)0));


 for (VAR_6 = 0; VAR_6 < FUNC_0(); VAR_6++) {
  if (!FUNC_1(VAR_8, VAR_6) ||
      !FUNC_1(VAR_9, VAR_6))
   continue;

  if (VAR_5 & VAR_1) {
   VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_6);
   if (VAR_7)
    goto out;
  }
  if (VAR_5 & VAR_2) {
   VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_6);
   if (VAR_7)
    goto out;
  }
  if (VAR_5 & ~(VAR_1 | VAR_2))

   goto out;
 }

 VAR_7 = 0;
out:
 FUNC_5(VAR_9);
 return VAR_7;
}

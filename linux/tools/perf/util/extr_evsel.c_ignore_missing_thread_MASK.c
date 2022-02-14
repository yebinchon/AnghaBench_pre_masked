
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_thread_map {int nr; } ;
struct TYPE_2__ {scalar_t__ system_wide; } ;
struct evsel {TYPE_1__ core; int ignore_missing_thread; } ;
typedef int pid_t ;


 int VAR_0 ;
 int FUNC_0 (struct perf_thread_map*,int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (struct perf_thread_map*,int) ;
 scalar_t__ FUNC_3 (struct evsel*,int,int,int,int) ;

__attribute__((used)) static bool FUNC_4(struct evsel *VAR_1,
      int VAR_2, int VAR_3,
      struct perf_thread_map *VAR_4,
      int VAR_5, int VAR_6)
{
 pid_t VAR_7 = FUNC_0(VAR_4, VAR_5);

 if (!VAR_1->ignore_missing_thread)
  return 0;


 if (VAR_1->core.system_wide)
  return 0;


 if (VAR_6 != -VAR_0)
  return 0;


 if (VAR_4->nr == 1)
  return 0;





 if (FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4->nr, VAR_5))
  return 0;

 if (FUNC_2(VAR_4, VAR_5))
  return 0;

 FUNC_1("WARNING: Ignored open failure for pid %d\n",
     VAR_7);
 return 1;
}

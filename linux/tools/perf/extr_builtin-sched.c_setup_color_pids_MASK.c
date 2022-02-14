
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_thread_map {int dummy; } ;
struct TYPE_2__ {struct perf_thread_map* color_pids; int color_pids_str; } ;
struct perf_sched {TYPE_1__ map; } ;


 int FUNC_0 (char*,int ) ;
 struct perf_thread_map* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct perf_sched *VAR_0)
{
 struct perf_thread_map *VAR_1;

 if (!VAR_0->map.color_pids_str)
  return 0;

 VAR_1 = FUNC_1(VAR_0->map.color_pids_str);
 if (!VAR_1) {
  FUNC_0("failed to get thread map from %s\n", VAR_0->map.color_pids_str);
  return -1;
 }

 VAR_0->map.color_pids = VAR_1;
 return 0;
}

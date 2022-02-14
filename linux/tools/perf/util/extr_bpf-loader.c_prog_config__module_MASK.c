
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_event {int uprobes; int target; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, struct perf_probe_event *VAR_2)
{
 VAR_2->uprobes = 0;
 VAR_2->target = FUNC_0(VAR_1);
 if (!VAR_2->target)
  return -VAR_0;
 return 0;
}

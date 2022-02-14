
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_cpu_map {int dummy; } ;
struct TYPE_3__ {int disabled; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct evsel* FUNC_0 (struct evlist*) ;
 int FUNC_1 (struct evsel*) ;
 struct perf_cpu_map* FUNC_2 (char*) ;
 int FUNC_3 (struct perf_cpu_map*) ;
 int FUNC_4 (struct evsel*,struct perf_cpu_map*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct evlist *VAR_2)
{
 struct evsel *VAR_3 = FUNC_0(VAR_2);
 struct perf_cpu_map *VAR_4;
 int VAR_5;

 FUNC_5("attaching to CPU 0 as enabled\n");

 VAR_4 = FUNC_2("0");
 if (VAR_4 == ((void*)0)) {
  FUNC_5("failed to call perf_cpu_map__new\n");
  return -1;
 }

 VAR_3->core.attr.disabled = 1;

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (VAR_5) {
  if (VAR_5 == -VAR_0)
   return VAR_1;

  FUNC_5("Failed to open event cpu-clock:u\n");
  return VAR_5;
 }

 FUNC_3(VAR_4);
 return FUNC_1(VAR_3);
}

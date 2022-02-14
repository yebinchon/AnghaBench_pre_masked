
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_thread_map {int dummy; } ;
struct TYPE_3__ {int disabled; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct evlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct evsel* FUNC_0 (struct evlist*) ;
 scalar_t__ FUNC_1 (struct evsel*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct evsel*,struct perf_thread_map*) ;
 int FUNC_4 (struct perf_thread_map*) ;
 int FUNC_5 (char*) ;
 struct perf_thread_map* FUNC_6 (int,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct evlist *VAR_3)
{
 struct evsel *VAR_4 = FUNC_0(VAR_3);
 struct perf_thread_map *VAR_5;
 int VAR_6;

 FUNC_5("attaching to current thread as disabled\n");

 VAR_5 = FUNC_6(-1, FUNC_2(), VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_5("thread_map__new\n");
  return -1;
 }

 VAR_4->core.attr.disabled = 1;

 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_5("Failed to open event cpu-clock:u\n");
  return VAR_6;
 }

 FUNC_4(VAR_5);
 return FUNC_1(VAR_4) == 0 ? VAR_1 : VAR_0;
}

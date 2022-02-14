
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_tool {int dummy; } ;
struct perf_sample {int dummy; } ;
struct machine {int dummy; } ;
struct evsel {int (* handler ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct evsel*,struct machine*) ;} ;
typedef int (* inject_handler ) (struct perf_tool*,union perf_event*,struct perf_sample*,struct evsel*,struct machine*) ;


 int FUNC_0 (struct perf_tool*,union perf_event*,struct perf_sample*,struct evsel*,struct machine*) ;
 int FUNC_1 (struct perf_tool*,union perf_event*) ;

__attribute__((used)) static int FUNC_2(struct perf_tool *VAR_0,
         union perf_event *VAR_1,
         struct perf_sample *VAR_2,
         struct evsel *VAR_3,
         struct machine *VAR_4)
{
 if (VAR_3 && VAR_3->handler) {
  inject_handler VAR_5 = VAR_3->handler;
  return VAR_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 }

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_1(VAR_0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_tool {int dummy; } ;
struct perf_sample {int dummy; } ;
struct machine {int dummy; } ;


 int FUNC_0 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;
 int FUNC_1 (struct perf_tool*,union perf_event*,struct perf_sample*,struct machine*) ;

__attribute__((used)) static int FUNC_2(struct perf_tool *VAR_0,
      union perf_event *VAR_1,
      struct perf_sample *VAR_2,
      struct machine *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 return VAR_4;
}

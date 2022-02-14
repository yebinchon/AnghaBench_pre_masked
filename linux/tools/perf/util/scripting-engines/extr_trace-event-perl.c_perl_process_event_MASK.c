
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_sample {int dummy; } ;
struct evsel {int dummy; } ;
struct addr_location {int dummy; } ;


 int FUNC_0 (union perf_event*,struct perf_sample*,struct evsel*) ;
 int FUNC_1 (struct perf_sample*,struct evsel*,struct addr_location*) ;

__attribute__((used)) static void FUNC_2(union perf_event *VAR_0,
          struct perf_sample *VAR_1,
          struct evsel *VAR_2,
          struct addr_location *VAR_3)
{
 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2);
}

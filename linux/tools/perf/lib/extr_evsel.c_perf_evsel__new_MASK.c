
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_evsel {int dummy; } ;
struct perf_event_attr {int dummy; } ;


 int FUNC_0 (struct perf_evsel*,struct perf_event_attr*) ;
 struct perf_evsel* FUNC_1 (int) ;

struct perf_evsel *FUNC_2(struct perf_event_attr *VAR_0)
{
 struct perf_evsel *VAR_1 = FUNC_1(sizeof(*VAR_1));

 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1, VAR_0);

 return VAR_1;
}

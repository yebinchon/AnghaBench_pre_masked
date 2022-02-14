
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu {int dummy; } ;
struct evsel {int dummy; } ;


 struct perf_pmu* FUNC_0 (struct evsel*) ;
 int FUNC_1 (struct perf_pmu*,char*,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct evsel *VAR_0)
{
 struct perf_pmu *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = 0;

 if (!VAR_1)
  return 0;

 FUNC_1(VAR_1, "nr_addr_filters", "%d", &VAR_2);

 return VAR_2;
}

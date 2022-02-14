
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_pmu {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;


 struct perf_pmu* FUNC_0 (struct perf_pmu*) ;

__attribute__((used)) static struct perf_pmu *FUNC_1(struct evsel *VAR_0)
{
 struct perf_pmu *VAR_1 = ((void*)0);

 while ((VAR_1 = FUNC_0(VAR_1)) != ((void*)0)) {
  if (VAR_1->type == VAR_0->core.attr.type)
   break;
 }

 return VAR_1;
}

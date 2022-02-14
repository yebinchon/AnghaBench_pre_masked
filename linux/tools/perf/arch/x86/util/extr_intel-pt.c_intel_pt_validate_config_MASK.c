
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_pmu {int dummy; } ;
struct TYPE_3__ {int config; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;


 int FUNC_0 (struct perf_pmu*,char*,char*,char*,int) ;
 int FUNC_1 (struct perf_pmu*,char*,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct perf_pmu *VAR_0,
        struct evsel *VAR_1)
{
 int VAR_2;
 char VAR_3;

 if (!VAR_1)
  return 0;





 if (FUNC_1(VAR_0, "format/pt", "%c", &VAR_3) == 1 &&
     !(VAR_1->core.attr.config & 1)) {
  FUNC_2("pt=0 doesn't make sense, forcing pt=1\n");
  VAR_1->core.attr.config |= 1;
 }

 VAR_2 = FUNC_0(VAR_0, "caps/cycle_thresholds",
           "cyc_thresh", "caps/psb_cyc",
           VAR_1->core.attr.config);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0, "caps/mtc_periods",
           "mtc_period", "caps/mtc",
           VAR_1->core.attr.config);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, "caps/psb_periods",
     "psb_period", "caps/psb_cyc",
     VAR_1->core.attr.config);
}

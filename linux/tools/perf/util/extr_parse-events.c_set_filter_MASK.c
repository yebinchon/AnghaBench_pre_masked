
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


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct evsel*,char const*) ;
 scalar_t__ FUNC_2 (struct evsel*,char const*) ;
 struct perf_pmu* FUNC_3 (struct perf_pmu*) ;
 int FUNC_4 (struct perf_pmu*,char*,char*,int*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct evsel *VAR_2, const void *VAR_3)
{
 const char *VAR_4 = VAR_3;
 bool VAR_5 = 0;
 int VAR_6 = 0;
 struct perf_pmu *VAR_7 = ((void*)0);

 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1,
   "--filter option should follow a -e tracepoint or HW tracer option\n");
  return -1;
 }

 if (VAR_2->core.attr.type == VAR_0) {
  if (FUNC_2(VAR_2, VAR_4) < 0) {
   FUNC_0(VAR_1,
    "not enough memory to hold filter string\n");
   return -1;
  }

  return 0;
 }

 while ((VAR_7 = FUNC_3(VAR_7)) != ((void*)0))
  if (VAR_7->type == VAR_2->core.attr.type) {
   VAR_5 = 1;
   break;
  }

 if (VAR_5)
  FUNC_4(VAR_7, "nr_addr_filters",
        "%d", &VAR_6);

 if (!VAR_6) {
  FUNC_0(VAR_1,
   "This CPU does not support address filtering\n");
  return -1;
 }

 if (FUNC_1(VAR_2, VAR_4) < 0) {
  FUNC_0(VAR_1,
   "not enough memory to hold filter string\n");
  return -1;
 }

 return 0;
}

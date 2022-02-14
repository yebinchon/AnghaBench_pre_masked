
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event_attr {int sample_type; } ;
struct TYPE_2__ {struct perf_event_attr attr; } ;
struct evsel {TYPE_1__ core; } ;


 int VAR_0 ;
 char* FUNC_0 (struct evsel*) ;
 int FUNC_1 (char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(struct evsel *VAR_1,
       u64 VAR_2, const char *VAR_3)
{
 struct perf_event_attr *VAR_4 = &VAR_1->core.attr;
 const char *VAR_5 = FUNC_0(VAR_1);

 if (!(VAR_4->sample_type & VAR_2)) {
  FUNC_1("Samples for %s event do not have %s attribute set.",
   VAR_5, VAR_3);
  return -VAR_0;
 }

 return 0;
}

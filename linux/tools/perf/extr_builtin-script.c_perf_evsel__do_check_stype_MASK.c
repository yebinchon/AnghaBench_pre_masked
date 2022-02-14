
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct perf_event_attr {int sample_type; int type; } ;
struct TYPE_3__ {struct perf_event_attr attr; } ;
struct evsel {TYPE_1__ core; } ;
typedef enum perf_output_field { ____Placeholder_perf_output_field } perf_output_field ;
struct TYPE_4__ {int user_set_fields; int fields; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (struct evsel*) ;
 int FUNC_3 (char*,char const*,char const*,int ) ;
 int FUNC_4 (char*,char const*,char const*,int ) ;

__attribute__((used)) static int FUNC_5(struct evsel *VAR_1,
          u64 VAR_2, const char *VAR_3,
          enum perf_output_field VAR_4,
          bool VAR_5)
{
 struct perf_event_attr *VAR_6 = &VAR_1->core.attr;
 int VAR_7 = FUNC_1(VAR_6->type);
 const char *VAR_8;

 if (VAR_6->sample_type & VAR_2)
  return 0;

 if (VAR_0[VAR_7].user_set_fields & VAR_4) {
  if (VAR_5)
   return 0;
  VAR_8 = FUNC_2(VAR_1);
  FUNC_4("Samples for '%s' event do not have %s attribute set. "
         "Cannot print '%s' field.\n",
         VAR_8, VAR_3, FUNC_0(VAR_4));
  return -1;
 }


 VAR_0[VAR_7].fields &= ~VAR_4;
 VAR_8 = FUNC_2(VAR_1);
 FUNC_3("Samples for '%s' event do not have %s attribute set. "
   "Skipping '%s' field.\n",
   VAR_8, VAR_3, FUNC_0(VAR_4));

 return 0;
}

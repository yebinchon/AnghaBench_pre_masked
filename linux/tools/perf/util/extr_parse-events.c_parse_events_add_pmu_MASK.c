
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_pmu_info {int metric_name; int metric_expr; int snapshot; int per_pkg; int scale; int unit; } ;
struct perf_pmu {int type; scalar_t__ is_uncore; scalar_t__ default_config; } ;
struct perf_event_attr {int type; } ;
struct parse_events_state {int idx; struct parse_events_error* error; } ;
struct parse_events_error {int * str; } ;
struct list_head {int dummy; } ;
struct evsel {char* pmu_name; int use_uncore_alias; int config_terms; int percore; int metric_name; int metric_expr; int snapshot; int per_pkg; int scale; int unit; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct evsel* FUNC_1 (struct list_head*,int *,struct perf_event_attr*,int *,struct perf_pmu*,int *,int,int *) ;
 scalar_t__ FUNC_2 (int **,char*,char*) ;
 scalar_t__ FUNC_3 (struct perf_event_attr*,struct list_head*,struct parse_events_error*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_5 (struct list_head*) ;
 scalar_t__ FUNC_6 (struct list_head*,int *) ;
 int FUNC_7 (struct perf_event_attr*,scalar_t__,int) ;
 int FUNC_8 (struct perf_event_attr*,int ,int) ;
 scalar_t__ FUNC_9 (struct perf_pmu*,struct list_head*,struct perf_pmu_info*) ;
 scalar_t__ FUNC_10 (struct perf_pmu*,struct perf_event_attr*,struct list_head*,struct parse_events_error*) ;
 struct perf_pmu* FUNC_11 (char*) ;

int FUNC_12(struct parse_events_state *VAR_4,
    struct list_head *VAR_5, char *VAR_6,
    struct list_head *VAR_7,
    bool VAR_8,
    bool VAR_9)
{
 struct perf_event_attr VAR_10;
 struct perf_pmu_info VAR_11;
 struct perf_pmu *VAR_12;
 struct evsel *VAR_13;
 struct parse_events_error *VAR_14 = VAR_4->error;
 bool VAR_15;
 FUNC_0(VAR_3);

 VAR_12 = FUNC_11(VAR_6);
 if (!VAR_12) {
  if (FUNC_2(&VAR_14->str,
    "Cannot find PMU `%s'. Missing kernel support?",
    VAR_6) < 0)
   VAR_14->str = ((void*)0);
  return -VAR_0;
 }

 if (VAR_12->default_config) {
  FUNC_7(&VAR_10, VAR_12->default_config,
         sizeof(struct perf_event_attr));
 } else {
  FUNC_8(&VAR_10, 0, sizeof(VAR_10));
 }

 VAR_15 = (VAR_12->is_uncore && VAR_9);

 if (!VAR_7) {
  VAR_10.type = VAR_12->type;
  VAR_13 = FUNC_1(VAR_5, &VAR_4->idx, &VAR_10, ((void*)0), VAR_12, ((void*)0),
        VAR_8, ((void*)0));
  if (VAR_13) {
   VAR_13->pmu_name = VAR_6;
   VAR_13->use_uncore_alias = VAR_15;
   return 0;
  } else {
   return -VAR_1;
  }
 }

 if (FUNC_9(VAR_12, VAR_7, &VAR_11))
  return -VAR_0;





 if (FUNC_3(&VAR_10, VAR_7, VAR_4->error, VAR_2))
  return -VAR_0;

 if (FUNC_6(VAR_7, &VAR_3))
  return -VAR_1;

 if (FUNC_10(VAR_12, &VAR_10, VAR_7, VAR_4->error))
  return -VAR_0;

 VAR_13 = FUNC_1(VAR_5, &VAR_4->idx, &VAR_10,
       FUNC_5(VAR_7), VAR_12,
       &VAR_3, VAR_8, ((void*)0));
 if (VAR_13) {
  VAR_13->unit = VAR_11.unit;
  VAR_13->scale = VAR_11.scale;
  VAR_13->per_pkg = VAR_11.per_pkg;
  VAR_13->snapshot = VAR_11.snapshot;
  VAR_13->metric_expr = VAR_11.metric_expr;
  VAR_13->metric_name = VAR_11.metric_name;
  VAR_13->pmu_name = VAR_6;
  VAR_13->use_uncore_alias = VAR_15;
  VAR_13->percore = FUNC_4(&VAR_13->config_terms);
 }

 return VAR_13 ? 0 : -VAR_1;
}

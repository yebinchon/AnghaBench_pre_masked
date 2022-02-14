
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_thread_map {int dummy; } ;
struct perf_evsel {int dummy; } ;
struct perf_event_attr {int disabled; int config; int type; } ;
struct perf_counts_values {scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct perf_evsel*) ;
 int FUNC_2 (struct perf_evsel*) ;
 int FUNC_3 (struct perf_evsel*) ;
 int FUNC_4 (struct perf_evsel*) ;
 struct perf_evsel* FUNC_5 (struct perf_event_attr*) ;
 int FUNC_6 (struct perf_evsel*,int *,struct perf_thread_map*) ;
 int FUNC_7 (struct perf_evsel*,int ,int ,struct perf_counts_values*) ;
 struct perf_thread_map* FUNC_8 () ;
 int FUNC_9 (struct perf_thread_map*) ;
 int FUNC_10 (struct perf_thread_map*,int ,int ) ;

__attribute__((used)) static int FUNC_11(void)
{
 struct perf_counts_values VAR_2 = { .val = 0 };
 struct perf_thread_map *VAR_3;
 struct perf_evsel *VAR_4;
 struct perf_event_attr VAR_5 = {
  .type = VAR_1,
  .config = VAR_0,
  .disabled = 1,
 };
 int VAR_6;

 VAR_3 = FUNC_8();
 FUNC_0("failed to create threads", VAR_3);

 FUNC_10(VAR_3, 0, 0);

 VAR_4 = FUNC_5(&VAR_5);
 FUNC_0("failed to create evsel", VAR_4);

 VAR_6 = FUNC_6(VAR_4, ((void*)0), VAR_3);
 FUNC_0("failed to open evsel", VAR_6 == 0);

 FUNC_7(VAR_4, 0, 0, &VAR_2);
 FUNC_0("failed to read value for evsel", VAR_2.val == 0);

 VAR_6 = FUNC_4(VAR_4);
 FUNC_0("failed to enable evsel", VAR_6 == 0);

 FUNC_7(VAR_4, 0, 0, &VAR_2);
 FUNC_0("failed to read value for evsel", VAR_2.val != 0);

 VAR_6 = FUNC_3(VAR_4);
 FUNC_0("failed to enable evsel", VAR_6 == 0);

 FUNC_1(VAR_4);
 FUNC_2(VAR_4);

 FUNC_9(VAR_3);
 return 0;
}

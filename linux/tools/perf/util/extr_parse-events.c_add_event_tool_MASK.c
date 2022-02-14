
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int config; int type; } ;
struct list_head {int dummy; } ;
struct evsel {int tool_event; int unit; } ;
typedef enum perf_tool_event { ____Placeholder_perf_tool_event } perf_tool_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct evsel* FUNC_0 (struct list_head*,int*,struct perf_event_attr*,int *,int *,int *,int,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct list_head *VAR_4, int *VAR_5,
     enum perf_tool_event VAR_6)
{
 struct evsel *VAR_7;
 struct perf_event_attr VAR_8 = {
  .type = VAR_3,
  .config = VAR_1,
 };

 VAR_7 = FUNC_0(VAR_4, VAR_5, &VAR_8, ((void*)0), ((void*)0), ((void*)0), 0, "0");
 if (!VAR_7)
  return -VAR_0;
 VAR_7->tool_event = VAR_6;
 if (VAR_6 == VAR_2)
  VAR_7->unit = FUNC_1("ns");
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
typedef int u64 ;
struct perf_session {int ordered_events; } ;


 int FUNC_0 (int *,union perf_event*,int ,int ) ;

int FUNC_1(struct perf_session *VAR_0, union perf_event *VAR_1,
         u64 VAR_2, u64 VAR_3)
{
 return FUNC_0(&VAR_0->ordered_events, VAR_1, VAR_2, VAR_3);
}

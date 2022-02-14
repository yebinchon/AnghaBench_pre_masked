
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int sample_type; int sample_period; int wakeup_events; int config; int type; } ;
typedef int buf ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int *,int ) ;
 int FUNC_6 (struct perf_event_attr*,int ,char*) ;

__attribute__((used)) static void FUNC_7(void)
{
 const char *VAR_6 = "/sys/kernel/debug/tracing/events/syscalls/sys_enter_nanosleep/id";
 struct perf_event_attr VAR_7 = {
  .type = VAR_4,
  .sample_type = VAR_3 | VAR_2,
  .sample_period = 1,
  .wakeup_events = 1,
 };
 __u32 VAR_8 = 0;
 int VAR_9, VAR_10;
 char VAR_11[256];

 VAR_10 = FUNC_2(VAR_6, VAR_1, 0);
 if (FUNC_0(VAR_10 < 0, "tracepoint",
    "open syscalls/sys_enter_nanosleep/id failure: %s\n",
    FUNC_4(VAR_5)))
  return;

 VAR_9 = FUNC_3(VAR_10, VAR_11, sizeof(VAR_11));
 FUNC_1(VAR_10);
 if (FUNC_0(VAR_9 <= 0 || VAR_9 >= sizeof(VAR_11), "tracepoint",
    "read syscalls/sys_enter_nanosleep/id failure: %s\n",
    FUNC_4(VAR_5)))
  return;

 VAR_7.config = FUNC_5(VAR_11, ((void*)0), 0);

 FUNC_6(&VAR_7, VAR_0, "tracepoint");
}

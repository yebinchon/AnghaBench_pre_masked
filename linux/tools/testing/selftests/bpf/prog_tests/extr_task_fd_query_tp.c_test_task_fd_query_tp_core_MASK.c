
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int sample_period; int wakeup_events; int sample_type; int type; int config; } ;
struct bpf_object {int dummy; } ;
typedef int buf ;
typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,char*,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bpf_object*) ;
 int FUNC_2 (char const*,int ,struct bpf_object**,int*) ;
 int FUNC_3 (int ,int,int ,char*,int*,int*,int*,int *,int *) ;
 int FUNC_4 (int) ;
 char* VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int,char*,int) ;
 int FUNC_9 (char*,int,char*,char const*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*,int *,int ) ;
 int FUNC_12 (int ,struct perf_event_attr*,int,int ,int,int ) ;

__attribute__((used)) static void FUNC_13(const char *VAR_9,
           const char *VAR_10)
{
 const char *VAR_11 = "./test_tracepoint.o";
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 struct perf_event_attr VAR_17 = {};
 __u64 VAR_18, VAR_19;
 __u32 VAR_20, VAR_21, VAR_22;
 struct bpf_object *VAR_23 = ((void*)0);
 __u32 VAR_24 = 0;
 char VAR_25[256];

 VAR_12 = FUNC_2(VAR_11, VAR_1, &VAR_23, &VAR_15);
 if (FUNC_0(VAR_12, "bpf_prog_load", "err %d errno %d\n", VAR_12, VAR_8))
  goto close_prog;

 FUNC_9(VAR_25, sizeof(VAR_25),
   "/sys/kernel/debug/tracing/events/%s/id", VAR_9);
 VAR_14 = FUNC_7(VAR_25, VAR_2, 0);
 if (FUNC_0(VAR_14 < 0, "open", "err %d errno %d\n", VAR_14, VAR_8))
  goto close_prog;
 VAR_13 = FUNC_8(VAR_14, VAR_25, sizeof(VAR_25));
 FUNC_4(VAR_14);
 if (FUNC_0(VAR_13 <= 0 || VAR_13 >= sizeof(VAR_25), "read",
    "bytes %d errno %d\n", VAR_13, VAR_8))
  goto close_prog;

 VAR_17.config = FUNC_11(VAR_25, ((void*)0), 0);
 VAR_17.type = VAR_6;
 VAR_17.sample_type = VAR_5;
 VAR_17.sample_period = 1;
 VAR_17.wakeup_events = 1;
 VAR_16 = FUNC_12(VAR_7, &VAR_17, -1 ,
    0 , -1 ,
    0 );
 if (FUNC_0(VAR_12, "perf_event_open", "err %d errno %d\n", VAR_12, VAR_8))
  goto close_pmu;

 VAR_12 = FUNC_6(VAR_16, VAR_3, 0);
 if (FUNC_0(VAR_12, "perf_event_ioc_enable", "err %d errno %d\n", VAR_12,
    VAR_8))
  goto close_pmu;

 VAR_12 = FUNC_6(VAR_16, VAR_4, VAR_15);
 if (FUNC_0(VAR_12, "perf_event_ioc_set_bpf", "err %d errno %d\n", VAR_12,
    VAR_8))
  goto close_pmu;


 VAR_20 = sizeof(VAR_25);
 VAR_12 = FUNC_3(FUNC_5(), VAR_16, 0, VAR_25, &VAR_20, &VAR_21,
    &VAR_22, &VAR_18, &VAR_19);
 if (FUNC_0(VAR_12 < 0, "bpf_task_fd_query", "err %d errno %d\n", VAR_12,
    VAR_8))
  goto close_pmu;

 VAR_12 = (VAR_22 == VAR_0) && !FUNC_10(VAR_25, VAR_10);
 if (FUNC_0(!VAR_12, "check_results", "fd_type %d tp_name %s\n",
    VAR_22, VAR_25))
  goto close_pmu;

close_pmu:
 FUNC_4(VAR_16);
close_prog:
 FUNC_1(VAR_23);
}

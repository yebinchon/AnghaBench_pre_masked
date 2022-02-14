
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int time_fmt2 ;
typedef int time_fmt1 ;
struct key_t {void* userstack; void* kernstack; int comm; } ;
struct bpf_perf_event_value {int running; int enabled; } ;
struct bpf_perf_event_data {int sample_period; int addr; int regs; } ;
typedef int fmt ;
typedef int addr_fmt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 void* FUNC_3 (struct bpf_perf_event_data*,int *,int ) ;
 int* FUNC_4 (int *,struct key_t*) ;
 int FUNC_5 (int *,struct key_t*,int*,int ) ;
 int FUNC_6 (struct bpf_perf_event_data*,void*,int) ;
 int FUNC_7 (char*,int,int,...) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_8(struct bpf_perf_event_data *VAR_5)
{
 char VAR_6[] = "Time Enabled: %llu, Time Running: %llu";
 char VAR_7[] = "Get Time Failed, ErrCode: %d";
 char VAR_8[] = "Address recorded on event: %llx";
 char VAR_9[] = "CPU-%d period %lld ip %llx";
 u32 VAR_10 = FUNC_2();
 struct bpf_perf_event_value VAR_11;
 struct key_t VAR_12;
 u64 *VAR_13, VAR_14 = 1;
 int VAR_15;

 if (VAR_5->sample_period < 10000)

  return 0;
 FUNC_1(&VAR_12.comm, sizeof(VAR_12.comm));
 VAR_12.kernstack = FUNC_3(VAR_5, &VAR_4, VAR_1);
 VAR_12.userstack = FUNC_3(VAR_5, &VAR_4, VAR_2);
 if ((int)VAR_12.kernstack < 0 && (int)VAR_12.userstack < 0) {
  FUNC_7(VAR_9, sizeof(VAR_9), VAR_10, VAR_5->sample_period,
     FUNC_0(&VAR_5->regs));
  return 0;
 }

 VAR_15 = FUNC_6(VAR_5, (void *)&VAR_11, sizeof(struct bpf_perf_event_value));
 if (!VAR_15)
   FUNC_7(VAR_6, sizeof(VAR_6), VAR_11.enabled, VAR_11.running);
 else
   FUNC_7(VAR_7, sizeof(VAR_7), VAR_15);

 if (VAR_5->addr != 0)
   FUNC_7(VAR_8, sizeof(VAR_8), VAR_5->addr);

 VAR_13 = FUNC_4(&VAR_3, &VAR_12);
 if (VAR_13)
  (*VAR_13)++;
 else
  FUNC_5(&VAR_3, &VAR_12, &VAR_14, VAR_0);
 return 0;
}

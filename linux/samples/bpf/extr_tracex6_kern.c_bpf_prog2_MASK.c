
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;
struct bpf_perf_event_value {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct bpf_perf_event_value* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,struct bpf_perf_event_value*,int ) ;
 int FUNC_3 (int *,int ,struct bpf_perf_event_value*,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct pt_regs *VAR_3)
{
 u32 VAR_4 = FUNC_0();
 struct bpf_perf_event_value *VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(&VAR_1, VAR_4, &VAR_6, sizeof(VAR_6));
 if (VAR_7)
  return 0;

 VAR_5 = FUNC_1(&VAR_2, &VAR_4);
 if (VAR_5)
  *VAR_5 = VAR_6;
 else
  FUNC_2(&VAR_2, &VAR_4, &VAR_6, VAR_0);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct task_struct {int dummy; } ;
struct strobelight_bpf_sample {int pid; int ktime; void* user_stack_id; void* kernel_stack_id; int metadata; int has_meta; int comm; } ;
struct pt_regs {int dummy; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 void* FUNC_3 (struct pt_regs*,int *,int ) ;
 int FUNC_4 () ;
 struct strobelight_bpf_sample* FUNC_5 (int *,int *) ;
 int FUNC_6 (struct pt_regs*,int *,int ,struct strobelight_bpf_sample*,int) ;
 void* FUNC_7 (struct task_struct*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_8(struct pt_regs *VAR_7) {
 pid_t VAR_8 = FUNC_1() >> 32;
 struct strobelight_bpf_sample* VAR_9;
 struct task_struct *VAR_10;
 uint32_t VAR_11 = 0;
 uint64_t VAR_12;
 void *VAR_13;

 VAR_9 = FUNC_5(&VAR_3, &VAR_11);
 if (!VAR_9)
  return 0;

 VAR_9->pid = VAR_8;
 FUNC_0(&VAR_9->comm, VAR_2);
 VAR_12 = FUNC_4();
 VAR_9->ktime = VAR_12;

 VAR_10 = (struct task_struct *)FUNC_2();
 VAR_13 = FUNC_7(VAR_10, &VAR_9->metadata);
 VAR_9->has_meta = VAR_13 != ((void*)0);
 VAR_13 = VAR_13 ? : &VAR_9->metadata;

 if ((VAR_12 >> VAR_1) & 1) {
  VAR_9->kernel_stack_id = FUNC_3(VAR_7, &VAR_6, 0);
  VAR_9->user_stack_id = FUNC_3(VAR_7, &VAR_6, VAR_0);
 } else {
  VAR_9->kernel_stack_id = FUNC_3(VAR_7, &VAR_5, 0);
  VAR_9->user_stack_id = FUNC_3(VAR_7, &VAR_5, VAR_0);
 }

 uint64_t VAR_14 = VAR_13 - (void *)VAR_9;

 if (VAR_14 < sizeof(struct strobelight_bpf_sample))
  FUNC_6(VAR_7, &VAR_4, 0, VAR_9, 1 + VAR_14);
 return 0;
}

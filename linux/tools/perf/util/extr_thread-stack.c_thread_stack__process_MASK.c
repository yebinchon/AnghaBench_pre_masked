
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct thread_stack {int rstate; int cnt; int branch_count; TYPE_2__* stack; int kernel_start; TYPE_1__* crp; int last_time; int cyc_count; int insn_count; struct comm* comm; } ;
struct thread {scalar_t__ pid_; scalar_t__ tid; } ;
struct perf_sample {int flags; scalar_t__ ip; scalar_t__ addr; scalar_t__ insn_len; int time; scalar_t__ cyc_cnt; scalar_t__ insn_cnt; int cpu; } ;
struct comm {int dummy; } ;
struct call_return_processor {int dummy; } ;
struct call_path_root {int dummy; } ;
struct call_path {int dummy; } ;
struct addr_location {scalar_t__ addr; TYPE_3__* sym; } ;
typedef enum retpoline_state_t { ____Placeholder_retpoline_state_t } retpoline_state_t ;
struct TYPE_7__ {scalar_t__ start; } ;
struct TYPE_6__ {scalar_t__ ret_addr; int non_call; int cp; } ;
struct TYPE_5__ {struct call_path_root* cpr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct thread*,struct thread_stack*) ;
 struct call_path* FUNC_1 (struct call_path_root*,int ,TYPE_3__*,scalar_t__,int ) ;
 struct thread_stack* FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread_stack*,struct perf_sample*,struct addr_location*,struct addr_location*,scalar_t__) ;
 struct thread_stack* FUNC_4 (struct thread*,int ,struct call_return_processor*) ;
 int FUNC_5 (struct thread*,struct thread_stack*,struct perf_sample*,struct addr_location*,struct addr_location*,scalar_t__) ;
 int FUNC_6 (struct thread*,struct thread_stack*,scalar_t__,int ,scalar_t__,TYPE_3__*) ;
 int FUNC_7 (struct thread*,struct thread_stack*,struct perf_sample*,scalar_t__) ;
 int FUNC_8 (struct thread_stack*,scalar_t__,int ,scalar_t__,struct call_path*,int,int) ;
 int FUNC_9 (struct thread*,struct thread_stack*) ;
 int FUNC_10 (struct thread*,struct thread_stack*,int ,scalar_t__) ;
 int FUNC_11 (struct thread_stack*,struct perf_sample*,scalar_t__) ;
 int FUNC_12 (struct thread_stack*,struct perf_sample*,struct addr_location*) ;

int FUNC_13(struct thread *VAR_10, struct comm *VAR_11,
     struct perf_sample *VAR_12,
     struct addr_location *VAR_13,
     struct addr_location *VAR_14, u64 VAR_15,
     struct call_return_processor *VAR_16)
{
 struct thread_stack *VAR_17 = FUNC_2(VAR_10, VAR_12->cpu);
 enum retpoline_state_t VAR_18;
 int VAR_19 = 0;

 if (VAR_17 && !VAR_17->crp) {

  FUNC_9(VAR_10, VAR_17);
  VAR_17 = ((void*)0);
 }

 if (!VAR_17) {
  VAR_17 = FUNC_4(VAR_10, VAR_12->cpu, VAR_16);
  if (!VAR_17)
   return -VAR_0;
  VAR_17->comm = VAR_11;
 }

 VAR_18 = VAR_17->rstate;
 if (VAR_18 == VAR_8)
  VAR_17->rstate = VAR_9;


 if (VAR_17->comm != VAR_11 && VAR_10->pid_ == VAR_10->tid) {
  VAR_19 = FUNC_0(VAR_10, VAR_17);
  if (VAR_19)
   return VAR_19;
  VAR_17->comm = VAR_11;
 }


 if (!VAR_17->cnt) {
  VAR_19 = FUNC_3(VAR_17, VAR_12, VAR_13, VAR_14, VAR_15);
  if (VAR_19)
   return VAR_19;
 }

 VAR_17->branch_count += 1;
 VAR_17->insn_count += VAR_12->insn_cnt;
 VAR_17->cyc_count += VAR_12->cyc_cnt;
 VAR_17->last_time = VAR_12->time;

 if (VAR_12->flags & VAR_2) {
  bool VAR_20 = VAR_12->flags & VAR_7;
  struct call_path_root *VAR_21 = VAR_17->crp->cpr;
  struct call_path *VAR_22;
  u64 VAR_23;

  if (!VAR_12->ip || !VAR_12->addr)
   return 0;

  VAR_23 = VAR_12->ip + VAR_12->insn_len;
  if (VAR_23 == VAR_12->addr)
   return 0;

  VAR_22 = FUNC_1(VAR_21, VAR_17->stack[VAR_17->cnt - 1].cp,
     VAR_14->sym, VAR_12->addr,
     VAR_17->kernel_start);
  VAR_19 = FUNC_8(VAR_17, VAR_23, VAR_12->time, VAR_15,
         VAR_22, 0, VAR_20);





  if (!VAR_19 && VAR_18 == VAR_9 && VAR_14->sym &&
      VAR_13->sym == VAR_14->sym &&
      VAR_14->addr != VAR_14->sym->start)
   VAR_17->rstate = VAR_8;

 } else if (VAR_12->flags & VAR_4) {
  if (!VAR_12->addr) {
   u32 VAR_24 = VAR_5 |
       VAR_3;

   if (!(VAR_12->flags & VAR_24))
    return 0;


   return FUNC_7(VAR_10, VAR_17, VAR_12, VAR_15);
  }

  if (!VAR_12->ip)
   return 0;


  if (VAR_18 == VAR_8 && VAR_17->cnt > 2 &&
      VAR_17->stack[VAR_17->cnt - 1].ret_addr != VAR_12->addr)
   return FUNC_12(VAR_17, VAR_12, VAR_14);

  VAR_19 = FUNC_6(VAR_10, VAR_17, VAR_12->addr,
        VAR_12->time, VAR_15, VAR_13->sym);
  if (VAR_19) {
   if (VAR_19 < 0)
    return VAR_19;
   VAR_19 = FUNC_5(VAR_10, VAR_17, VAR_12,
          VAR_13, VAR_14, VAR_15);
  }
 } else if (VAR_12->flags & VAR_6) {
  VAR_19 = FUNC_10(VAR_10, VAR_17, VAR_12->time, VAR_15);
 } else if (VAR_12->flags & VAR_7) {
  VAR_19 = FUNC_11(VAR_17, VAR_12, VAR_15);
 } else if (VAR_12->flags & VAR_1 &&
     VAR_13->sym != VAR_14->sym && VAR_14->sym &&
     VAR_14->addr == VAR_14->sym->start) {
  struct call_path_root *VAR_25 = VAR_17->crp->cpr;
  struct call_path *VAR_26;







  VAR_26 = FUNC_1(VAR_25, VAR_17->stack[VAR_17->cnt - 1].cp,
     VAR_14->sym, VAR_12->addr,
     VAR_17->kernel_start);
  VAR_19 = FUNC_8(VAR_17, 0, VAR_12->time, VAR_15, VAR_26, 0,
         0);
  if (!VAR_19)
   VAR_17->stack[VAR_17->cnt - 1].non_call = 1;
 }

 return VAR_19;
}

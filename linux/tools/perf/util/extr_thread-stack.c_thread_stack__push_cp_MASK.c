
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct thread_stack_entry {int no_call; int trace_end; int non_call; scalar_t__ db_id; struct call_path* cp; int cyc_count; int insn_count; int branch_count; void* ref; void* timestamp; void* ret_addr; } ;
struct thread_stack {scalar_t__ cnt; scalar_t__ sz; int cyc_count; int insn_count; int branch_count; struct thread_stack_entry* stack; } ;
struct call_path {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread_stack*) ;

__attribute__((used)) static int FUNC_1(struct thread_stack *VAR_1, u64 VAR_2,
     u64 VAR_3, u64 VAR_4, struct call_path *VAR_5,
     bool VAR_6, bool VAR_7)
{
 struct thread_stack_entry *VAR_8;
 int VAR_9;

 if (!VAR_5)
  return -VAR_0;

 if (VAR_1->cnt == VAR_1->sz) {
  VAR_9 = FUNC_0(VAR_1);
  if (VAR_9)
   return VAR_9;
 }

 VAR_8 = &VAR_1->stack[VAR_1->cnt++];
 VAR_8->ret_addr = VAR_2;
 VAR_8->timestamp = VAR_3;
 VAR_8->ref = VAR_4;
 VAR_8->branch_count = VAR_1->branch_count;
 VAR_8->insn_count = VAR_1->insn_count;
 VAR_8->cyc_count = VAR_1->cyc_count;
 VAR_8->cp = VAR_5;
 VAR_8->no_call = VAR_6;
 VAR_8->trace_end = VAR_7;
 VAR_8->non_call = 0;
 VAR_8->db_id = 0;

 return 0;
}

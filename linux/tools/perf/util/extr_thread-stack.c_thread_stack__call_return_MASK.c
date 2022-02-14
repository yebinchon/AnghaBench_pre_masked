
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct thread_stack_entry {void* db_id; scalar_t__ non_call; scalar_t__ no_call; int ref; scalar_t__ cyc_count; scalar_t__ insn_count; scalar_t__ branch_count; int timestamp; int cp; } ;
struct thread_stack {scalar_t__ cyc_count; scalar_t__ insn_count; scalar_t__ branch_count; struct thread_stack_entry* stack; int comm; struct call_return_processor* crp; } ;
struct thread {int dummy; } ;
struct call_return_processor {int (* process ) (struct call_return*,void**,int ) ;int data; } ;
struct call_return {void* db_id; int flags; void* return_ref; int call_ref; scalar_t__ cyc_count; scalar_t__ insn_count; scalar_t__ branch_count; void* return_time; int call_time; int cp; int comm; struct thread* thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct call_return*,void**,int ) ;

__attribute__((used)) static int FUNC_1(struct thread *VAR_3,
         struct thread_stack *VAR_4, size_t VAR_5,
         u64 VAR_6, u64 VAR_7, bool VAR_8)
{
 struct call_return_processor *VAR_9 = VAR_4->crp;
 struct thread_stack_entry *VAR_10;
 struct call_return VAR_11 = {
  .thread = VAR_3,
  .comm = VAR_4->comm,
  .db_id = 0,
 };
 u64 *VAR_12;

 VAR_10 = &VAR_4->stack[VAR_5];
 VAR_11.cp = VAR_10->cp;
 VAR_11.call_time = VAR_10->timestamp;
 VAR_11.return_time = VAR_6;
 VAR_11.branch_count = VAR_4->branch_count - VAR_10->branch_count;
 VAR_11.insn_count = VAR_4->insn_count - VAR_10->insn_count;
 VAR_11.cyc_count = VAR_4->cyc_count - VAR_10->cyc_count;
 VAR_11.db_id = VAR_10->db_id;
 VAR_11.call_ref = VAR_10->ref;
 VAR_11.return_ref = VAR_7;
 if (VAR_10->no_call)
  VAR_11.flags |= VAR_1;
 if (VAR_8)
  VAR_11.flags |= VAR_2;
 if (VAR_10->non_call)
  VAR_11.flags |= VAR_0;






 VAR_12 = VAR_5 ? &(VAR_10 - 1)->db_id : ((void*)0);

 return VAR_9->process(&VAR_11, VAR_12, VAR_9->data);
}

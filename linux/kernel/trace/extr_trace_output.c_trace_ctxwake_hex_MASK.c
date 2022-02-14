
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
struct ctx_switch_entry {int prev_pid; int prev_prio; int next_cpu; int next_pid; int next_prio; int next_state; int prev_state; } ;


 int FUNC_0 (struct trace_seq*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ctx_switch_entry*,int ) ;
 int FUNC_3 (struct trace_seq*) ;

__attribute__((used)) static int FUNC_4(struct trace_iterator *VAR_0, char VAR_1)
{
 struct ctx_switch_entry *VAR_2;
 struct trace_seq *VAR_3 = &VAR_0->seq;
 int VAR_4;

 FUNC_2(VAR_2, VAR_0->ent);

 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_2->prev_state);
 VAR_4 = FUNC_1(VAR_2->next_state);

 FUNC_0(VAR_3, VAR_2->prev_pid);
 FUNC_0(VAR_3, VAR_2->prev_prio);
 FUNC_0(VAR_3, VAR_1);
 FUNC_0(VAR_3, VAR_2->next_cpu);
 FUNC_0(VAR_3, VAR_2->next_pid);
 FUNC_0(VAR_3, VAR_2->next_prio);
 FUNC_0(VAR_3, VAR_4);

 return FUNC_3(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int seq; int ent; } ;
struct ctx_switch_entry {int next_prio; int next_pid; int next_cpu; int prev_prio; int prev_pid; int next_state; int prev_state; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ctx_switch_entry*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,int ,char,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct trace_iterator *VAR_0, char VAR_1)
{
 struct ctx_switch_entry *VAR_2;
 int VAR_3;

 FUNC_1(VAR_2, VAR_0->ent);

 if (!VAR_1)
  VAR_1 = FUNC_0(VAR_2->prev_state);
 VAR_3 = FUNC_0(VAR_2->next_state);
 FUNC_3(&VAR_0->seq, "%d %d %c %d %d %d %c\n",
    VAR_2->prev_pid,
    VAR_2->prev_prio,
    VAR_1,
    VAR_2->next_cpu,
    VAR_2->next_pid,
    VAR_2->next_prio,
    VAR_3);

 return FUNC_2(&VAR_0->seq);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int seq; int ent; } ;
struct ctx_switch_entry {int next_prio; int next_pid; int next_cpu; int prev_prio; int prev_pid; int prev_state; int next_state; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ctx_switch_entry*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,int ,int,char*,int ,int ,int ,int,char*) ;

__attribute__((used)) static enum print_line_t FUNC_5(struct trace_iterator *VAR_1,
          char *VAR_2)
{
 struct ctx_switch_entry *VAR_3;
 char VAR_4[VAR_0];
 int VAR_5, VAR_6;


 FUNC_1(VAR_3, VAR_1->ent);

 VAR_6 = FUNC_0(VAR_3->next_state);
 VAR_5 = FUNC_0(VAR_3->prev_state);
 FUNC_2(VAR_3->next_pid, VAR_4);
 FUNC_4(&VAR_1->seq,
    " %5d:%3d:%c %s [%03d] %5d:%3d:%c %s\n",
    VAR_3->prev_pid,
    VAR_3->prev_prio,
    VAR_5, VAR_2,
    VAR_3->next_cpu,
    VAR_3->next_pid,
    VAR_3->next_prio,
    VAR_6, VAR_4);

 return FUNC_3(&VAR_1->seq);
}

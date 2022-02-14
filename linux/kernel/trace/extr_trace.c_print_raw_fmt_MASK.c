
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct trace_iterator {int ts; int cpu; struct trace_entry* ent; struct trace_seq seq; struct trace_array* tr; } ;
struct trace_event {TYPE_1__* funcs; } ;
struct trace_entry {int type; int pid; } ;
struct trace_array {int trace_flags; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int (* raw ) (struct trace_iterator*,int ,struct trace_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct trace_event* FUNC_0 (int ) ;
 int FUNC_1 (struct trace_iterator*,int ,struct trace_event*) ;
 int FUNC_2 (struct trace_seq*) ;
 scalar_t__ FUNC_3 (struct trace_seq*) ;
 int FUNC_4 (struct trace_seq*,char*,int ,...) ;

__attribute__((used)) static enum print_line_t FUNC_5(struct trace_iterator *VAR_2)
{
 struct trace_array *VAR_3 = VAR_2->tr;
 struct trace_seq *VAR_4 = &VAR_2->seq;
 struct trace_entry *VAR_5;
 struct trace_event *VAR_6;

 VAR_5 = VAR_2->ent;

 if (VAR_3->trace_flags & VAR_0)
  FUNC_4(VAR_4, "%d %d %llu ",
     VAR_5->pid, VAR_2->cpu, VAR_2->ts);

 if (FUNC_3(VAR_4))
  return VAR_1;

 VAR_6 = FUNC_0(VAR_5->type);
 if (VAR_6)
  return VAR_6->funcs->raw(VAR_2, 0, VAR_6);

 FUNC_4(VAR_4, "%d ?\n", VAR_5->type);

 return FUNC_2(VAR_4);
}

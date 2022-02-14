
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
struct TYPE_2__ {int (* hex ) (struct trace_iterator*,int ,struct trace_event*) ;} ;


 int FUNC_0 (struct trace_seq*,unsigned char) ;
 int FUNC_1 (struct trace_seq*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct trace_event* FUNC_2 (int ) ;
 int FUNC_3 (struct trace_iterator*,int ,struct trace_event*) ;
 int FUNC_4 (struct trace_seq*) ;
 scalar_t__ FUNC_5 (struct trace_seq*) ;

__attribute__((used)) static enum print_line_t FUNC_6(struct trace_iterator *VAR_3)
{
 struct trace_array *VAR_4 = VAR_3->tr;
 struct trace_seq *VAR_5 = &VAR_3->seq;
 unsigned char VAR_6 = '\n';
 struct trace_entry *VAR_7;
 struct trace_event *VAR_8;

 VAR_7 = VAR_3->ent;

 if (VAR_4->trace_flags & VAR_0) {
  FUNC_1(VAR_5, VAR_7->pid);
  FUNC_1(VAR_5, VAR_3->cpu);
  FUNC_1(VAR_5, VAR_3->ts);
  if (FUNC_5(VAR_5))
   return VAR_2;
 }

 VAR_8 = FUNC_2(VAR_7->type);
 if (VAR_8) {
  enum print_line_t VAR_9 = VAR_8->funcs->hex(VAR_3, 0, VAR_8);
  if (VAR_9 != VAR_1)
   return VAR_9;
 }

 FUNC_0(VAR_5, VAR_6);

 return FUNC_4(VAR_5);
}

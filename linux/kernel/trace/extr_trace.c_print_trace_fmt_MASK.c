
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct trace_iterator {int iter_flags; struct trace_entry* ent; struct trace_seq seq; struct trace_array* tr; } ;
struct trace_event {TYPE_1__* funcs; } ;
struct trace_entry {int type; } ;
struct trace_array {unsigned long trace_flags; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int (* trace ) (struct trace_iterator*,unsigned long,struct trace_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 struct trace_event* FUNC_0 (int ) ;
 int FUNC_1 (struct trace_iterator*,unsigned long,struct trace_event*) ;
 int FUNC_2 (struct trace_iterator*) ;
 int FUNC_3 (struct trace_seq*) ;
 int FUNC_4 (struct trace_iterator*) ;
 int FUNC_5 (struct trace_iterator*) ;
 scalar_t__ FUNC_6 (struct trace_seq*) ;
 int FUNC_7 (struct trace_seq*,char*,int ) ;

__attribute__((used)) static enum print_line_t FUNC_8(struct trace_iterator *VAR_4)
{
 struct trace_array *VAR_5 = VAR_4->tr;
 struct trace_seq *VAR_6 = &VAR_4->seq;
 unsigned long VAR_7 = (VAR_5->trace_flags & VAR_2);
 struct trace_entry *VAR_8;
 struct trace_event *VAR_9;

 VAR_8 = VAR_4->ent;

 FUNC_2(VAR_4);

 VAR_9 = FUNC_0(VAR_8->type);

 if (VAR_5->trace_flags & VAR_1) {
  if (VAR_4->iter_flags & VAR_0)
   FUNC_5(VAR_4);
  else
   FUNC_4(VAR_4);
 }

 if (FUNC_6(VAR_6))
  return VAR_3;

 if (VAR_9)
  return VAR_9->funcs->trace(VAR_4, VAR_7, VAR_9);

 FUNC_7(VAR_6, "Unknown type %d\n", VAR_8->type);

 return FUNC_3(VAR_6);
}

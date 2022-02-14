
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {scalar_t__ ent_size; scalar_t__ ent; struct trace_seq seq; } ;
struct trace_event {int dummy; } ;
struct stack_entry {unsigned long* caller; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct trace_seq*,unsigned long,int) ;
 int FUNC_1 (struct stack_entry*,scalar_t__) ;
 int FUNC_2 (struct trace_seq*) ;
 scalar_t__ FUNC_3 (struct trace_seq*) ;
 int FUNC_4 (struct trace_seq*,char) ;
 int FUNC_5 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t FUNC_6(struct trace_iterator *VAR_1,
        int VAR_2, struct trace_event *VAR_3)
{
 struct stack_entry *VAR_4;
 struct trace_seq *VAR_5 = &VAR_1->seq;
 unsigned long *VAR_6;
 unsigned long *VAR_7;

 FUNC_1(VAR_4, VAR_1->ent);
 VAR_7 = (unsigned long *)((long)VAR_1->ent + VAR_1->ent_size);

 FUNC_5(VAR_5, "<stack trace>\n");

 for (VAR_6 = VAR_4->caller; VAR_6 && VAR_6 < VAR_7 && *VAR_6 != VAR_0; VAR_6++) {

  if (FUNC_3(VAR_5))
   break;

  FUNC_5(VAR_5, " => ");
  FUNC_0(VAR_5, *VAR_6, VAR_2);
  FUNC_4(VAR_5, '\n');
 }

 return FUNC_2(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
struct trace_event {int dummy; } ;
struct ftrace_entry {scalar_t__ parent_ip; scalar_t__ ip; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int FUNC_0 (struct trace_seq*,scalar_t__,int) ;
 int FUNC_1 (struct ftrace_entry*,int ) ;
 int FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*,char) ;
 int FUNC_4 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t FUNC_5(struct trace_iterator *VAR_1, int VAR_2,
     struct trace_event *VAR_3)
{
 struct ftrace_entry *VAR_4;
 struct trace_seq *VAR_5 = &VAR_1->seq;

 FUNC_1(VAR_4, VAR_1->ent);

 FUNC_0(VAR_5, VAR_4->ip, VAR_2);

 if ((VAR_2 & VAR_0) && VAR_4->parent_ip) {
  FUNC_4(VAR_5, " <-");
  FUNC_0(VAR_5, VAR_4->parent_ip, VAR_2);
 }

 FUNC_3(VAR_5, '\n');

 return FUNC_2(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
struct trace_event {int dummy; } ;
struct print_entry {int buf; int ip; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int FUNC_0 (struct trace_seq*,int ,int) ;
 int FUNC_1 (struct print_entry*,int ) ;
 int FUNC_2 (struct trace_seq*) ;
 int FUNC_3 (struct trace_seq*,char*,int ) ;

__attribute__((used)) static enum print_line_t FUNC_4(struct trace_iterator *VAR_0,
        int VAR_1, struct trace_event *VAR_2)
{
 struct print_entry *VAR_3;
 struct trace_seq *VAR_4 = &VAR_0->seq;

 FUNC_1(VAR_3, VAR_0->ent);

 FUNC_0(VAR_4, VAR_3->ip, VAR_1);
 FUNC_3(VAR_4, ": %s", VAR_3->buf);

 return FUNC_2(VAR_4);
}

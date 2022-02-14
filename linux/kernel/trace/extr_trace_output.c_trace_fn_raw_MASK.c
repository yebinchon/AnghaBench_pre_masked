
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int seq; int ent; } ;
struct trace_event {int dummy; } ;
struct ftrace_entry {int parent_ip; int ip; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int FUNC_0 (struct ftrace_entry*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,int ) ;

__attribute__((used)) static enum print_line_t FUNC_3(struct trace_iterator *VAR_0, int VAR_1,
          struct trace_event *VAR_2)
{
 struct ftrace_entry *VAR_3;

 FUNC_0(VAR_3, VAR_0->ent);

 FUNC_2(&VAR_0->seq, "%lx %lx\n",
    VAR_3->ip,
    VAR_3->parent_ip);

 return FUNC_1(&VAR_0->seq);
}

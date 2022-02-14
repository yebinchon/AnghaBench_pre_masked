
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {int seq; TYPE_1__* ent; } ;
struct trace_event {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;

enum print_line_t FUNC_2(struct trace_iterator *VAR_0, int VAR_1,
      struct trace_event *VAR_2)
{
 FUNC_1(&VAR_0->seq, "type: %d\n", VAR_0->ent->type);

 return FUNC_0(&VAR_0->seq);
}

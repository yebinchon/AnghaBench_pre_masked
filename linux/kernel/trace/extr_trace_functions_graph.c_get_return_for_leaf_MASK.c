
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct trace_iterator {int cpu; TYPE_1__* trace_buffer; struct fgraph_data* private; } ;
struct ring_buffer_iter {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_10__ {scalar_t__ func; } ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ pid; } ;
struct ftrace_graph_ret_entry {TYPE_5__ ret; TYPE_3__ ent; } ;
struct TYPE_9__ {scalar_t__ func; } ;
struct TYPE_7__ {scalar_t__ pid; } ;
struct ftrace_graph_ent_entry {TYPE_4__ graph_ent; TYPE_2__ ent; } ;
struct fgraph_data {struct ftrace_graph_ret_entry ret; struct ftrace_graph_ent_entry ent; scalar_t__ failed; } ;
struct TYPE_6__ {int buffer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *) ;
 struct ftrace_graph_ret_entry* FUNC_1 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_2 (struct ring_buffer_iter*,int *) ;
 struct ring_buffer_event* FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (struct ring_buffer_iter*,int *) ;
 struct ring_buffer_iter* FUNC_5 (struct trace_iterator*,int ) ;

__attribute__((used)) static struct ftrace_graph_ret_entry *
FUNC_6(struct trace_iterator *VAR_1,
  struct ftrace_graph_ent_entry *VAR_2)
{
 struct fgraph_data *VAR_3 = VAR_1->private;
 struct ring_buffer_iter *VAR_4 = ((void*)0);
 struct ring_buffer_event *VAR_5;
 struct ftrace_graph_ret_entry *VAR_6;





 if (VAR_3 && VAR_3->failed) {
  VAR_2 = &VAR_3->ent;
  VAR_6 = &VAR_3->ret;
 } else {

  VAR_4 = FUNC_5(VAR_1, VAR_1->cpu);


  if (VAR_4)
   VAR_5 = FUNC_2(VAR_4, ((void*)0));
  else {




   FUNC_0(VAR_1->trace_buffer->buffer, VAR_1->cpu,
         ((void*)0), ((void*)0));
   VAR_5 = FUNC_3(VAR_1->trace_buffer->buffer, VAR_1->cpu,
       ((void*)0), ((void*)0));
  }

  if (!VAR_5)
   return ((void*)0);

  VAR_6 = FUNC_1(VAR_5);

  if (VAR_3) {




   VAR_3->ent = *VAR_2;





   if (VAR_6->ent.type == VAR_0)
    VAR_3->ret = *VAR_6;
   else
    VAR_3->ret.ent.type = VAR_6->ent.type;
  }
 }

 if (VAR_6->ent.type != VAR_0)
  return ((void*)0);

 if (VAR_2->ent.pid != VAR_6->ent.pid ||
   VAR_2->graph_ent.func != VAR_6->ret.func)
  return ((void*)0);


 if (VAR_4)
  FUNC_4(VAR_4, ((void*)0));

 return VAR_6;
}

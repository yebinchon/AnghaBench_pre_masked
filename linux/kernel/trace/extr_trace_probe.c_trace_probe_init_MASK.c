
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_probe_event {int dummy; } ;
struct trace_probe {TYPE_2__* event; int list; } ;
struct trace_event_call {void* name; TYPE_1__* class; } ;
struct TYPE_3__ {void* system; int fields; } ;
struct TYPE_4__ {TYPE_1__ class; int probes; int files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (char const*,int ) ;
 TYPE_2__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct trace_probe*) ;
 struct trace_event_call* FUNC_5 (struct trace_probe*) ;

int FUNC_6(struct trace_probe *VAR_3, const char *VAR_4,
       const char *VAR_5)
{
 struct trace_event_call *VAR_6;
 int VAR_7 = 0;

 if (!VAR_4 || !VAR_5)
  return -VAR_0;

 VAR_3->event = FUNC_2(sizeof(struct trace_probe_event), VAR_2);
 if (!VAR_3->event)
  return -VAR_1;

 FUNC_0(&VAR_3->event->files);
 FUNC_0(&VAR_3->event->class.fields);
 FUNC_0(&VAR_3->event->probes);
 FUNC_0(&VAR_3->list);
 FUNC_3(&VAR_3->event->probes, &VAR_3->list);

 VAR_6 = FUNC_5(VAR_3);
 VAR_6->class = &VAR_3->event->class;
 VAR_6->name = FUNC_1(VAR_4, VAR_2);
 if (!VAR_6->name) {
  VAR_7 = -VAR_1;
  goto error;
 }

 VAR_3->event->class.system = FUNC_1(VAR_5, VAR_2);
 if (!VAR_3->event->class.system) {
  VAR_7 = -VAR_1;
  goto error;
 }

 return 0;

error:
 FUNC_4(VAR_3);
 return VAR_7;
}

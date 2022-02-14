
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_probe {TYPE_1__* event; } ;
struct trace_event_file {int dummy; } ;
struct event_file_link {int list; } ;
struct TYPE_2__ {int files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct event_file_link*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct trace_probe*,int ) ;
 struct event_file_link* FUNC_5 (struct trace_probe*,struct trace_event_file*) ;

int FUNC_6(struct trace_probe *VAR_2,
       struct trace_event_file *VAR_3)
{
 struct event_file_link *VAR_4;

 VAR_4 = FUNC_5(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->list);
 FUNC_3();
 FUNC_0(VAR_4);

 if (FUNC_2(&VAR_2->event->files))
  FUNC_4(VAR_2, VAR_1);

 return 0;
}

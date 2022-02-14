
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_probe {TYPE_1__* event; } ;
struct trace_event_file {int dummy; } ;
struct event_file_link {int list; struct trace_event_file* file; } ;
struct TYPE_2__ {int files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct event_file_link* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct trace_probe*,int ) ;

int FUNC_4(struct trace_probe *VAR_3, struct trace_event_file *VAR_4)
{
 struct event_file_link *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->file = VAR_4;
 FUNC_0(&VAR_5->list);
 FUNC_2(&VAR_5->list, &VAR_3->event->files);
 FUNC_3(VAR_3, VAR_2);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int list; int triggers; int tm_ref; int sm_ref; struct trace_array* tr; struct trace_event_call* event_call; } ;
struct trace_event_call {int dummy; } ;
struct trace_array {int events; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 struct trace_event_file* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct trace_event_file *
FUNC_4(struct trace_event_call *VAR_2,
         struct trace_array *VAR_3)
{
 struct trace_event_file *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->event_call = VAR_2;
 VAR_4->tr = VAR_3;
 FUNC_1(&VAR_4->sm_ref, 0);
 FUNC_1(&VAR_4->tm_ref, 0);
 FUNC_0(&VAR_4->triggers);
 FUNC_3(&VAR_4->list, &VAR_3->events);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_file {int triggers; } ;
struct event_trigger_data {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct trace_event_file*,int) ;
 int FUNC_3 (struct trace_event_file*) ;

__attribute__((used)) static int FUNC_4(struct event_trigger_data *VAR_0,
          struct trace_event_file *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_0->list, &VAR_1->triggers);

 FUNC_3(VAR_1);

 if (FUNC_2(VAR_1, 1) < 0) {
  FUNC_1(&VAR_0->list);
  FUNC_3(VAR_1);
  VAR_2--;
 }

 return VAR_2;
}

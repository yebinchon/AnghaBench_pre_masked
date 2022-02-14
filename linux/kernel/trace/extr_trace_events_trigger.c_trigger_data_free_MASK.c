
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_trigger_data {TYPE_1__* cmd_ops; } ;
struct TYPE_2__ {int (* set_filter ) (int *,struct event_trigger_data*,int *) ;} ;


 int FUNC_0 (struct event_trigger_data*) ;
 int FUNC_1 (int *,struct event_trigger_data*,int *) ;
 int FUNC_2 () ;

void FUNC_3(struct event_trigger_data *VAR_0)
{
 if (VAR_0->cmd_ops->set_filter)
  VAR_0->cmd_ops->set_filter(((void*)0), VAR_0, ((void*)0));


 FUNC_2();

 FUNC_0(VAR_0);
}

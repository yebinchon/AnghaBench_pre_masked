
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_trigger_data {TYPE_1__* attrs; } ;
struct event_trigger_ops {int dummy; } ;
struct event_trigger_data {int ref; struct hist_trigger_data* private_data; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 int FUNC_0 (scalar_t__,struct event_trigger_data*) ;

__attribute__((used)) static int FUNC_1(struct event_trigger_ops *VAR_0,
       struct event_trigger_data *VAR_1)
{
 struct hist_trigger_data *VAR_2 = VAR_1->private_data;

 if (!VAR_1->ref && VAR_2->attrs->name)
  FUNC_0(VAR_2->attrs->name, VAR_1);

 VAR_1->ref++;

 return 0;
}

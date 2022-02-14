
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_trigger_ops {int dummy; } ;
struct event_trigger_data {TYPE_1__* named_data; int ref; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (struct event_trigger_ops*,TYPE_1__*) ;
 int FUNC_1 (int ,struct event_trigger_data*) ;

__attribute__((used)) static int FUNC_2(struct event_trigger_ops *VAR_0,
      struct event_trigger_data *VAR_1)
{
 VAR_1->ref++;

 FUNC_1(VAR_1->named_data->name, VAR_1);

 FUNC_0(VAR_0, VAR_1->named_data);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_trigger_ops {int dummy; } ;
struct event_trigger_data {int ref; } ;



int FUNC_0(struct event_trigger_ops *VAR_0,
         struct event_trigger_data *VAR_1)
{
 VAR_1->ref++;
 return 0;
}

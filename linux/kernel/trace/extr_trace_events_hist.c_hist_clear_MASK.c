
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_data {int map; } ;
struct event_trigger_data {scalar_t__ name; struct hist_trigger_data* private_data; } ;


 int FUNC_0 (struct event_trigger_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct event_trigger_data*) ;

__attribute__((used)) static void FUNC_4(struct event_trigger_data *VAR_0)
{
 struct hist_trigger_data *VAR_1 = VAR_0->private_data;

 if (VAR_0->name)
  FUNC_0(VAR_0);

 FUNC_1();

 FUNC_2(VAR_1->map);

 if (VAR_0->name)
  FUNC_3(VAR_0);
}

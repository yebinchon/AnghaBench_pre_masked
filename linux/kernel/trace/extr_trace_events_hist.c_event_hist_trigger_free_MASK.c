
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_data {int dummy; } ;
struct event_trigger_ops {int dummy; } ;
struct event_trigger_data {scalar_t__ ref; scalar_t__ name; struct hist_trigger_data* private_data; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct event_trigger_data*) ;
 int FUNC_2 (struct hist_trigger_data*) ;
 int FUNC_3 (struct hist_trigger_data*) ;
 int FUNC_4 (struct event_trigger_data*) ;
 int FUNC_5 (struct hist_trigger_data*) ;

__attribute__((used)) static void FUNC_6(struct event_trigger_ops *VAR_0,
        struct event_trigger_data *VAR_1)
{
 struct hist_trigger_data *VAR_2 = VAR_1->private_data;

 if (FUNC_0(VAR_1->ref <= 0))
  return;

 VAR_1->ref--;
 if (!VAR_1->ref) {
  if (VAR_1->name)
   FUNC_1(VAR_1);

  FUNC_4(VAR_1);

  FUNC_3(VAR_2);

  FUNC_5(VAR_2);

  FUNC_2(VAR_2);
 }
}

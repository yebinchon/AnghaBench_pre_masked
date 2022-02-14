
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_trigger_ops {int dummy; } ;
struct event_trigger_data {scalar_t__ ref; int named_data; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct event_trigger_data*) ;
 int FUNC_2 (struct event_trigger_ops*,int ) ;
 int FUNC_3 (struct event_trigger_data*) ;

__attribute__((used)) static void FUNC_4(struct event_trigger_ops *VAR_0,
       struct event_trigger_data *VAR_1)
{
 if (FUNC_0(VAR_1->ref <= 0))
  return;

 FUNC_2(VAR_0, VAR_1->named_data);

 VAR_1->ref--;
 if (!VAR_1->ref) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_1);
 }
}

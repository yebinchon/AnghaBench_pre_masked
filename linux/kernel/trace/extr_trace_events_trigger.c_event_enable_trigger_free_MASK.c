
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct event_trigger_ops {int dummy; } ;
struct event_trigger_data {scalar_t__ ref; struct enable_trigger_data* private_data; } ;
struct enable_trigger_data {TYPE_2__* file; } ;
struct TYPE_4__ {TYPE_1__* event_call; } ;
struct TYPE_3__ {int mod; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct enable_trigger_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (struct event_trigger_data*) ;

void FUNC_5(struct event_trigger_ops *VAR_0,
          struct event_trigger_data *VAR_1)
{
 struct enable_trigger_data *VAR_2 = VAR_1->private_data;

 if (FUNC_0(VAR_1->ref <= 0))
  return;

 VAR_1->ref--;
 if (!VAR_1->ref) {

  FUNC_3(VAR_2->file, 0, 1);
  FUNC_2(VAR_2->file->event_call->mod);
  FUNC_4(VAR_1);
  FUNC_1(VAR_2);
 }
}

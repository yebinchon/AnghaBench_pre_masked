
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tick_callback {void (* member_0 ) (void*,float) ;void* member_1; } ;
struct TYPE_3__ {int draw_callbacks_mutex; int tick_callbacks; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 int FUNC_0 (int ,struct tick_callback*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void (*VAR_1)(void *VAR_2, float VAR_3),
         void *VAR_4)
{
 if (!VAR_0)
  return;

 struct tick_callback VAR_5 = {VAR_1, VAR_4};

 FUNC_1(&VAR_0->data.draw_callbacks_mutex);
 FUNC_0(VAR_0->data.tick_callbacks, &VAR_5);
 FUNC_2(&VAR_0->data.draw_callbacks_mutex);
}

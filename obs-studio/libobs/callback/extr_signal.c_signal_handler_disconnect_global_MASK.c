
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct global_callback_info {void* member_1; int member_2; int remove; scalar_t__ signaling; int member_0; } ;
struct TYPE_6__ {struct global_callback_info* array; } ;
struct TYPE_5__ {int global_callbacks_mutex; TYPE_3__ global_callbacks; } ;
typedef TYPE_1__ signal_handler_t ;
typedef int global_signal_callback_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__,size_t) ;
 size_t FUNC_1 (TYPE_3__,struct global_callback_info*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(signal_handler_t *VAR_1,
          global_signal_callback_t VAR_2,
          void *VAR_3)
{
 struct global_callback_info VAR_4 = {VAR_2, VAR_3, 0};
 size_t VAR_5;

 if (!VAR_1 || !VAR_2)
  return;

 FUNC_2(&VAR_1->global_callbacks_mutex);

 VAR_5 = FUNC_1(VAR_1->global_callbacks, &VAR_4, 0);
 if (VAR_5 != VAR_0) {
  struct global_callback_info *VAR_6 =
   VAR_1->global_callbacks.array + VAR_5;

  if (VAR_6->signaling)
   VAR_6->remove = 1;
  else
   FUNC_0(VAR_1->global_callbacks, VAR_5);
 }

 FUNC_3(&VAR_1->global_callbacks_mutex);
}

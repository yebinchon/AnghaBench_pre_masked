
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct global_callback_info {void* member_1; int member_3; int member_2; int member_0; } ;
struct TYPE_3__ {int global_callbacks_mutex; int global_callbacks; } ;
typedef TYPE_1__ signal_handler_t ;
typedef int global_signal_callback_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ,struct global_callback_info*,int ) ;
 int FUNC_1 (int ,struct global_callback_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(signal_handler_t *VAR_1,
       global_signal_callback_t VAR_2,
       void *VAR_3)
{
 struct global_callback_info VAR_4 = {VAR_2, VAR_3, 0, 0};
 size_t VAR_5;

 if (!VAR_1 || !VAR_2)
  return;

 FUNC_2(&VAR_1->global_callbacks_mutex);

 VAR_5 = FUNC_0(VAR_1->global_callbacks, &VAR_4, 0);
 if (VAR_5 == VAR_0)
  FUNC_1(VAR_1->global_callbacks, &VAR_4);

 FUNC_3(&VAR_1->global_callbacks_mutex);
}

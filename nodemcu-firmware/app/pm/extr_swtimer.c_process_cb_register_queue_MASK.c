
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {struct TYPE_4__* next; int suspend_policy; void* tmr_cb_ptr; } ;
typedef TYPE_1__ tmr_cb_queue_t ;
typedef int task_param_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(task_param_t VAR_2, uint8 VAR_3)
{
  if(!FUNC_2()){
    FUNC_0("L== NULL, Lua not yet started! posting task");
    FUNC_4(VAR_0, 0);
    return;
  }
  while(VAR_1 != ((void*)0)){
    tmr_cb_queue_t* VAR_4 = VAR_1;
    void* VAR_5 = VAR_4->tmr_cb_ptr;
    FUNC_3(VAR_5, VAR_4->suspend_policy);
    VAR_1 = VAR_1->next;
    FUNC_1(VAR_4);
  }
  return;
}

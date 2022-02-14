
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* child_callback ) (void*) ;int* _errno; void* child_callback_user; } ;
struct TYPE_6__ {TYPE_1__ fork; int type; } ;
struct TYPE_7__ {scalar_t__ th; scalar_t__ fork_result; int result_sem; int request_sem; TYPE_2__ request; } ;
typedef TYPE_3__ ptrace_wrap_instance ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

pid_t FUNC_4(ptrace_wrap_instance *VAR_2, void (*VAR_3)(void *), void *VAR_4) {
 if (VAR_2->th == FUNC_1 ()) {
  pid_t VAR_5 = FUNC_0 ();
  if (VAR_5 == 0) {
   VAR_3 (VAR_4);
   return 0;
  } else {
   return VAR_5;
  }
 }

 int VAR_6 = 0;
 VAR_2->request.type = VAR_0;
 VAR_2->request.fork.child_callback = VAR_3;
 VAR_2->request.fork.child_callback_user = VAR_4;
 VAR_2->request.fork._errno = &VAR_6;
 FUNC_2 (&VAR_2->request_sem);
 FUNC_3 (&VAR_2->result_sem);
 VAR_1 = VAR_6;
 return VAR_2->fork_result;
}

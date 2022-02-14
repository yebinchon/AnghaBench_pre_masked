
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* (* func ) (void*) ;void* user; } ;
struct TYPE_6__ {TYPE_1__ func; int type; } ;
struct TYPE_7__ {scalar_t__ th; void* func_result; int result_sem; int request_sem; TYPE_2__ request; } ;
typedef TYPE_3__ ptrace_wrap_instance ;
typedef void* (* ptrace_wrap_func_func ) (void*) ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void *FUNC_3(ptrace_wrap_instance *VAR_1, ptrace_wrap_func_func VAR_2, void *VAR_3) {
 if (VAR_1->th == FUNC_0 ()) {
  return VAR_2 (VAR_3);
 }

 VAR_1->request.type = VAR_0;
 VAR_1->request.func.func = VAR_2;
 VAR_1->request.func.user = VAR_3;
 FUNC_1 (&VAR_1->request_sem);
 FUNC_2 (&VAR_1->result_sem);
 return VAR_1->func_result;
}

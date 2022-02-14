
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ptrace_wrap_ptrace_request ;
struct TYPE_5__ {int* _errno; void* data; void* addr; int pid; int request; } ;
struct TYPE_6__ {TYPE_1__ ptrace; int type; } ;
struct TYPE_7__ {scalar_t__ th; long ptrace_result; int result_sem; int request_sem; TYPE_2__ request; } ;
typedef TYPE_3__ ptrace_wrap_instance ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 long FUNC_1 (int ,int ,void*,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

long FUNC_4(ptrace_wrap_instance *VAR_2, ptrace_wrap_ptrace_request VAR_3, pid_t VAR_4, void *VAR_5, void *VAR_6) {
 if (VAR_2->th == FUNC_0 ()) {
  return FUNC_1 (VAR_3, VAR_4, VAR_5, VAR_6);
 }

 int VAR_7 = 0;
 VAR_2->request.type = VAR_0;
 VAR_2->request.ptrace.request = VAR_3;
 VAR_2->request.ptrace.pid = VAR_4;
 VAR_2->request.ptrace.addr = VAR_5;
 VAR_2->request.ptrace.data = VAR_6;
 VAR_2->request.ptrace._errno = &VAR_7;
 FUNC_2 (&VAR_2->request_sem);
 FUNC_3 (&VAR_2->result_sem);
 VAR_1 = VAR_7;
 return VAR_2->ptrace_result;
}

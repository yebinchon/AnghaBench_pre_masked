
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int result_sem; int request_sem; int th; } ;
typedef TYPE_1__ ptrace_wrap_instance ;


 int FUNC_0 (int *,int *,void* (*) (void*),TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ VAR_0 ;

int FUNC_3(ptrace_wrap_instance *VAR_1) {
 int VAR_2 = FUNC_2 (&VAR_1->request_sem, 0, 0);
 if (VAR_2 != 0) {
  return VAR_2;
 }

 VAR_2 = FUNC_2 (&VAR_1->result_sem, 0, 0);
 if (VAR_2 != 0) {
  FUNC_1 (&VAR_1->request_sem);
  return VAR_2;
 }

 VAR_2 = FUNC_0 (&VAR_1->th, ((void*)0), (void *(*)(void *)) VAR_0, VAR_1);
 if (VAR_2 != 0) {
  FUNC_1 (&VAR_1->request_sem);
  FUNC_1 (&VAR_1->result_sem);
  return VAR_2;
 }

 return 0;
}

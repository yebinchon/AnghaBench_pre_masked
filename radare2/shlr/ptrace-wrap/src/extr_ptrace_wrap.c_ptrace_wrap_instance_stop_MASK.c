
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
struct TYPE_5__ {int result_sem; int request_sem; int th; TYPE_1__ request; } ;
typedef TYPE_2__ ptrace_wrap_instance ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(ptrace_wrap_instance *VAR_1) {
 VAR_1->request.type = VAR_0;
 FUNC_2 (&VAR_1->request_sem);
 FUNC_0 (VAR_1->th, ((void*)0));
 FUNC_1 (&VAR_1->request_sem);
 FUNC_1 (&VAR_1->result_sem);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; } ;
struct TYPE_8__ {int result_sem; TYPE_1__ request; int request_sem; } ;
typedef TYPE_2__ ptrace_wrap_instance ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void *FUNC_5(ptrace_wrap_instance *VAR_0) {
 while (1) {
  FUNC_1 (&VAR_0->request_sem);
  switch (VAR_0->request.type) {
  case 128:
   goto stop;
  case 129:
   FUNC_4 (VAR_0);
   break;
  case 131:
   FUNC_2 (VAR_0);
   break;
  case 130:
   FUNC_3 (VAR_0);
   break;
  }
  FUNC_0 (&VAR_0->result_sem);
 }
stop:
 return ((void*)0);
}

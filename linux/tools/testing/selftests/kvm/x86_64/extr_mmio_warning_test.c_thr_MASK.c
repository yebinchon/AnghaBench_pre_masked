
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_context {int kvmcpu; struct kvm_run* run; } ;
struct TYPE_2__ {int suberror; } ;
struct kvm_run {int exit_reason; TYPE_1__ internal; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*,int,int,int) ;

void *FUNC_2(void *VAR_1)
{
 struct thread_context *VAR_2 = (struct thread_context *)VAR_1;
 int VAR_3;
 int VAR_4 = VAR_2->kvmcpu;
 struct kvm_run *VAR_5 = VAR_2->run;

 VAR_3 = FUNC_0(VAR_4, VAR_0, 0);
 FUNC_1("ret1=%d exit_reason=%d suberror=%d\n",
  VAR_3, VAR_5->exit_reason, VAR_5->internal.suberror);

 return 0;
}

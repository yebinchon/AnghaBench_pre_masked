
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct pid {int dummy; } ;
struct kvm_vcpu {int pid; } ;


 int VAR_0 ;
 struct task_struct* FUNC_0 (struct pid*,int ) ;
 int FUNC_1 (struct task_struct*) ;
 struct pid* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct task_struct*,int) ;

int FUNC_6(struct kvm_vcpu *VAR_1)
{
 struct pid *VAR_2;
 struct task_struct *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_1->pid);
 if (VAR_2)
  VAR_3 = FUNC_0(VAR_2, VAR_0);
 FUNC_4();
 if (!VAR_3)
  return VAR_4;
 VAR_4 = FUNC_5(VAR_3, 1);
 FUNC_1(VAR_3);

 return VAR_4;
}

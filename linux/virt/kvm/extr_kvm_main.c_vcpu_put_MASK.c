
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int preempt_notifier; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kvm_vcpu *VAR_0)
{
 FUNC_1();
 FUNC_0(VAR_0);
 FUNC_3(&VAR_0->preempt_notifier);
 FUNC_2();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int preempt_notifier; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

void FUNC_4(struct kvm_vcpu *VAR_0)
{
 int VAR_1 = FUNC_0();
 FUNC_2(&VAR_0->preempt_notifier);
 FUNC_1(VAR_0, VAR_1);
 FUNC_3();
}

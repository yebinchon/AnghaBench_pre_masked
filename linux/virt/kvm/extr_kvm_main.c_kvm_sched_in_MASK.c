
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preempt_notifier {int dummy; } ;
struct kvm_vcpu {int ready; int preempted; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 struct kvm_vcpu* FUNC_3 (struct preempt_notifier*) ;

__attribute__((used)) static void FUNC_4(struct preempt_notifier *VAR_0, int VAR_1)
{
 struct kvm_vcpu *VAR_2 = FUNC_3(VAR_0);

 FUNC_0(VAR_2->preempted, 0);
 FUNC_0(VAR_2->ready, 0);

 FUNC_1(VAR_2, VAR_1);

 FUNC_2(VAR_2, VAR_1);
}

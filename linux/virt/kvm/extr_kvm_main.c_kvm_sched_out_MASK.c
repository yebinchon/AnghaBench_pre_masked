
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct preempt_notifier {int dummy; } ;
struct kvm_vcpu {int ready; int preempted; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_2 (struct preempt_notifier*) ;

__attribute__((used)) static void FUNC_3(struct preempt_notifier *VAR_2,
     struct task_struct *VAR_3)
{
 struct kvm_vcpu *VAR_4 = FUNC_2(VAR_2);

 if (VAR_1->state == VAR_0) {
  FUNC_0(VAR_4->preempted, 1);
  FUNC_0(VAR_4->ready, 1);
 }
 FUNC_1(VAR_4);
}

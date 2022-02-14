
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ level; } ;
struct arch_timer_context {TYPE_1__ irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct arch_timer_context*) ;
 int FUNC_3 (struct kvm_vcpu*,int ,struct arch_timer_context*) ;
 struct arch_timer_context* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_2)
{
 struct arch_timer_context *VAR_3 = FUNC_4(VAR_2);







 FUNC_3(VAR_2, FUNC_2(VAR_3), VAR_3);
 if (VAR_3->irq.level)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0, VAR_1);
}

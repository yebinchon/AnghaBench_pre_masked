
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_map {struct arch_timer_context* direct_ptimer; struct arch_timer_context* direct_vtimer; } ;
struct kvm_vcpu {int kvm; } ;
struct arch_timer_context {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,struct timer_map*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct arch_timer_context*) ;
 int FUNC_3 (struct kvm_vcpu*,int,struct arch_timer_context*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct kvm_vcpu *VAR_5 = *(struct kvm_vcpu **)VAR_4;
 struct arch_timer_context *VAR_6;
 struct timer_map VAR_7;







 if (!VAR_5)
  return VAR_0;

 FUNC_1(VAR_5, &VAR_7);

 if (VAR_3 == VAR_2)
  VAR_6 = VAR_7.direct_vtimer;
 else
  VAR_6 = VAR_7.direct_ptimer;

 if (FUNC_2(VAR_6))
  FUNC_3(VAR_5, 1, VAR_6);

 if (FUNC_5(VAR_5->kvm) &&
     !FUNC_4(&VAR_1))
  FUNC_0(VAR_2);

 return VAR_0;
}

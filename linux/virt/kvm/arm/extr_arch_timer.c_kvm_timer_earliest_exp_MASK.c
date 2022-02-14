
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {struct arch_timer_context* timers; } ;
struct TYPE_4__ {TYPE_1__ timer_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct arch_timer_context {int loaded; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct arch_timer_context*) ;
 scalar_t__ FUNC_2 (struct arch_timer_context*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static u64 FUNC_4(struct kvm_vcpu *VAR_2)
{
 u64 VAR_3 = VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct arch_timer_context *VAR_5 = &VAR_2->arch.timer_cpu.timers[VAR_4];

  FUNC_0(VAR_5->loaded, "timer %d loaded\n", VAR_4);
  if (FUNC_2(VAR_5))
   VAR_3 = FUNC_3(VAR_3, FUNC_1(VAR_5));
 }


 if (VAR_3 == VAR_1)
  return 0;

 return VAR_3;
}

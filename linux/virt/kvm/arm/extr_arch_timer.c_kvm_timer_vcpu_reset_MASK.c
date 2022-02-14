
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timer_map {TYPE_5__* emul_ptimer; TYPE_4__* direct_ptimer; TYPE_2__* direct_vtimer; } ;
struct kvm_vcpu {int kvm; } ;
struct arch_timer_cpu {scalar_t__ enabled; } ;
struct TYPE_14__ {scalar_t__ cnt_ctl; } ;
struct TYPE_13__ {int hrtimer; } ;
struct TYPE_11__ {int irq; } ;
struct TYPE_12__ {TYPE_3__ irq; } ;
struct TYPE_9__ {int irq; } ;
struct TYPE_10__ {TYPE_1__ irq; } ;


 int FUNC_0 (struct kvm_vcpu*,struct timer_map*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*,int,TYPE_6__*) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (int *) ;
 TYPE_6__* FUNC_5 (struct kvm_vcpu*) ;
 struct arch_timer_cpu* FUNC_6 (struct kvm_vcpu*) ;
 TYPE_6__* FUNC_7 (struct kvm_vcpu*) ;

int FUNC_8(struct kvm_vcpu *VAR_0)
{
 struct arch_timer_cpu *VAR_1 = FUNC_6(VAR_0);
 struct timer_map VAR_2;

 FUNC_0(VAR_0, &VAR_2);







 FUNC_7(VAR_0)->cnt_ctl = 0;
 FUNC_5(VAR_0)->cnt_ctl = 0;

 if (VAR_1->enabled) {
  FUNC_2(VAR_0, 0, FUNC_7(VAR_0));
  FUNC_2(VAR_0, 0, FUNC_5(VAR_0));

  if (FUNC_1(VAR_0->kvm)) {
   FUNC_3(VAR_0, VAR_2.direct_vtimer->irq.irq);
   if (VAR_2.direct_ptimer)
    FUNC_3(VAR_0, VAR_2.direct_ptimer->irq.irq);
  }
 }

 if (VAR_2.emul_ptimer)
  FUNC_4(&VAR_2.emul_ptimer->hrtimer);

 return 0;
}

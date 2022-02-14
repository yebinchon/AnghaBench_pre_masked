
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_map {TYPE_4__* direct_ptimer; TYPE_2__* direct_vtimer; } ;
struct kvm_vcpu {int kvm; } ;
struct arch_timer_cpu {int enabled; } ;
struct TYPE_7__ {int irq; } ;
struct TYPE_8__ {TYPE_3__ irq; int host_timer_irq; } ;
struct TYPE_5__ {int irq; } ;
struct TYPE_6__ {TYPE_1__ irq; int host_timer_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,struct timer_map*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 struct arch_timer_cpu* FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct kvm_vcpu *VAR_3)
{
 struct arch_timer_cpu *VAR_4 = FUNC_5(VAR_3);
 struct timer_map VAR_5;
 int VAR_6;

 if (VAR_4->enabled)
  return 0;


 if (!FUNC_1(VAR_3->kvm))
  goto no_vgic;

 if (!FUNC_6(VAR_3->kvm))
  return -VAR_1;

 if (!FUNC_4(VAR_3)) {
  FUNC_2("incorrectly configured timer irqs\n");
  return -VAR_0;
 }

 FUNC_0(VAR_3, &VAR_5);

 VAR_6 = FUNC_3(VAR_3,
        VAR_5.direct_vtimer->host_timer_irq,
        VAR_5.direct_vtimer->irq.irq,
        VAR_2);
 if (VAR_6)
  return VAR_6;

 if (VAR_5.direct_ptimer) {
  VAR_6 = FUNC_3(VAR_3,
         VAR_5.direct_ptimer->host_timer_irq,
         VAR_5.direct_ptimer->irq.irq,
         VAR_2);
 }

 if (VAR_6)
  return VAR_6;

no_vgic:
 VAR_4->enabled = 1;
 return 0;
}

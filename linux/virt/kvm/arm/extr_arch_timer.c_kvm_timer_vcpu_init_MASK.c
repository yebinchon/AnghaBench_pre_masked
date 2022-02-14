
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_6__ {void* function; } ;
struct arch_timer_cpu {TYPE_2__ bg_timer; } ;
struct TYPE_5__ {int irq; } ;
struct arch_timer_context {struct kvm_vcpu* vcpu; int host_timer_irq_flags; int host_timer_irq; TYPE_1__ irq; TYPE_2__ hrtimer; scalar_t__ cntvoff; } ;
struct TYPE_8__ {int irq; } ;
struct TYPE_7__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 struct arch_timer_context* FUNC_3 (struct kvm_vcpu*) ;
 struct arch_timer_cpu* FUNC_4 (struct kvm_vcpu*) ;
 struct arch_timer_context* FUNC_5 (struct kvm_vcpu*) ;

void FUNC_6(struct kvm_vcpu *VAR_10)
{
 struct arch_timer_cpu *VAR_11 = FUNC_4(VAR_10);
 struct arch_timer_context *VAR_12 = FUNC_5(VAR_10);
 struct arch_timer_context *VAR_13 = FUNC_3(VAR_10);


 FUNC_2(VAR_10, FUNC_1());
 VAR_13->cntvoff = 0;

 FUNC_0(&VAR_11->bg_timer, VAR_0, VAR_1);
 VAR_11->bg_timer.function = VAR_8;

 FUNC_0(&VAR_12->hrtimer, VAR_0, VAR_1);
 FUNC_0(&VAR_13->hrtimer, VAR_0, VAR_1);
 VAR_12->hrtimer.function = VAR_9;
 VAR_13->hrtimer.function = VAR_9;

 VAR_12->irq.irq = VAR_3.irq;
 VAR_13->irq.irq = VAR_2.irq;

 VAR_12->host_timer_irq = VAR_6;
 VAR_13->host_timer_irq = VAR_4;

 VAR_12->host_timer_irq_flags = VAR_7;
 VAR_13->host_timer_irq_flags = VAR_5;

 VAR_12->vcpu = VAR_10;
 VAR_13->vcpu = VAR_10;
}

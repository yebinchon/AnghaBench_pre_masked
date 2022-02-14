
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct vgic_irq {int dummy; } ;
struct TYPE_8__ {struct vgic_irq* private_irqs; } ;
struct TYPE_7__ {TYPE_4__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_5__ {size_t nr_spis; struct vgic_irq* spis; } ;
struct TYPE_6__ {TYPE_1__ vgic; } ;
struct kvm {TYPE_2__ arch; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (size_t,size_t) ;
 struct vgic_irq* FUNC_2 (struct kvm*,size_t) ;

struct vgic_irq *FUNC_3(struct kvm *VAR_3, struct kvm_vcpu *VAR_4,
         u32 VAR_5)
{

 if (VAR_5 <= VAR_0) {
  VAR_5 = FUNC_1(VAR_5, VAR_0 + 1);
  return &VAR_4->arch.vgic_cpu.private_irqs[VAR_5];
 }


 if (VAR_5 < (VAR_3->arch.vgic.nr_spis + VAR_2)) {
  VAR_5 = FUNC_1(VAR_5, VAR_3->arch.vgic.nr_spis + VAR_2);
  return &VAR_3->arch.vgic.spis[VAR_5 - VAR_2];
 }


 if (VAR_5 >= VAR_1)
  return FUNC_2(VAR_3, VAR_5);

 FUNC_0(1, "Looking up struct vgic_irq for reserved INTID");
 return ((void*)0);
}

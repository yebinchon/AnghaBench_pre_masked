
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef int u32 ;
struct vgic_irq {scalar_t__ config; scalar_t__ line_level; } ;
struct kvm_vcpu {TYPE_3__* kvm; } ;
struct TYPE_5__ {int nr_spis; } ;
struct TYPE_6__ {TYPE_1__ vgic; } ;
struct TYPE_7__ {TYPE_2__ arch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vgic_irq* FUNC_0 (TYPE_3__*,struct kvm_vcpu*,int) ;
 int FUNC_1 (TYPE_3__*,struct vgic_irq*) ;

u64 FUNC_2(struct kvm_vcpu *VAR_3, u32 VAR_4)
{
 int VAR_5;
 u64 VAR_6 = 0;
 int VAR_7 = VAR_3->kvm->arch.vgic.nr_spis + VAR_1;

 for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
  struct vgic_irq *VAR_8;

  if ((VAR_4 + VAR_5) < VAR_2 || (VAR_4 + VAR_5) >= VAR_7)
   continue;

  VAR_8 = FUNC_0(VAR_3->kvm, VAR_3, VAR_4 + VAR_5);
  if (VAR_8->config == VAR_0 && VAR_8->line_level)
   VAR_6 |= (1U << VAR_5);

  FUNC_1(VAR_3->kvm, VAR_8);
 }

 return VAR_6;
}

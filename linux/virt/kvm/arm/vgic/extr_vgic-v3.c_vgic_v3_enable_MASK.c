
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vgic_v3_cpu_if {int vgic_sre; int vgic_hcr; scalar_t__ vgic_vmcr; } ;
struct TYPE_10__ {int num_id_bits; int num_pri_bits; int pendbaser; struct vgic_v3_cpu_if vgic_v3; } ;
struct TYPE_11__ {TYPE_4__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_3__* kvm; } ;
struct TYPE_12__ {int ich_vtr_el2; } ;
struct TYPE_7__ {scalar_t__ vgic_model; } ;
struct TYPE_8__ {TYPE_1__ vgic; } ;
struct TYPE_9__ {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_6__ VAR_16 ;

void FUNC_0(struct kvm_vcpu *VAR_17)
{
 struct vgic_v3_cpu_if *VAR_18 = &VAR_17->arch.vgic_cpu.vgic_v3;






 VAR_18->vgic_vmcr = 0;







 if (VAR_17->kvm->arch.vgic.vgic_model == VAR_12) {
  VAR_18->vgic_sre = (VAR_1 |
         VAR_0 |
         VAR_2);
  VAR_17->arch.vgic_cpu.pendbaser = VAR_11;
 } else {
  VAR_18->vgic_sre = 0;
 }

 VAR_17->arch.vgic_cpu.num_id_bits = (VAR_16.ich_vtr_el2 &
        VAR_7) >>
        VAR_8;
 VAR_17->arch.vgic_cpu.num_pri_bits = ((VAR_16.ich_vtr_el2 &
         VAR_9) >>
         VAR_10) + 1;


 VAR_18->vgic_hcr = VAR_3;
 if (VAR_14)
  VAR_18->vgic_hcr |= VAR_4;
 if (VAR_15)
  VAR_18->vgic_hcr |= VAR_5;
 if (VAR_13)
  VAR_18->vgic_hcr |= VAR_6;
}

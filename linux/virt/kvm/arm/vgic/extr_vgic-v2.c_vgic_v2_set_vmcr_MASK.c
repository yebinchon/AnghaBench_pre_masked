
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vgic_vmcr {int grpen0; int grpen1; int ackctl; int fiqen; int cbpr; int eoim; int abpr; int bpr; int pmr; } ;
struct vgic_v2_cpu_if {int vgic_vmcr; } ;
struct TYPE_3__ {struct vgic_v2_cpu_if vgic_v2; } ;
struct TYPE_4__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_0(struct kvm_vcpu *VAR_19, struct vgic_vmcr *VAR_20)
{
 struct vgic_v2_cpu_if *VAR_21 = &VAR_19->arch.vgic_cpu.vgic_v2;
 u32 VAR_22;

 VAR_22 = (VAR_20->grpen0 << VAR_9) &
  VAR_8;
 VAR_22 |= (VAR_20->grpen1 << VAR_11) &
  VAR_10;
 VAR_22 |= (VAR_20->ackctl << VAR_1) &
  VAR_0;
 VAR_22 |= (VAR_20->fiqen << VAR_15) &
  VAR_14;
 VAR_22 |= (VAR_20->cbpr << VAR_7) &
  VAR_6;
 VAR_22 |= (VAR_20->eoim << VAR_13) &
  VAR_12;
 VAR_22 |= (VAR_20->abpr << VAR_3) &
  VAR_2;
 VAR_22 |= (VAR_20->bpr << VAR_5) &
  VAR_4;
 VAR_22 |= ((VAR_20->pmr >> VAR_18) <<
   VAR_17) & VAR_16;

 VAR_21->vgic_vmcr = VAR_22;
}

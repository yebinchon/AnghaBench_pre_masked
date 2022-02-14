
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vgic_vmcr {int fiqen; scalar_t__ grpen1; scalar_t__ grpen0; scalar_t__ pmr; scalar_t__ bpr; scalar_t__ abpr; scalar_t__ eoim; scalar_t__ cbpr; scalar_t__ ackctl; } ;
struct vgic_v3_cpu_if {scalar_t__ vgic_vmcr; } ;
struct TYPE_6__ {struct vgic_v3_cpu_if vgic_v3; } ;
struct TYPE_7__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_5__* kvm; TYPE_2__ arch; } ;
struct TYPE_8__ {scalar_t__ vgic_model; } ;
struct TYPE_9__ {TYPE_3__ vgic; } ;
struct TYPE_10__ {TYPE_4__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

void FUNC_0(struct kvm_vcpu *VAR_19, struct vgic_vmcr *VAR_20)
{
 struct vgic_v3_cpu_if *VAR_21 = &VAR_19->arch.vgic_cpu.vgic_v3;
 u32 VAR_22 = VAR_19->kvm->arch.vgic.vgic_model;
 u32 VAR_23;

 VAR_23 = VAR_21->vgic_vmcr;

 if (VAR_22 == VAR_18) {
  VAR_20->ackctl = (VAR_23 & VAR_0) >>
   VAR_1;
  VAR_20->fiqen = (VAR_23 & VAR_14) >>
   VAR_15;
 } else {




  VAR_20->fiqen = 1;
  VAR_20->ackctl = 0;
 }

 VAR_20->cbpr = (VAR_23 & VAR_6) >> VAR_7;
 VAR_20->eoim = (VAR_23 & VAR_12) >> VAR_13;
 VAR_20->abpr = (VAR_23 & VAR_4) >> VAR_5;
 VAR_20->bpr = (VAR_23 & VAR_2) >> VAR_3;
 VAR_20->pmr = (VAR_23 & VAR_16) >> VAR_17;
 VAR_20->grpen0 = (VAR_23 & VAR_8) >> VAR_9;
 VAR_20->grpen1 = (VAR_23 & VAR_10) >> VAR_11;
}

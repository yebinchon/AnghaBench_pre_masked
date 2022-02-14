
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pending_last; } ;
struct TYPE_6__ {TYPE_1__ its_vpe; } ;
struct TYPE_7__ {TYPE_2__ vgic_v3; } ;
struct TYPE_8__ {TYPE_3__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct kvm_vcpu *VAR_4 = VAR_3;

 VAR_4->arch.vgic_cpu.vgic_v3.its_vpe.pending_last = 1;
 FUNC_0(VAR_1, VAR_4);
 FUNC_1(VAR_4);

 return VAR_0;
}

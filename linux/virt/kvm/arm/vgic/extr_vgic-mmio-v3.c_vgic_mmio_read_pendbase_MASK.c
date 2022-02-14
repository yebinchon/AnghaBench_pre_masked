
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_cpu {int pendbaser; } ;
struct TYPE_2__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gpa_t ;


 unsigned long FUNC_0 (int ,int,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_1(struct kvm_vcpu *VAR_0,
          gpa_t VAR_1, unsigned int VAR_2)
{
 struct vgic_cpu *VAR_3 = &VAR_0->arch.vgic_cpu;

 return FUNC_0(VAR_3->pendbaser, VAR_1 & 7, VAR_2);
}

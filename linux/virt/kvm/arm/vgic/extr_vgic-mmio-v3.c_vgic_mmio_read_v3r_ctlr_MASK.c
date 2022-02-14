
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_cpu {scalar_t__ lpis_enabled; } ;
struct TYPE_2__ {struct vgic_cpu vgic_cpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gpa_t ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct kvm_vcpu *VAR_1,
          gpa_t VAR_2, unsigned int VAR_3)
{
 struct vgic_cpu *VAR_4 = &VAR_1->arch.vgic_cpu;

 return VAR_4->lpis_enabled ? VAR_0 : 0;
}

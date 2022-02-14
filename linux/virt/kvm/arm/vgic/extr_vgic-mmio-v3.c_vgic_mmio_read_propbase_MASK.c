
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_dist {int propbaser; } ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
typedef int gpa_t ;
struct TYPE_3__ {struct vgic_dist vgic; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 unsigned long FUNC_0 (int ,int,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_1(struct kvm_vcpu *VAR_0,
          gpa_t VAR_1, unsigned int VAR_2)
{
 struct vgic_dist *VAR_3 = &VAR_0->kvm->arch.vgic;

 return FUNC_0(VAR_3->propbaser, VAR_1 & 7, VAR_2);
}

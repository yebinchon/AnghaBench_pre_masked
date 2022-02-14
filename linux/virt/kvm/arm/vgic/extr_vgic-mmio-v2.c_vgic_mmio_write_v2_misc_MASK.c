
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_dist {int enabled; } ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
typedef int gpa_t ;
struct TYPE_3__ {struct vgic_dist vgic; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 unsigned long VAR_0 ;



 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1,
        gpa_t VAR_2, unsigned int VAR_3,
        unsigned long VAR_4)
{
 struct vgic_dist *VAR_5 = &VAR_1->kvm->arch.vgic;
 bool VAR_6 = VAR_5->enabled;

 switch (VAR_2 & 0x0c) {
 case 129:
  VAR_5->enabled = VAR_4 & VAR_0;
  if (!VAR_6 && VAR_5->enabled)
   FUNC_0(VAR_1->kvm);
  break;
 case 130:
 case 128:

  return;
 }
}

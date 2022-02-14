
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_dist {scalar_t__ vgic_model; int has_its; } ;
struct TYPE_2__ {struct vgic_dist vgic; } ;
struct kvm {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct kvm *VAR_1)
{
 struct vgic_dist *VAR_2 = &VAR_1->arch.vgic;

 if (VAR_2->vgic_model != VAR_0)
  return 0;

 return VAR_2->has_its;
}

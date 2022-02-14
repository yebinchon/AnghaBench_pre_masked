
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_dist {scalar_t__ vgic_model; } ;
struct TYPE_2__ {struct vgic_dist vgic; } ;
struct kvm {int lock; TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (struct kvm*) ;

int FUNC_6(struct kvm *VAR_1)
{
 struct vgic_dist *VAR_2 = &VAR_1->arch.vgic;
 int VAR_3 = 0;

 FUNC_2(&VAR_1->lock);
 if (!FUNC_1(VAR_1))
  goto out;

 if (VAR_2->vgic_model == VAR_0)
  VAR_3 = FUNC_4(VAR_1);
 else
  VAR_3 = FUNC_5(VAR_1);

 if (VAR_3)
  FUNC_0(VAR_1);

out:
 FUNC_3(&VAR_1->lock);
 return VAR_3;
}

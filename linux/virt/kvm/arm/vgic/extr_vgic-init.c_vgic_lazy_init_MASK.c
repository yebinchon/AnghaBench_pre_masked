
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vgic_model; } ;
struct TYPE_4__ {TYPE_1__ vgic; } ;
struct kvm {int lock; TYPE_2__ arch; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct kvm*) ;
 int FUNC_4 (struct kvm*) ;

int FUNC_5(struct kvm *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_2(!FUNC_4(VAR_2))) {






  if (VAR_2->arch.vgic.vgic_model != VAR_1)
   return -VAR_0;

  FUNC_0(&VAR_2->lock);
  VAR_3 = FUNC_3(VAR_2);
  FUNC_1(&VAR_2->lock);
 }

 return VAR_3;
}

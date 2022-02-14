
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_state_iter {struct vgic_state_iter* lpi_array; } ;
struct seq_file {scalar_t__ private; } ;
struct TYPE_3__ {struct vgic_state_iter* iter; } ;
struct TYPE_4__ {TYPE_1__ vgic; } ;
struct kvm {int lock; TYPE_2__ arch; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (struct vgic_state_iter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct kvm *VAR_2 = (struct kvm *)VAR_0->private;
 struct vgic_state_iter *VAR_3;





 if (FUNC_0(VAR_1))
  return;

 FUNC_2(&VAR_2->lock);
 VAR_3 = VAR_2->arch.vgic.iter;
 FUNC_1(VAR_3->lpi_array);
 FUNC_1(VAR_3);
 VAR_2->arch.vgic.iter = ((void*)0);
 FUNC_3(&VAR_2->lock);
}

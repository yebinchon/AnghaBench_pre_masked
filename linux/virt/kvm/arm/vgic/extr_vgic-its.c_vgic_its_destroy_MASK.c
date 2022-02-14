
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_its {int its_lock; struct vgic_its* private; struct kvm* kvm; } ;
struct kvm_device {int its_lock; struct kvm_device* private; struct kvm* kvm; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct vgic_its*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm*,struct vgic_its*) ;
 int FUNC_4 (struct kvm*,struct vgic_its*) ;

__attribute__((used)) static void FUNC_5(struct kvm_device *VAR_0)
{
 struct kvm *VAR_1 = VAR_0->kvm;
 struct vgic_its *VAR_2 = VAR_0->private;

 FUNC_1(&VAR_2->its_lock);

 FUNC_4(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_2);

 FUNC_2(&VAR_2->its_lock);
 FUNC_0(VAR_2);
 FUNC_0(VAR_0);
}

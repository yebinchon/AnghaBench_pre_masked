
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_its {int its_lock; } ;
struct kvm_msi {int data; int devid; } ;
struct kvm {int dummy; } ;


 scalar_t__ FUNC_0 (struct vgic_its*) ;
 int FUNC_1 (struct vgic_its*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm*,struct kvm_msi*) ;
 int FUNC_5 (struct kvm*,struct vgic_its*,int ,int ) ;
 struct vgic_its* FUNC_6 (struct kvm*,struct kvm_msi*) ;

int FUNC_7(struct kvm *VAR_0, struct kvm_msi *VAR_1)
{
 struct vgic_its *VAR_2;
 int VAR_3;

 if (!FUNC_4(VAR_0, VAR_1))
  return 1;

 VAR_2 = FUNC_6(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_2(&VAR_2->its_lock);
 VAR_3 = FUNC_5(VAR_0, VAR_2, VAR_1->devid, VAR_1->data);
 FUNC_3(&VAR_2->its_lock);

 if (VAR_3 < 0)
  return VAR_3;






 if (VAR_3)
  return 0;
 else
  return 1;
}

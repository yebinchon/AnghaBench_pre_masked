
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_io_device {int dev; int * redist_vcpu; int iodev_type; int base_addr; } ;
struct TYPE_3__ {struct vgic_io_device dist_iodev; } ;
struct TYPE_4__ {TYPE_1__ vgic; } ;
struct kvm {int slots_lock; TYPE_2__ arch; } ;
typedef int gpa_t ;
typedef enum vgic_type { ____Placeholder_vgic_type } vgic_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (struct kvm*,int ,int ,unsigned int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (struct vgic_io_device*) ;
 unsigned int FUNC_5 (struct vgic_io_device*) ;

int FUNC_6(struct kvm *VAR_2, gpa_t VAR_3,
        enum vgic_type VAR_4)
{
 struct vgic_io_device *VAR_5 = &VAR_2->arch.vgic.dist_iodev;
 int VAR_6 = 0;
 unsigned int VAR_7;

 switch (VAR_4) {
 case 129:
  VAR_7 = FUNC_4(VAR_5);
  break;
 case 128:
  VAR_7 = FUNC_5(VAR_5);
  break;
 default:
  FUNC_0(1);
 }

 VAR_5->base_addr = VAR_3;
 VAR_5->iodev_type = VAR_0;
 VAR_5->redist_vcpu = ((void*)0);

 FUNC_2(&VAR_2->slots_lock);
 VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_3,
          VAR_7, &VAR_5->dev);
 FUNC_3(&VAR_2->slots_lock);

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_io_device {int iodev_type; int nr_regions; int regions; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*,struct vgic_io_device*,int,int,int *) ;
 int VAR_1 ;

int FUNC_2(struct kvm_vcpu *VAR_2, bool VAR_3,
    int VAR_4, u32 *VAR_5)
{
 struct vgic_io_device VAR_6 = {
  .regions = VAR_1,
  .nr_regions = FUNC_0(VAR_1),
  .iodev_type = VAR_0,
 };

 return FUNC_1(VAR_2, &VAR_6, VAR_3, VAR_4, VAR_5);
}

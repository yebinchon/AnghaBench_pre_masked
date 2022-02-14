
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_io_device {int nr_regions; int regions; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct vgic_io_device*,int,int,int *) ;
 int VAR_0 ;

int FUNC_2(struct kvm_vcpu *VAR_1, bool VAR_2,
      int VAR_3, u32 *VAR_4)
{
 struct vgic_io_device VAR_5 = {
  .regions = VAR_0,
  .nr_regions = FUNC_0(VAR_0),
 };

 return FUNC_1(VAR_1, &VAR_5, VAR_2, VAR_3, VAR_4);
}

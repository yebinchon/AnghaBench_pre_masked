
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_io_device {int dev; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int *,int,int *) ;
 int FUNC_1 (struct kvm_vcpu*,int *,int,int *) ;

int FUNC_2(struct kvm_vcpu *VAR_0, struct vgic_io_device *VAR_1,
   bool VAR_2, int VAR_3, u32 *VAR_4)
{
 if (VAR_2)
  return FUNC_1(VAR_0, &VAR_1->dev, VAR_3, VAR_4);
 else
  return FUNC_0(VAR_0, &VAR_1->dev, VAR_3, VAR_4);
}

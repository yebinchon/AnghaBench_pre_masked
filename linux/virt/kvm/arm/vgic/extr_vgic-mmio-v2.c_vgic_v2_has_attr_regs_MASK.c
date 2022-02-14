
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_register_region {int dummy; } ;
struct vgic_reg_attr {int addr; struct kvm_vcpu* vcpu; } ;
struct vgic_io_device {int base_addr; void* nr_regions; void* regions; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_device_attr {int group; } ;
struct kvm_device {int dummy; } ;
typedef int gpa_t ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;


 struct vgic_register_region* FUNC_1 (struct kvm_vcpu*,struct vgic_io_device*,int,int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (struct kvm_device*,struct kvm_device_attr*,struct vgic_reg_attr*) ;

int FUNC_3(struct kvm_device *VAR_3, struct kvm_device_attr *VAR_4)
{
 const struct vgic_register_region *VAR_5;
 struct vgic_io_device VAR_6;
 struct vgic_reg_attr VAR_7;
 struct kvm_vcpu *VAR_8;
 gpa_t VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_3, VAR_4, &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_8 = VAR_7.vcpu;
 VAR_9 = VAR_7.addr;

 switch (VAR_4->group) {
 case 128:
  VAR_6.regions = VAR_2;
  VAR_6.nr_regions = FUNC_0(VAR_2);
  VAR_6.base_addr = 0;
  break;
 case 129:
  VAR_6.regions = VAR_1;
  VAR_6.nr_regions = FUNC_0(VAR_1);
  VAR_6.base_addr = 0;
  break;
 default:
  return -VAR_0;
 }


 if (VAR_9 & 3)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_8, &VAR_6, VAR_9, sizeof(u32));
 if (!VAR_5)
  return -VAR_0;

 return 0;
}

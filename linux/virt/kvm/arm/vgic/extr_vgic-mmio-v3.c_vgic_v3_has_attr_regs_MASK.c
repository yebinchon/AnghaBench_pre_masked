
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vgic_register_region {int dummy; } ;
struct vgic_reg_attr {int addr; struct kvm_vcpu* vcpu; } ;
struct vgic_io_device {int base_addr; void* nr_regions; void* regions; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_device_attr {int group; int attr; } ;
struct kvm_device {int dummy; } ;
typedef int gpa_t ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;



 int VAR_1 ;
 struct vgic_register_region* FUNC_1 (struct kvm_vcpu*,struct vgic_io_device*,int,int) ;
 void* VAR_2 ;
 int FUNC_2 (struct kvm_vcpu*,int ,int,int*) ;
 int FUNC_3 (struct kvm_device*,struct kvm_device_attr*,struct vgic_reg_attr*) ;
 void* VAR_3 ;

int FUNC_4(struct kvm_device *VAR_4, struct kvm_device_attr *VAR_5)
{
 const struct vgic_register_region *VAR_6;
 struct vgic_io_device VAR_7;
 struct vgic_reg_attr VAR_8;
 struct kvm_vcpu *VAR_9;
 gpa_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_4, VAR_5, &VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_9 = VAR_8.vcpu;
 VAR_10 = VAR_8.addr;

 switch (VAR_5->group) {
 case 129:
  VAR_7.regions = VAR_2;
  VAR_7.nr_regions = FUNC_0(VAR_2);
  VAR_7.base_addr = 0;
  break;
 case 128:{
  VAR_7.regions = VAR_3;
  VAR_7.nr_regions = FUNC_0(VAR_3);
  VAR_7.base_addr = 0;
  break;
 }
 case 130: {
  u64 VAR_12, VAR_13;

  VAR_13 = (VAR_5->attr & VAR_1);
  return FUNC_2(VAR_9, 0, VAR_13, &VAR_12);
 }
 default:
  return -VAR_0;
 }


 if (VAR_10 & 3)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_9, &VAR_7, VAR_10, sizeof(u32));
 if (!VAR_6)
  return -VAR_0;

 return 0;
}

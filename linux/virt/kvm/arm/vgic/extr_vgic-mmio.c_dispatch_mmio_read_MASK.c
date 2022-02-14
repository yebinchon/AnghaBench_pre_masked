
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_register_region {unsigned long (* read ) (struct kvm_vcpu*,int ,int) ;unsigned long (* its_read ) (int ,int ,int ,int) ;} ;
struct vgic_io_device {int iodev_type; int its; struct kvm_vcpu* redist_vcpu; } ;
struct kvm_vcpu {int kvm; } ;
struct kvm_io_device {int dummy; } ;
typedef int gpa_t ;






 struct vgic_io_device* FUNC_0 (struct kvm_io_device*) ;
 int FUNC_1 (void*,int ,int) ;
 unsigned long FUNC_2 (struct kvm_vcpu*,int ,int) ;
 unsigned long FUNC_3 (struct kvm_vcpu*,int ,int) ;
 unsigned long FUNC_4 (struct kvm_vcpu*,int ,int) ;
 unsigned long FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (void*,int,unsigned long) ;
 struct vgic_register_region* FUNC_7 (struct kvm_vcpu*,struct vgic_io_device*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_0, struct kvm_io_device *VAR_1,
         gpa_t VAR_2, int VAR_3, void *VAR_4)
{
 struct vgic_io_device *VAR_5 = FUNC_0(VAR_1);
 const struct vgic_register_region *VAR_6;
 unsigned long VAR_7 = 0;

 VAR_6 = FUNC_7(VAR_0, VAR_5, VAR_2, VAR_3);
 if (!VAR_6) {
  FUNC_1(VAR_4, 0, VAR_3);
  return 0;
 }

 switch (VAR_5->iodev_type) {
 case 131:
  VAR_7 = VAR_6->read(VAR_0, VAR_2, VAR_3);
  break;
 case 130:
  VAR_7 = VAR_6->read(VAR_0, VAR_2, VAR_3);
  break;
 case 128:
  VAR_7 = VAR_6->read(VAR_5->redist_vcpu, VAR_2, VAR_3);
  break;
 case 129:
  VAR_7 = VAR_6->its_read(VAR_0->kvm, VAR_5->its, VAR_2, VAR_3);
  break;
 }

 FUNC_6(VAR_4, VAR_3, VAR_7);
 return 0;
}

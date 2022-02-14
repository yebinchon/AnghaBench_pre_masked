
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_register_region {int (* its_write ) (int ,int ,int ,int,unsigned long) ;int (* write ) (struct kvm_vcpu*,int ,int,unsigned long) ;} ;
struct vgic_io_device {int iodev_type; int its; struct kvm_vcpu* redist_vcpu; } ;
struct kvm_vcpu {int kvm; } ;
struct kvm_io_device {int dummy; } ;
typedef int gpa_t ;






 struct vgic_io_device* FUNC_0 (struct kvm_io_device*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int,unsigned long) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int,unsigned long) ;
 int FUNC_3 (struct kvm_vcpu*,int ,int,unsigned long) ;
 int FUNC_4 (int ,int ,int ,int,unsigned long) ;
 unsigned long FUNC_5 (void const*,int) ;
 struct vgic_register_region* FUNC_6 (struct kvm_vcpu*,struct vgic_io_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_0, struct kvm_io_device *VAR_1,
          gpa_t VAR_2, int VAR_3, const void *VAR_4)
{
 struct vgic_io_device *VAR_5 = FUNC_0(VAR_1);
 const struct vgic_register_region *VAR_6;
 unsigned long VAR_7 = FUNC_5(VAR_4, VAR_3);

 VAR_6 = FUNC_6(VAR_0, VAR_5, VAR_2, VAR_3);
 if (!VAR_6)
  return 0;

 switch (VAR_5->iodev_type) {
 case 131:
  VAR_6->write(VAR_0, VAR_2, VAR_3, VAR_7);
  break;
 case 130:
  VAR_6->write(VAR_0, VAR_2, VAR_3, VAR_7);
  break;
 case 128:
  VAR_6->write(VAR_5->redist_vcpu, VAR_2, VAR_3, VAR_7);
  break;
 case 129:
  VAR_6->its_write(VAR_0->kvm, VAR_5->its, VAR_2, VAR_3, VAR_7);
  break;
 }

 return 0;
}

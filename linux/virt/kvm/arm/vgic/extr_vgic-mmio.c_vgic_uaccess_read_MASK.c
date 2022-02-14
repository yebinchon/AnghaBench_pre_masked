
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_register_region {int (* read ) (struct kvm_vcpu*,int ,int) ;int (* uaccess_read ) (struct kvm_vcpu*,int ,int) ;} ;
struct vgic_io_device {struct kvm_vcpu* redist_vcpu; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_io_device {int dummy; } ;
typedef int gpa_t ;


 struct vgic_io_device* FUNC_0 (struct kvm_io_device*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int) ;
 struct vgic_register_region* FUNC_3 (struct kvm_vcpu*,struct vgic_io_device*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_0, struct kvm_io_device *VAR_1,
        gpa_t VAR_2, u32 *VAR_3)
{
 struct vgic_io_device *VAR_4 = FUNC_0(VAR_1);
 const struct vgic_register_region *VAR_5;
 struct kvm_vcpu *VAR_6;

 VAR_5 = FUNC_3(VAR_0, VAR_4, VAR_2, sizeof(u32));
 if (!VAR_5) {
  *VAR_3 = 0;
  return 0;
 }

 VAR_6 = VAR_4->redist_vcpu ? VAR_4->redist_vcpu : VAR_0;
 if (VAR_5->uaccess_read)
  *VAR_3 = VAR_5->uaccess_read(VAR_6, VAR_2, sizeof(u32));
 else
  *VAR_3 = VAR_5->read(VAR_6, VAR_2, sizeof(u32));

 return 0;
}

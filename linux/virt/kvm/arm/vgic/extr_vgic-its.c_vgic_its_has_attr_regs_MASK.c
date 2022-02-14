
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_register_region {int dummy; } ;
struct kvm_device_attr {int attr; } ;
struct kvm_device {int dummy; } ;
typedef int gpa_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vgic_register_region* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_device *VAR_5,
      struct kvm_device_attr *VAR_6)
{
 const struct vgic_register_region *VAR_7;
 gpa_t VAR_8 = VAR_6->attr;
 int VAR_9;

 VAR_9 = (VAR_8 < VAR_3) || (VAR_8 >= VAR_2) ? 0x3 : 0x7;

 if (VAR_8 & VAR_9)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4,
           FUNC_0(VAR_4),
           VAR_8);
 if (!VAR_7)
  return -VAR_1;

 return 0;
}

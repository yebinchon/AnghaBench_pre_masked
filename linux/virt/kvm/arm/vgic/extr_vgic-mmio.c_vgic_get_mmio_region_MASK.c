
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_register_region {int dummy; } ;
struct vgic_io_device {scalar_t__ base_addr; int nr_regions; int regions; } ;
struct kvm_vcpu {int kvm; } ;
typedef scalar_t__ gpa_t ;


 int FUNC_0 (int ,struct vgic_register_region const*,scalar_t__,int) ;
 struct vgic_register_region* FUNC_1 (int ,int ,scalar_t__) ;

const struct vgic_register_region *
FUNC_2(struct kvm_vcpu *VAR_0, struct vgic_io_device *VAR_1,
       gpa_t VAR_2, int VAR_3)
{
 const struct vgic_register_region *VAR_4;

 VAR_4 = FUNC_1(VAR_1->regions, VAR_1->nr_regions,
           VAR_2 - VAR_1->base_addr);
 if (!VAR_4 || !FUNC_0(VAR_0->kvm, VAR_4, VAR_2, VAR_3))
  return ((void*)0);

 return VAR_4;
}

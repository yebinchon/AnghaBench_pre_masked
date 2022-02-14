
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_dist {int ready; int vgic_cpu_base; int vgic_dist_base; } ;
struct TYPE_3__ {struct vgic_dist vgic; } ;
struct kvm {TYPE_1__ arch; } ;
struct TYPE_4__ {int vcpu_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct kvm*,int ,int ,int ,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvm*) ;
 scalar_t__ FUNC_5 (struct kvm*) ;
 int FUNC_6 (struct kvm*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;

int FUNC_8(struct kvm *VAR_6)
{
 struct vgic_dist *VAR_7 = &VAR_6->arch.vgic;
 int VAR_8 = 0;

 if (FUNC_5(VAR_6))
  goto out;

 if (FUNC_0(VAR_7->vgic_dist_base) ||
     FUNC_0(VAR_7->vgic_cpu_base)) {
  FUNC_1("Need to set vgic cpu and dist addresses first\n");
  VAR_8 = -VAR_1;
  goto out;
 }

 if (!FUNC_7(VAR_7->vgic_dist_base, VAR_7->vgic_cpu_base)) {
  FUNC_1("VGIC CPU and dist frames overlap\n");
  VAR_8 = -VAR_0;
  goto out;
 }





 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8) {
  FUNC_1("Unable to initialize VGIC dynamic data structures\n");
  goto out;
 }

 VAR_8 = FUNC_6(VAR_6, VAR_7->vgic_dist_base, VAR_3);
 if (VAR_8) {
  FUNC_1("Unable to register VGIC MMIO regions\n");
  goto out;
 }

 if (!FUNC_3(&VAR_5)) {
  VAR_8 = FUNC_2(VAR_6, VAR_7->vgic_cpu_base,
         VAR_4.vcpu_base,
         VAR_2, 1);
  if (VAR_8) {
   FUNC_1("Unable to remap VGIC CPU to VCPU\n");
   goto out;
  }
 }

 VAR_7->ready = 1;

out:
 return VAR_8;
}

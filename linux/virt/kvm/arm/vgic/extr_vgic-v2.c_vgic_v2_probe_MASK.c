
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int start; } ;
struct gic_kvm_info {TYPE_1__ vctrl; TYPE_1__ vcpu; } ;
struct TYPE_4__ {int nr_lr; int can_emulate_gicv2; scalar_t__ vcpu_base_va; scalar_t__ vctrl_base; int max_gic_vcpus; int type; int vcpu_base; int vctrl_hyp; int vcpu_hyp_va; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,scalar_t__*,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;

int FUNC_10(const struct gic_kvm_info *VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 if (!VAR_7->vctrl.start) {
  FUNC_4("GICH not present in the firmware table\n");
  return -VAR_0;
 }

 if (!FUNC_0(VAR_7->vcpu.start) ||
     !FUNC_0(FUNC_8(&VAR_7->vcpu))) {
  FUNC_5("GICV region size/alignment is unsafe, using trapping (reduced performance)\n");

  VAR_8 = FUNC_1(VAR_7->vcpu.start,
          FUNC_8(&VAR_7->vcpu),
          &VAR_5.vcpu_base_va,
          &VAR_5.vcpu_hyp_va);
  if (VAR_8) {
   FUNC_4("Cannot map GICV into hyp\n");
   goto out;
  }

  FUNC_9(&VAR_6);
 }

 VAR_8 = FUNC_1(VAR_7->vctrl.start,
         FUNC_8(&VAR_7->vctrl),
         &VAR_5.vctrl_base,
         &VAR_5.vctrl_hyp);
 if (VAR_8) {
  FUNC_4("Cannot map VCTRL into hyp\n");
  goto out;
 }

 VAR_9 = FUNC_7(VAR_5.vctrl_base + VAR_1);
 VAR_5.nr_lr = (VAR_9 & 0x3f) + 1;

 VAR_8 = FUNC_6(VAR_2);
 if (VAR_8) {
  FUNC_4("Cannot register GICv2 KVM device\n");
  goto out;
 }

 VAR_5.can_emulate_gicv2 = 1;
 VAR_5.vcpu_base = VAR_7->vcpu.start;
 VAR_5.type = VAR_3;
 VAR_5.max_gic_vcpus = VAR_4;

 FUNC_3("vgic-v2@%llx\n", VAR_7->vctrl.start);

 return 0;
out:
 if (VAR_5.vctrl_base)
  FUNC_2(VAR_5.vctrl_base);
 if (VAR_5.vcpu_base_va)
  FUNC_2(VAR_5.vcpu_base_va);

 return VAR_8;
}

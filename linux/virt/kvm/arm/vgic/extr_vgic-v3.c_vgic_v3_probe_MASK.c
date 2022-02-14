
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ start; } ;
struct gic_kvm_info {TYPE_1__ vcpu; scalar_t__ has_v4; } ;
struct TYPE_4__ {int nr_lr; int can_emulate_gicv2; int ich_vtr_el2; scalar_t__ vcpu_base; int max_gic_vcpus; int type; int * vctrl_base; scalar_t__ has_gicv4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_2__ VAR_10 ;
 int FUNC_7 (char*,unsigned long long) ;
 int FUNC_8 (int *) ;
 int VAR_11 ;

int FUNC_9(const struct gic_kvm_info *VAR_12)
{
 u32 VAR_13 = FUNC_2(VAR_5);
 int VAR_14;





 VAR_10.nr_lr = (VAR_13 & 0xf) + 1;
 VAR_10.can_emulate_gicv2 = 0;
 VAR_10.ich_vtr_el2 = VAR_13;


 if (VAR_12->has_v4) {
  VAR_10.has_gicv4 = VAR_7;
  FUNC_4("GICv4 support %sabled\n",
    VAR_7 ? "en" : "dis");
 }

 if (!VAR_12->vcpu.start) {
  FUNC_4("GICv3: no GICV resource entry\n");
  VAR_10.vcpu_base = 0;
 } else if (!FUNC_0(VAR_12->vcpu.start)) {
  FUNC_7("GICV physical address 0x%llx not page aligned\n",
   (unsigned long long)VAR_12->vcpu.start);
  VAR_10.vcpu_base = 0;
 } else {
  VAR_10.vcpu_base = VAR_12->vcpu.start;
  VAR_10.can_emulate_gicv2 = 1;
  VAR_14 = FUNC_5(VAR_1);
  if (VAR_14) {
   FUNC_3("Cannot register GICv2 KVM device.\n");
   return VAR_14;
  }
  FUNC_4("vgic-v2@%llx\n", VAR_12->vcpu.start);
 }
 VAR_14 = FUNC_5(VAR_2);
 if (VAR_14) {
  FUNC_3("Cannot register GICv3 KVM device.\n");
  FUNC_6(VAR_1);
  return VAR_14;
 }

 if (VAR_10.vcpu_base == 0)
  FUNC_4("disabling GICv2 emulation\n");
 if (VAR_8 || VAR_9 || VAR_6) {
  FUNC_4("GICv3 sysreg trapping enabled ([%s%s%s], reduced performance)\n",
    VAR_8 ? "G0" : "",
    VAR_9 ? "G1" : "",
    VAR_6 ? "C" : "");
  FUNC_8(&VAR_11);
 }

 VAR_10.vctrl_base = ((void*)0);
 VAR_10.type = VAR_3;
 VAR_10.max_gic_vcpus = VAR_4;

 return 0;
}

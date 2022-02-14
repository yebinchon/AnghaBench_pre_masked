
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvm_vm {int dummy; } ;
struct kvm_vcpu_events {int dummy; } ;
struct kvm_sregs {int dummy; } ;
struct TYPE_8__ {int rbx; } ;
struct TYPE_7__ {int apic_base; } ;
struct TYPE_6__ {TYPE_4__ regs; int events; TYPE_3__ sregs; } ;
struct TYPE_5__ {TYPE_2__ regs; } ;
struct kvm_run {int kvm_valid_regs; int kvm_dirty_regs; TYPE_1__ s; int exit_reason; } ;
struct kvm_regs {int rbx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct kvm_vm*,int ) ;
 int FUNC_2 (struct kvm_regs*,TYPE_4__*) ;
 int FUNC_3 (struct kvm_sregs*,TYPE_3__*) ;
 int FUNC_4 (struct kvm_vcpu_events*,int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct kvm_vm*) ;
 int FUNC_10 (int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (struct kvm_vm*,int ,struct kvm_vcpu_events*) ;
 int FUNC_12 (struct kvm_vm*,int ,struct kvm_regs*) ;
 int FUNC_13 (struct kvm_vm*,int ,struct kvm_regs*) ;
 int FUNC_14 (struct kvm_vm*,int ,struct kvm_sregs*) ;
 struct kvm_run* FUNC_15 (struct kvm_vm*,int ) ;
 struct kvm_vm* FUNC_16 (int ,int ,int ) ;

int FUNC_17(int VAR_13, char *VAR_14[])
{
 struct kvm_vm *VAR_15;
 struct kvm_run *VAR_16;
 struct kvm_regs VAR_17;
 struct kvm_sregs VAR_18;
 struct kvm_vcpu_events VAR_19;
 int VAR_20, VAR_21;


 FUNC_10(VAR_12, ((void*)0));

 VAR_21 = FUNC_8(VAR_3);
 if ((VAR_21 & VAR_7) != VAR_7) {
  FUNC_7(VAR_11, "KVM_CAP_SYNC_REGS not supported, skipping test\n");
  FUNC_5(VAR_2);
 }
 if ((VAR_21 & VAR_1) != 0) {
  FUNC_7(VAR_11, "The \"invalid\" field is not invalid, skipping test\n");
  FUNC_5(VAR_2);
 }


 VAR_15 = FUNC_16(VAR_8, 0, VAR_10);

 VAR_16 = FUNC_15(VAR_15, VAR_8);


 VAR_16->kvm_valid_regs = VAR_1;
 VAR_20 = FUNC_1(VAR_15, VAR_8);
 FUNC_0(VAR_20 < 0 && VAR_9 == VAR_0,
      "Invalid kvm_valid_regs did not cause expected KVM_RUN error: %d\n",
      VAR_20);
 FUNC_15(VAR_15, VAR_8)->kvm_valid_regs = 0;

 VAR_16->kvm_valid_regs = VAR_1 | VAR_7;
 VAR_20 = FUNC_1(VAR_15, VAR_8);
 FUNC_0(VAR_20 < 0 && VAR_9 == VAR_0,
      "Invalid kvm_valid_regs did not cause expected KVM_RUN error: %d\n",
      VAR_20);
 FUNC_15(VAR_15, VAR_8)->kvm_valid_regs = 0;


 VAR_16->kvm_dirty_regs = VAR_1;
 VAR_20 = FUNC_1(VAR_15, VAR_8);
 FUNC_0(VAR_20 < 0 && VAR_9 == VAR_0,
      "Invalid kvm_dirty_regs did not cause expected KVM_RUN error: %d\n",
      VAR_20);
 FUNC_15(VAR_15, VAR_8)->kvm_dirty_regs = 0;

 VAR_16->kvm_dirty_regs = VAR_1 | VAR_7;
 VAR_20 = FUNC_1(VAR_15, VAR_8);
 FUNC_0(VAR_20 < 0 && VAR_9 == VAR_0,
      "Invalid kvm_dirty_regs did not cause expected KVM_RUN error: %d\n",
      VAR_20);
 FUNC_15(VAR_15, VAR_8)->kvm_dirty_regs = 0;



 VAR_16->kvm_valid_regs = VAR_7;
 VAR_20 = FUNC_1(VAR_15, VAR_8);
 FUNC_0(VAR_16->exit_reason == VAR_4,
      "Unexpected exit reason: %u (%s),\n",
      VAR_16->exit_reason,
      FUNC_6(VAR_16->exit_reason));

 FUNC_12(VAR_15, VAR_8, &VAR_17);
 FUNC_2(&VAR_17, &VAR_16->s.regs.regs);

 FUNC_14(VAR_15, VAR_8, &VAR_18);
 FUNC_3(&VAR_18, &VAR_16->s.regs.sregs);

 FUNC_11(VAR_15, VAR_8, &VAR_19);
 FUNC_4(&VAR_19, &VAR_16->s.regs.events);


 VAR_16->s.regs.regs.rbx = 0xBAD1DEA;
 VAR_16->s.regs.sregs.apic_base = 1 << 11;


 VAR_16->kvm_valid_regs = VAR_7;
 VAR_16->kvm_dirty_regs = VAR_5 | VAR_6;
 VAR_20 = FUNC_1(VAR_15, VAR_8);
 FUNC_0(VAR_16->exit_reason == VAR_4,
      "Unexpected exit reason: %u (%s),\n",
      VAR_16->exit_reason,
      FUNC_6(VAR_16->exit_reason));
 FUNC_0(VAR_16->s.regs.regs.rbx == 0xBAD1DEA + 1,
      "rbx sync regs value incorrect 0x%llx.",
      VAR_16->s.regs.regs.rbx);
 FUNC_0(VAR_16->s.regs.sregs.apic_base == 1 << 11,
      "apic_base sync regs value incorrect 0x%llx.",
      VAR_16->s.regs.sregs.apic_base);

 FUNC_12(VAR_15, VAR_8, &VAR_17);
 FUNC_2(&VAR_17, &VAR_16->s.regs.regs);

 FUNC_14(VAR_15, VAR_8, &VAR_18);
 FUNC_3(&VAR_18, &VAR_16->s.regs.sregs);

 FUNC_11(VAR_15, VAR_8, &VAR_19);
 FUNC_4(&VAR_19, &VAR_16->s.regs.events);




 VAR_16->kvm_valid_regs = VAR_7;
 VAR_16->kvm_dirty_regs = 0;
 VAR_16->s.regs.regs.rbx = 0xDEADBEEF;
 VAR_20 = FUNC_1(VAR_15, VAR_8);
 FUNC_0(VAR_16->exit_reason == VAR_4,
      "Unexpected exit reason: %u (%s),\n",
      VAR_16->exit_reason,
      FUNC_6(VAR_16->exit_reason));
 FUNC_0(VAR_16->s.regs.regs.rbx != 0xDEADBEEF,
      "rbx sync regs value incorrect 0x%llx.",
      VAR_16->s.regs.regs.rbx);





 VAR_16->kvm_valid_regs = 0;
 VAR_16->kvm_dirty_regs = 0;
 VAR_16->s.regs.regs.rbx = 0xAAAA;
 VAR_17.rbx = 0xBAC0;
 FUNC_13(VAR_15, VAR_8, &VAR_17);
 VAR_20 = FUNC_1(VAR_15, VAR_8);
 FUNC_0(VAR_16->exit_reason == VAR_4,
      "Unexpected exit reason: %u (%s),\n",
      VAR_16->exit_reason,
      FUNC_6(VAR_16->exit_reason));
 FUNC_0(VAR_16->s.regs.regs.rbx == 0xAAAA,
      "rbx sync regs value incorrect 0x%llx.",
      VAR_16->s.regs.regs.rbx);
 FUNC_12(VAR_15, VAR_8, &VAR_17);
 FUNC_0(VAR_17.rbx == 0xBAC0 + 1,
      "rbx guest value incorrect 0x%llx.",
      VAR_17.rbx);





 VAR_16->kvm_valid_regs = 0;
 VAR_16->kvm_dirty_regs = VAR_7;
 VAR_16->s.regs.regs.rbx = 0xBBBB;
 VAR_20 = FUNC_1(VAR_15, VAR_8);
 FUNC_0(VAR_16->exit_reason == VAR_4,
      "Unexpected exit reason: %u (%s),\n",
      VAR_16->exit_reason,
      FUNC_6(VAR_16->exit_reason));
 FUNC_0(VAR_16->s.regs.regs.rbx == 0xBBBB,
      "rbx sync regs value incorrect 0x%llx.",
      VAR_16->s.regs.regs.rbx);
 FUNC_12(VAR_15, VAR_8, &VAR_17);
 FUNC_0(VAR_17.rbx == 0xBBBB + 1,
      "rbx guest value incorrect 0x%llx.",
      VAR_17.rbx);

 FUNC_9(VAR_15);

 return 0;
}

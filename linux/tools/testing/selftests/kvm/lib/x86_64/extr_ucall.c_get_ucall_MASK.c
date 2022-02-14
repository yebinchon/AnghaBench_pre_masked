
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_vaddr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int ucall ;
struct ucall {int cmd; } ;
struct kvm_vm {int dummy; } ;
struct TYPE_2__ {scalar_t__ port; } ;
struct kvm_run {scalar_t__ exit_reason; TYPE_1__ io; } ;
struct kvm_regs {scalar_t__ rdi; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ucall* FUNC_0 (struct kvm_vm*,int ) ;
 int FUNC_1 (struct ucall*,struct ucall*,int) ;
 int FUNC_2 (struct kvm_vm*,int ,struct kvm_regs*) ;
 int FUNC_3 (struct kvm_vm*,int ) ;
 struct kvm_run* FUNC_4 (struct kvm_vm*,int ) ;

uint64_t FUNC_5(struct kvm_vm *VAR_2, uint32_t VAR_3, struct ucall *VAR_4)
{
 struct kvm_run *VAR_5 = FUNC_4(VAR_2, VAR_3);
 struct ucall VAR_6 = {};

 if (VAR_5->exit_reason == VAR_0 && VAR_5->io.port == VAR_1) {
  struct kvm_regs VAR_7;

  FUNC_2(VAR_2, VAR_3, &VAR_7);
  FUNC_1(&VAR_6, FUNC_0(VAR_2, (vm_vaddr_t)VAR_7.rdi),
         sizeof(VAR_6));

  FUNC_3(VAR_2, VAR_3);
  if (VAR_4)
   FUNC_1(VAR_4, &VAR_6, sizeof(VAR_6));
 }

 return VAR_6.cmd;
}

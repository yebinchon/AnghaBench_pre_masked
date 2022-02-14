
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucall {scalar_t__ cmd; } ;
typedef struct ucall vm_vaddr_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int ucall ;
struct kvm_vm {int dummy; } ;
struct TYPE_2__ {scalar_t__ phys_addr; int len; struct ucall* data; scalar_t__ is_write; } ;
struct kvm_run {scalar_t__ exit_reason; TYPE_1__ mmio; } ;
typedef int gva ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct ucall* FUNC_1 (struct kvm_vm*,struct ucall) ;
 int FUNC_2 (struct ucall*,struct ucall*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct kvm_vm*,int ) ;
 struct kvm_run* FUNC_4 (struct kvm_vm*,int ) ;

uint64_t FUNC_5(struct kvm_vm *VAR_2, uint32_t VAR_3, struct ucall *VAR_4)
{
 struct kvm_run *VAR_5 = FUNC_4(VAR_2, VAR_3);
 struct ucall VAR_6 = {};

 if (VAR_5->exit_reason == VAR_0 &&
     VAR_5->mmio.phys_addr == (uint64_t)VAR_1) {
  vm_vaddr_t VAR_7;

  FUNC_0(VAR_5->mmio.is_write && VAR_5->mmio.len == 8,
       "Unexpected ucall exit mmio address access");
  FUNC_2(&VAR_7, VAR_5->mmio.data, sizeof(VAR_7));
  FUNC_2(&VAR_6, FUNC_1(VAR_2, VAR_7), sizeof(VAR_6));

  FUNC_3(VAR_2, VAR_3);
  if (VAR_4)
   FUNC_2(VAR_4, &VAR_6, sizeof(VAR_6));
 }

 return VAR_6.cmd;
}

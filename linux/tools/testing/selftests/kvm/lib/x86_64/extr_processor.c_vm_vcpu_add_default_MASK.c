
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_vaddr_t ;
typedef int uint32_t ;
struct kvm_vm {int dummy; } ;
struct kvm_regs {int rflags; unsigned long rip; scalar_t__ rsp; } ;
struct kvm_mp_state {scalar_t__ mp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct kvm_vm*,int ,struct kvm_regs*) ;
 int FUNC_2 (struct kvm_vm*,int ,struct kvm_regs*) ;
 int FUNC_3 (struct kvm_vm*,int ,struct kvm_mp_state*) ;
 int FUNC_4 (struct kvm_vm*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct kvm_vm*,int,int ,int ,int ) ;
 int FUNC_6 (struct kvm_vm*,int ) ;

void FUNC_7(struct kvm_vm *VAR_2, uint32_t VAR_3, void *VAR_4)
{
 struct kvm_mp_state VAR_5;
 struct kvm_regs VAR_6;
 vm_vaddr_t VAR_7;
 VAR_7 = FUNC_5(VAR_2, VAR_1 * FUNC_0(),
         VAR_0, 0, 0);


 FUNC_6(VAR_2, VAR_3);
 FUNC_4(VAR_2, VAR_3, 0, 0);


 FUNC_1(VAR_2, VAR_3, &VAR_6);
 VAR_6.rflags = VAR_6.rflags | 0x2;
 VAR_6.rsp = VAR_7 + (VAR_1 * FUNC_0());
 VAR_6.rip = (unsigned long) VAR_4;
 FUNC_2(VAR_2, VAR_3, &VAR_6);


 VAR_5.mp_state = 0;
 FUNC_3(VAR_2, VAR_3, &VAR_5);
}

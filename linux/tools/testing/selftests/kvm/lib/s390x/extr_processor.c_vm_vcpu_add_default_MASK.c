
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct kvm_vm {int page_size; int pgd; } ;
struct kvm_sregs {int* crs; } ;
struct kvm_run {int psw_mask; uintptr_t psw_addr; } ;
struct kvm_regs {scalar_t__* gprs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 size_t FUNC_1 () ;
 int FUNC_2 (struct kvm_vm*,int ,struct kvm_regs*) ;
 int FUNC_3 (struct kvm_vm*,int ,struct kvm_regs*) ;
 int FUNC_4 (struct kvm_vm*,int ,struct kvm_sregs*) ;
 int FUNC_5 (struct kvm_vm*,int ,struct kvm_sregs*) ;
 struct kvm_run* FUNC_6 (struct kvm_vm*,int ) ;
 scalar_t__ FUNC_7 (struct kvm_vm*,size_t,int ,int ,int ) ;
 int FUNC_8 (struct kvm_vm*,int ) ;

void FUNC_9(struct kvm_vm *VAR_2, uint32_t VAR_3, void *VAR_4)
{
 size_t VAR_5 = VAR_1 * FUNC_1();
 uint64_t VAR_6;
 struct kvm_regs VAR_7;
 struct kvm_sregs VAR_8;
 struct kvm_run *VAR_9;

 FUNC_0(VAR_2->page_size == 4096, "Unsupported page size: 0x%x",
      VAR_2->page_size);

 VAR_6 = FUNC_7(VAR_2, VAR_5,
         VAR_0, 0, 0);

 FUNC_8(VAR_2, VAR_3);


 FUNC_2(VAR_2, VAR_3, &VAR_7);
 VAR_7.gprs[15] = VAR_6 + (VAR_1 * FUNC_1()) - 160;
 FUNC_3(VAR_2, VAR_3, &VAR_7);

 FUNC_4(VAR_2, VAR_3, &VAR_8);
 VAR_8.crs[0] |= 0x00040000;
 VAR_8.crs[1] = VAR_2->pgd | 0xf;
 FUNC_5(VAR_2, VAR_3, &VAR_8);

 VAR_9 = FUNC_6(VAR_2, VAR_3);
 VAR_9->psw_mask = 0x0400000180000000ULL;
 VAR_9->psw_addr = (uintptr_t)VAR_4;
}

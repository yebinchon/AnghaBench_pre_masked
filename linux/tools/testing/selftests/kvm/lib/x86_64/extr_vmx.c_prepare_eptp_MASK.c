
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmx_pages {void* eptp; int eptp_gpa; int eptp_hva; } ;
struct kvm_vm {int dummy; } ;


 int FUNC_0 (struct kvm_vm*,uintptr_t) ;
 int FUNC_1 (struct kvm_vm*,uintptr_t) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct kvm_vm*,int ,int,int ,int ) ;

void FUNC_4(struct vmx_pages *VAR_0, struct kvm_vm *VAR_1,
    uint32_t VAR_2)
{
 VAR_0->eptp = (void *)FUNC_3(VAR_1, FUNC_2(), 0x10000, 0, 0);
 VAR_0->eptp_hva = FUNC_1(VAR_1, (uintptr_t)VAR_0->eptp);
 VAR_0->eptp_gpa = FUNC_0(VAR_1, (uintptr_t)VAR_0->eptp);
}

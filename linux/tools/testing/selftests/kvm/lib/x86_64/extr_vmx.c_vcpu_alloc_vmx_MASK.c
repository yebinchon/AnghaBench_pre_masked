
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t vm_vaddr_t ;
struct vmx_pages {void* enlightened_vmcs; void* enlightened_vmcs_gpa; void* enlightened_vmcs_hva; void* vp_assist; void* vp_assist_gpa; void* vp_assist_hva; void* vmwrite_hva; void* vmwrite; void* vmwrite_gpa; void* vmread_hva; void* vmread; void* vmread_gpa; void* shadow_vmcs; void* shadow_vmcs_gpa; void* shadow_vmcs_hva; void* msr_hva; void* msr; void* msr_gpa; void* vmcs; void* vmcs_gpa; void* vmcs_hva; void* vmxon; void* vmxon_gpa; void* vmxon_hva; } ;
struct kvm_vm {int dummy; } ;


 void* FUNC_0 (struct kvm_vm*,uintptr_t) ;
 void* FUNC_1 (struct kvm_vm*,uintptr_t) ;
 int FUNC_2 () ;
 int FUNC_3 (void*,int ,int ) ;
 uintptr_t FUNC_4 (struct kvm_vm*,int ,int,int ,int ) ;

struct vmx_pages *
FUNC_5(struct kvm_vm *VAR_0, vm_vaddr_t *VAR_1)
{
 vm_vaddr_t VAR_2 = FUNC_4(VAR_0, FUNC_2(), 0x10000, 0, 0);
 struct vmx_pages *VAR_3 = FUNC_1(VAR_0, VAR_2);


 VAR_3->vmxon = (void *)FUNC_4(VAR_0, FUNC_2(), 0x10000, 0, 0);
 VAR_3->vmxon_hva = FUNC_1(VAR_0, (uintptr_t)VAR_3->vmxon);
 VAR_3->vmxon_gpa = FUNC_0(VAR_0, (uintptr_t)VAR_3->vmxon);


 VAR_3->vmcs = (void *)FUNC_4(VAR_0, FUNC_2(), 0x10000, 0, 0);
 VAR_3->vmcs_hva = FUNC_1(VAR_0, (uintptr_t)VAR_3->vmcs);
 VAR_3->vmcs_gpa = FUNC_0(VAR_0, (uintptr_t)VAR_3->vmcs);


 VAR_3->msr = (void *)FUNC_4(VAR_0, FUNC_2(), 0x10000, 0, 0);
 VAR_3->msr_hva = FUNC_1(VAR_0, (uintptr_t)VAR_3->msr);
 VAR_3->msr_gpa = FUNC_0(VAR_0, (uintptr_t)VAR_3->msr);
 FUNC_3(VAR_3->msr_hva, 0, FUNC_2());


 VAR_3->shadow_vmcs = (void *)FUNC_4(VAR_0, FUNC_2(), 0x10000, 0, 0);
 VAR_3->shadow_vmcs_hva = FUNC_1(VAR_0, (uintptr_t)VAR_3->shadow_vmcs);
 VAR_3->shadow_vmcs_gpa = FUNC_0(VAR_0, (uintptr_t)VAR_3->shadow_vmcs);


 VAR_3->vmread = (void *)FUNC_4(VAR_0, FUNC_2(), 0x10000, 0, 0);
 VAR_3->vmread_hva = FUNC_1(VAR_0, (uintptr_t)VAR_3->vmread);
 VAR_3->vmread_gpa = FUNC_0(VAR_0, (uintptr_t)VAR_3->vmread);
 FUNC_3(VAR_3->vmread_hva, 0, FUNC_2());

 VAR_3->vmwrite = (void *)FUNC_4(VAR_0, FUNC_2(), 0x10000, 0, 0);
 VAR_3->vmwrite_hva = FUNC_1(VAR_0, (uintptr_t)VAR_3->vmwrite);
 VAR_3->vmwrite_gpa = FUNC_0(VAR_0, (uintptr_t)VAR_3->vmwrite);
 FUNC_3(VAR_3->vmwrite_hva, 0, FUNC_2());


 VAR_3->vp_assist = (void *)FUNC_4(VAR_0, FUNC_2(),
      0x10000, 0, 0);
 VAR_3->vp_assist_hva = FUNC_1(VAR_0, (uintptr_t)VAR_3->vp_assist);
 VAR_3->vp_assist_gpa = FUNC_0(VAR_0, (uintptr_t)VAR_3->vp_assist);


 VAR_3->enlightened_vmcs = (void *)FUNC_4(VAR_0, FUNC_2(),
             0x10000, 0, 0);
 VAR_3->enlightened_vmcs_hva =
  FUNC_1(VAR_0, (uintptr_t)VAR_3->enlightened_vmcs);
 VAR_3->enlightened_vmcs_gpa =
  FUNC_0(VAR_0, (uintptr_t)VAR_3->enlightened_vmcs);

 *VAR_1 = VAR_2;
 return VAR_3;
}

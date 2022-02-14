
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct kvm_vm {int dummy; } ;
typedef enum vm_guest_mode { ____Placeholder_vm_guest_mode } vm_guest_mode ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_vm* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct kvm_vm*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct kvm_vm*) ;
 int FUNC_3 (struct kvm_vm*,int ,void*) ;

__attribute__((used)) static struct kvm_vm *FUNC_4(enum vm_guest_mode VAR_3, uint32_t VAR_4,
    uint64_t VAR_5, void *VAR_6)
{
 struct kvm_vm *VAR_7;
 uint64_t VAR_8 = VAR_5 / 512 * 2;

 VAR_7 = FUNC_0(VAR_3, VAR_0 + VAR_8, VAR_1);
 FUNC_1(VAR_7, VAR_2, 0, 0);

 FUNC_2(VAR_7);

 FUNC_3(VAR_7, VAR_4, VAR_6);
 return VAR_7;
}

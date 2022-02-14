
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vcpu {int fd; } ;
struct kvm_vm {int dummy; } ;
struct kvm_nested_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,struct kvm_nested_state*) ;
 struct vcpu* FUNC_2 (struct kvm_vm*,int ) ;

int FUNC_3(struct kvm_vm *VAR_2, uint32_t VAR_3,
     struct kvm_nested_state *VAR_4, bool VAR_5)
{
 struct vcpu *VAR_6 = FUNC_2(VAR_2, VAR_3);
 int VAR_7;

 FUNC_0(VAR_6 != ((void*)0), "vcpu not found, vcpuid: %u", VAR_3);

 VAR_7 = FUNC_1(VAR_6->fd, VAR_0, VAR_4);
 if (!VAR_5) {
  FUNC_0(VAR_7 == 0,
   "KVM_SET_NESTED_STATE failed, ret: %i errno: %i",
   VAR_7, VAR_1);
 }

 return VAR_7;
}

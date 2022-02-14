
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_memory_slot {int dummy; } ;
typedef int gfn_t ;


 struct kvm_memory_slot* FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_memory_slot*,int ) ;

void FUNC_2(struct kvm_vcpu *VAR_0, gfn_t VAR_1)
{
 struct kvm_memory_slot *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_2, VAR_1);
}

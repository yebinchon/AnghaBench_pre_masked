
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int kvm_pfn_t ;
typedef int gfn_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

kvm_pfn_t FUNC_2(struct kvm_vcpu *VAR_0, gfn_t VAR_1)
{
 return FUNC_0(FUNC_1(VAR_0, VAR_1), VAR_1);
}

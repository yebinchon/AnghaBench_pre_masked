
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int gfn_t ;


 unsigned long FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

unsigned long FUNC_2(struct kvm_vcpu *VAR_0, gfn_t VAR_1)
{
 return FUNC_0(FUNC_1(VAR_0, VAR_1), VAR_1, ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int kvm_pfn_t ;
typedef int gfn_t ;


 int FUNC_0 (struct kvm*,int ) ;
 int FUNC_1 (int ,int ) ;

kvm_pfn_t FUNC_2(struct kvm *VAR_0, gfn_t VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0, VAR_1), VAR_1);
}

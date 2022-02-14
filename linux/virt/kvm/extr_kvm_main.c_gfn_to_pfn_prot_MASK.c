
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int kvm_pfn_t ;
typedef int gfn_t ;


 int FUNC_0 (int ,int ,int,int *,int,int*) ;
 int FUNC_1 (struct kvm*,int ) ;

kvm_pfn_t FUNC_2(struct kvm *VAR_0, gfn_t VAR_1, bool VAR_2,
        bool *VAR_3)
{
 return FUNC_0(FUNC_1(VAR_0, VAR_1), VAR_1, 0, ((void*)0),
        VAR_2, VAR_3);
}

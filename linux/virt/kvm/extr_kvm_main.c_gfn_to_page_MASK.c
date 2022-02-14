
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm {int dummy; } ;
typedef int kvm_pfn_t ;
typedef int gfn_t ;


 int FUNC_0 (struct kvm*,int ) ;
 struct page* FUNC_1 (int ) ;

struct page *FUNC_2(struct kvm *VAR_0, gfn_t VAR_1)
{
 kvm_pfn_t VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 return FUNC_1(VAR_2);
}

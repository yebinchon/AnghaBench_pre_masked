
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int kvm_pfn_t ;


 struct page* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct page* FUNC_3 (int ) ;

__attribute__((used)) static struct page *FUNC_4(kvm_pfn_t VAR_1)
{
 if (FUNC_1(VAR_1))
  return VAR_0;

 if (FUNC_2(VAR_1)) {
  FUNC_0(1);
  return VAR_0;
 }

 return FUNC_3(VAR_1);
}

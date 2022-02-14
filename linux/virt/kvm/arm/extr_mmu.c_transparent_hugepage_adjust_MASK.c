
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef unsigned long phys_addr_t ;
typedef unsigned long kvm_pfn_t ;
typedef unsigned long gfn_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 struct page* FUNC_5 (unsigned long) ;

__attribute__((used)) static bool FUNC_6(kvm_pfn_t *VAR_3, phys_addr_t *VAR_4)
{
 kvm_pfn_t VAR_5 = *VAR_3;
 gfn_t VAR_6 = *VAR_4 >> VAR_0;
 struct page *VAR_7 = FUNC_5(VAR_5);






 if (!FUNC_0(VAR_7) && FUNC_1(VAR_7)) {
  unsigned long VAR_8;
  VAR_8 = VAR_2 - 1;
  FUNC_2((VAR_6 & VAR_8) != (VAR_5 & VAR_8));
  if (VAR_5 & VAR_8) {
   *VAR_4 &= VAR_1;
   FUNC_4(VAR_5);
   VAR_5 &= ~VAR_8;
   FUNC_3(VAR_5);
   *VAR_3 = VAR_5;
  }

  return 1;
 }

 return 0;
}

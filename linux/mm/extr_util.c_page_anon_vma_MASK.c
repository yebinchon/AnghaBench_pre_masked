
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ mapping; } ;
struct anon_vma {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct anon_vma* FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct page*) ;

struct anon_vma *FUNC_2(struct page *VAR_2)
{
 unsigned long VAR_3;

 VAR_2 = FUNC_1(VAR_2);
 VAR_3 = (unsigned long)VAR_2->mapping;
 if ((VAR_3 & VAR_1) != VAR_0)
  return ((void*)0);
 return FUNC_0(VAR_2);
}

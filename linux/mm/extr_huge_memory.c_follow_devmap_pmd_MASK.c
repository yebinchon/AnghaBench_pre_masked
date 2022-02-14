
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct dev_pagemap {int dummy; } ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 struct dev_pagemap* FUNC_3 (unsigned long,struct dev_pagemap*) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct mm_struct*,int *) ;
 unsigned long FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct vm_area_struct*,unsigned long,int *,int) ;

struct page *FUNC_12(struct vm_area_struct *VAR_8, unsigned long VAR_9,
  pmd_t *VAR_10, int VAR_11, struct dev_pagemap **VAR_12)
{
 unsigned long VAR_13 = FUNC_8(*VAR_10);
 struct mm_struct *VAR_14 = VAR_8->vm_mm;
 struct page *VAR_15;

 FUNC_2(FUNC_7(VAR_14, VAR_10));





 FUNC_1(VAR_11 & VAR_2, "mm: In follow_devmap_pmd with FOLL_COW set");

 if (VAR_11 & VAR_5 && !FUNC_10(*VAR_10))
  return ((void*)0);

 if (FUNC_9(*VAR_10) && FUNC_6(*VAR_10))
            ;
 else
  return ((void*)0);

 if (VAR_11 & VAR_4)
  FUNC_11(VAR_8, VAR_9, VAR_10, VAR_11);





 if (!(VAR_11 & VAR_3))
  return FUNC_0(-VAR_0);

 VAR_13 += (VAR_9 & ~VAR_7) >> VAR_6;
 *VAR_12 = FUNC_3(VAR_13, *VAR_12);
 if (!*VAR_12)
  return FUNC_0(-VAR_1);
 VAR_15 = FUNC_5(VAR_13);
 FUNC_4(VAR_15);

 return VAR_15;
}

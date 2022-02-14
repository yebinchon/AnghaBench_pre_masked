
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; } ;
struct page {scalar_t__ mapping; } ;
struct mm_struct {int dummy; } ;
typedef int pmd_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int,struct page*) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct mm_struct*,int *) ;
 struct page* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (struct vm_area_struct*,unsigned long,int *,unsigned int) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;

struct page *FUNC_20(struct vm_area_struct *VAR_10,
       unsigned long VAR_11,
       pmd_t *VAR_12,
       unsigned int VAR_13)
{
 struct mm_struct *VAR_14 = VAR_10->vm_mm;
 struct page *VAR_15 = ((void*)0);

 FUNC_6(FUNC_14(VAR_14, VAR_12));

 if (VAR_13 & VAR_6 && !FUNC_7(*VAR_12, VAR_13))
  goto out;


 if ((VAR_13 & VAR_1) && FUNC_10(*VAR_12))
  return FUNC_0(-VAR_0);


 if ((VAR_13 & VAR_4) && FUNC_16(*VAR_12))
  goto out;

 VAR_15 = FUNC_15(*VAR_12);
 FUNC_5(!FUNC_4(VAR_15) && !FUNC_11(VAR_15), VAR_15);
 if (VAR_13 & VAR_5)
  FUNC_17(VAR_10, VAR_11, VAR_12, VAR_13);
 if ((VAR_13 & VAR_3) && (VAR_10->vm_flags & VAR_9)) {
  if (FUNC_1(VAR_15) && FUNC_8(VAR_15) != 1)
   goto skip_mlock;
  if (FUNC_3(VAR_15) || !VAR_15->mapping)
   goto skip_mlock;
  if (!FUNC_18(VAR_15))
   goto skip_mlock;
  FUNC_12();
  if (VAR_15->mapping && !FUNC_3(VAR_15))
   FUNC_13(VAR_15);
  FUNC_19(VAR_15);
 }
skip_mlock:
 VAR_15 += (VAR_11 & ~VAR_7) >> VAR_8;
 FUNC_5(!FUNC_2(VAR_15) && !FUNC_11(VAR_15), VAR_15);
 if (VAR_13 & VAR_2)
  FUNC_9(VAR_15);

out:
 return VAR_15;
}

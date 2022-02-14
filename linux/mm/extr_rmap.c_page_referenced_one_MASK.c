
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page_vma_mapped_walk {unsigned long address; int pmd; scalar_t__ pte; struct vm_area_struct* vma; struct page* page; } ;
struct page_referenced_arg {int vm_flags; int mapcount; int referenced; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct page_vma_mapped_walk*) ;
 int FUNC_5 (struct page_vma_mapped_walk*) ;
 scalar_t__ FUNC_6 (struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_7 (struct vm_area_struct*,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_8 (struct page*) ;

__attribute__((used)) static bool FUNC_9(struct page *VAR_3, struct vm_area_struct *VAR_4,
   unsigned long VAR_5, void *VAR_6)
{
 struct page_referenced_arg *VAR_7 = VAR_6;
 struct page_vma_mapped_walk VAR_8 = {
  .page = VAR_3,
  .vma = VAR_4,
  .address = VAR_5,
 };
 int VAR_9 = 0;

 while (FUNC_4(&VAR_8)) {
  VAR_5 = VAR_8.address;

  if (VAR_4->vm_flags & VAR_1) {
   FUNC_5(&VAR_8);
   VAR_7->vm_flags |= VAR_1;
   return 0;
  }

  if (VAR_8.pte) {
   if (FUNC_7(VAR_4, VAR_5,
      VAR_8.pte)) {
    if (FUNC_3(!(VAR_4->vm_flags & VAR_2)))
     VAR_9++;
   }
  } else if (FUNC_0(VAR_0)) {
   if (FUNC_6(VAR_4, VAR_5,
      VAR_8.pmd))
    VAR_9++;
  } else {

   FUNC_1(1);
  }

  VAR_7->mapcount--;
 }

 if (VAR_9)
  FUNC_2(VAR_3);
 if (FUNC_8(VAR_3))
  VAR_9++;

 if (VAR_9) {
  VAR_7->referenced++;
  VAR_7->vm_flags |= VAR_4->vm_flags;
 }

 if (!VAR_7->mapcount)
  return 0;

 return 1;
}

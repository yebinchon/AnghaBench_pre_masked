
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page_vma_mapped_walk {unsigned long address; int pmd; scalar_t__ pte; struct vm_area_struct* vma; struct page* page; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page_vma_mapped_walk*) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_5 (struct vm_area_struct*,unsigned long,scalar_t__) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static bool FUNC_7(struct page *VAR_1,
     struct vm_area_struct *VAR_2,
     unsigned long VAR_3, void *VAR_4)
{
 struct page_vma_mapped_walk VAR_5 = {
  .page = VAR_1,
  .vma = VAR_2,
  .address = VAR_3,
 };
 bool VAR_6 = 0;

 while (FUNC_3(&VAR_5)) {
  VAR_3 = VAR_5.address;
  if (VAR_5.pte) {




   if (FUNC_5(VAR_2, VAR_3, VAR_5.pte))
    VAR_6 = 1;
  } else if (FUNC_0(VAR_0)) {
   if (FUNC_4(VAR_2, VAR_3, VAR_5.pmd))
    VAR_6 = 1;
  } else {

   FUNC_1(1);
  }
 }

 if (VAR_6) {
  FUNC_2(VAR_1);





  FUNC_6(VAR_1);
 }
 return 1;
}

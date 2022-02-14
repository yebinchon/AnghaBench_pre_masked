
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct page_vma_mapped_walk {int flags; int page; int * pte; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(struct page_vma_mapped_walk *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->flags & VAR_0) {
  swp_entry_t VAR_3;
  if (!FUNC_3(*VAR_1->pte))
   return 0;
  VAR_3 = FUNC_8(*VAR_1->pte);

  if (!FUNC_2(VAR_3))
   return 0;

  VAR_2 = FUNC_4(VAR_3);
 } else if (FUNC_3(*VAR_1->pte)) {
  swp_entry_t VAR_4;


  VAR_4 = FUNC_8(*VAR_1->pte);
  if (!FUNC_1(VAR_4))
   return 0;

  VAR_2 = FUNC_0(VAR_4);
 } else {
  if (!FUNC_7(*VAR_1->pte))
   return 0;

  VAR_2 = FUNC_6(*VAR_1->pte);
 }

 return FUNC_5(VAR_1->page, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vma_swap_readahead {int win; unsigned int nr_pte; unsigned int offset; int * ptes; int member_0; } ;
struct vm_fault {int address; struct vm_area_struct* vma; } ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct blk_plug {int dummy; } ;
typedef int pte_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ,int ,struct vm_area_struct*,int ,int*) ;
 int FUNC_2 (struct blk_plug*) ;
 int FUNC_3 (struct blk_plug*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct page*) ;
 struct page* FUNC_11 (int ,int ,struct vm_area_struct*,int ,int) ;
 int FUNC_12 (struct vm_fault*,struct vma_swap_readahead*) ;
 int FUNC_13 (struct page*,int) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static struct page *FUNC_15(swp_entry_t VAR_1, gfp_t VAR_2,
           struct vm_fault *VAR_3)
{
 struct blk_plug VAR_4;
 struct vm_area_struct *VAR_5 = VAR_3->vma;
 struct page *VAR_6;
 pte_t *VAR_7, VAR_8;
 swp_entry_t VAR_9;
 unsigned int VAR_10;
 bool VAR_11;
 struct vma_swap_readahead VAR_12 = {0,};

 FUNC_12(VAR_3, &VAR_12);
 if (VAR_12.win == 1)
  goto skip;

 FUNC_3(&VAR_4);
 for (VAR_10 = 0, VAR_7 = VAR_12.ptes; VAR_10 < VAR_12.nr_pte;
      VAR_10++, VAR_7++) {
  VAR_8 = *VAR_7;
  if (FUNC_7(VAR_8))
   continue;
  if (FUNC_8(VAR_8))
   continue;
  VAR_9 = FUNC_9(VAR_8);
  if (FUNC_14(FUNC_6(VAR_9)))
   continue;
  VAR_6 = FUNC_1(VAR_9, VAR_2, VAR_5,
            VAR_3->address, &VAR_11);
  if (!VAR_6)
   continue;
  if (VAR_11) {
   FUNC_13(VAR_6, 0);
   if (VAR_10 != VAR_12.offset) {
    FUNC_0(VAR_6);
    FUNC_4(VAR_0);
   }
  }
  FUNC_10(VAR_6);
 }
 FUNC_2(&VAR_4);
 FUNC_5();
skip:
 return FUNC_11(VAR_1, VAR_2, VAR_5, VAR_3->address,
         VAR_12.win == 1);
}

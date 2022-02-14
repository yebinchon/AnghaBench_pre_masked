
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_fault {unsigned long address; int * pmd; struct vm_area_struct* vma; } ;
struct vm_area_struct {int dummy; } ;
struct swap_info_struct {unsigned char* swap_map; } ;
struct page {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char volatile VAR_4 ;
 int FUNC_0 (struct swap_info_struct*,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct page*) ;
 struct swap_info_struct** VAR_5 ;
 struct page* FUNC_7 (int ,int ,struct vm_fault*) ;
 unsigned long FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct vm_area_struct*,int *,unsigned long,int ,struct page*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int FUNC_14(struct vm_area_struct *VAR_6, pmd_t *VAR_7,
   unsigned long VAR_8, unsigned long VAR_9,
   unsigned int VAR_10, bool VAR_11,
   unsigned long *VAR_12)
{
 struct page *VAR_13;
 swp_entry_t VAR_14;
 pte_t *VAR_15;
 struct swap_info_struct *VAR_16;
 unsigned long VAR_17;
 int VAR_18 = 0;
 volatile unsigned char *VAR_19;

 VAR_16 = VAR_5[VAR_10];
 VAR_15 = FUNC_3(VAR_7, VAR_8);
 do {
  struct vm_fault VAR_20;

  if (!FUNC_1(*VAR_15))
   continue;

  VAR_14 = FUNC_4(*VAR_15);
  if (FUNC_9(VAR_14) != VAR_10)
   continue;

  VAR_17 = FUNC_8(VAR_14);
  if (VAR_11 && !FUNC_0(VAR_16, VAR_17))
   continue;

  FUNC_5(VAR_15);
  VAR_19 = &VAR_16->swap_map[VAR_17];
  VAR_20.vma = VAR_6;
  VAR_20.address = VAR_8;
  VAR_20.pmd = VAR_7;
  VAR_13 = FUNC_7(VAR_14, VAR_2, &VAR_20);
  if (!VAR_13) {
   if (*VAR_19 == 0 || *VAR_19 == VAR_4)
    goto try_next;
   return -VAR_0;
  }

  FUNC_2(VAR_13);
  FUNC_13(VAR_13);
  VAR_18 = FUNC_12(VAR_6, VAR_7, VAR_8, VAR_14, VAR_13);
  if (VAR_18 < 0) {
   FUNC_11(VAR_13);
   FUNC_6(VAR_13);
   goto out;
  }

  FUNC_10(VAR_13);
  FUNC_11(VAR_13);
  FUNC_6(VAR_13);

  if (*VAR_12 && !--(*VAR_12)) {
   VAR_18 = VAR_1;
   goto out;
  }
try_next:
  VAR_15 = FUNC_3(VAR_7, VAR_8);
 } while (VAR_15++, VAR_8 += VAR_3, VAR_8 != VAR_9);
 FUNC_5(VAR_15 - 1);

 VAR_18 = 0;
out:
 return VAR_18;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pmd_t ;
typedef int * pgtable_t ;
typedef int pgprot_t ;
typedef int pfn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct vm_area_struct*) ;
 int FUNC_3 (struct mm_struct*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct mm_struct*,int *,int *) ;
 int * FUNC_8 (struct mm_struct*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct vm_area_struct*,unsigned long,int *,int ,int) ;
 int FUNC_16 (struct mm_struct*,int *) ;
 int FUNC_17 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct vm_area_struct*,unsigned long,int *) ;

__attribute__((used)) static void FUNC_20(struct vm_area_struct *VAR_0, unsigned long VAR_1,
  pmd_t *VAR_2, pfn_t VAR_3, pgprot_t VAR_4, bool VAR_5,
  pgtable_t VAR_6)
{
 struct mm_struct *VAR_7 = VAR_0->vm_mm;
 pmd_t VAR_8;
 spinlock_t *VAR_9;

 VAR_9 = FUNC_8(VAR_7, VAR_2);
 if (!FUNC_13(*VAR_2)) {
  if (VAR_5) {
   if (FUNC_14(*VAR_2) != FUNC_6(VAR_3)) {
    FUNC_0(!FUNC_1(*VAR_2));
    goto out_unlock;
   }
   VAR_8 = FUNC_12(*VAR_2);
   VAR_8 = FUNC_2(FUNC_10(VAR_8), VAR_0);
   if (FUNC_15(VAR_0, VAR_1, VAR_2, VAR_8, 1))
    FUNC_19(VAR_0, VAR_1, VAR_2);
  }

  goto out_unlock;
 }

 VAR_8 = FUNC_11(FUNC_5(VAR_3, VAR_4));
 if (FUNC_4(VAR_3))
  VAR_8 = FUNC_9(VAR_8);
 if (VAR_5) {
  VAR_8 = FUNC_12(FUNC_10(VAR_8));
  VAR_8 = FUNC_2(VAR_8, VAR_0);
 }

 if (VAR_6) {
  FUNC_7(VAR_7, VAR_2, VAR_6);
  FUNC_3(VAR_7);
  VAR_6 = ((void*)0);
 }

 FUNC_17(VAR_7, VAR_1, VAR_2, VAR_8);
 FUNC_19(VAR_0, VAR_1, VAR_2);

out_unlock:
 FUNC_18(VAR_9);
 if (VAR_6)
  FUNC_16(VAR_7, VAR_6);
}

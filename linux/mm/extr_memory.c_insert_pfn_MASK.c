
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pgprot_t ;
typedef int pfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (struct mm_struct*,unsigned long,int **) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,struct vm_area_struct*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *,int *) ;
 scalar_t__ FUNC_14 (struct vm_area_struct*,unsigned long,int *,int ,int) ;
 int FUNC_15 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_16 (struct vm_area_struct*,unsigned long,int *) ;

__attribute__((used)) static vm_fault_t FUNC_17(struct vm_area_struct *VAR_2, unsigned long VAR_3,
   pfn_t VAR_4, pgprot_t VAR_5, bool VAR_6)
{
 struct mm_struct *VAR_7 = VAR_2->vm_mm;
 pte_t *VAR_8, VAR_9;
 spinlock_t *VAR_10;

 VAR_8 = FUNC_1(VAR_7, VAR_3, &VAR_10);
 if (!VAR_8)
  return VAR_1;
 if (!FUNC_11(*VAR_8)) {
  if (VAR_6) {
   if (FUNC_12(*VAR_8) != FUNC_6(VAR_4)) {
    FUNC_0(!FUNC_2(FUNC_12(*VAR_8)));
    goto out_unlock;
   }
   VAR_9 = FUNC_10(*VAR_8);
   VAR_9 = FUNC_3(FUNC_8(VAR_9), VAR_2);
   if (FUNC_14(VAR_2, VAR_3, VAR_8, VAR_9, 1))
    FUNC_16(VAR_2, VAR_3, VAR_8);
  }
  goto out_unlock;
 }


 if (FUNC_4(VAR_4))
  VAR_9 = FUNC_7(FUNC_5(VAR_4, VAR_5));
 else
  VAR_9 = FUNC_9(FUNC_5(VAR_4, VAR_5));

 if (VAR_6) {
  VAR_9 = FUNC_10(VAR_9);
  VAR_9 = FUNC_3(FUNC_8(VAR_9), VAR_2);
 }

 FUNC_15(VAR_7, VAR_3, VAR_8, VAR_9);
 FUNC_16(VAR_2, VAR_3, VAR_8);

out_unlock:
 FUNC_13(VAR_8, VAR_10);
 return VAR_0;
}

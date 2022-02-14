
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int spinlock_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,struct vm_area_struct*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct vm_area_struct*,unsigned long,int *) ;
 int FUNC_16 (struct mm_struct*,unsigned long,int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (struct vm_area_struct*) ;

int FUNC_20(struct vm_area_struct *VAR_1, pmd_t *VAR_2,
  unsigned long VAR_3, pgprot_t VAR_4, int VAR_5)
{
 struct mm_struct *VAR_6 = VAR_1->vm_mm;
 spinlock_t *VAR_7;
 pmd_t VAR_8;
 bool VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_7)
  return 0;

 VAR_9 = VAR_5 && FUNC_14(*VAR_2);
 VAR_10 = 1;
 if (VAR_5 && FUNC_3(*VAR_2))
  goto unlock;

 if (VAR_5 && FUNC_10(*VAR_2))
  goto unlock;
 VAR_8 = FUNC_15(VAR_1, VAR_3, VAR_2);

 VAR_8 = FUNC_9(VAR_8, VAR_4);
 if (VAR_9)
  VAR_8 = FUNC_8(VAR_8);
 VAR_10 = VAR_0;
 FUNC_16(VAR_6, VAR_3, VAR_2, VAR_8);
 FUNC_0(FUNC_19(VAR_1) && !VAR_9 && FUNC_14(VAR_8));
unlock:
 FUNC_17(VAR_7);
 return VAR_10;
}

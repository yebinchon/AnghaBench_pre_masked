
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zap_details {int dummy; } ;
struct vm_area_struct {int dummy; } ;
struct mmu_gather {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,int *,unsigned long,int,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct mmu_gather*,struct vm_area_struct*,int *,unsigned long) ;
 unsigned long FUNC_9 (struct mmu_gather*,struct vm_area_struct*,int *,unsigned long,unsigned long,struct zap_details*) ;

__attribute__((used)) static inline unsigned long FUNC_10(struct mmu_gather *VAR_1,
    struct vm_area_struct *VAR_2, pud_t *VAR_3,
    unsigned long VAR_4, unsigned long VAR_5,
    struct zap_details *VAR_6)
{
 pmd_t *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_6(VAR_3, VAR_4);
 do {
  VAR_8 = FUNC_3(VAR_4, VAR_5);
  if (FUNC_2(*VAR_7) || FUNC_7(*VAR_7) || FUNC_4(*VAR_7)) {
   if (VAR_8 - VAR_4 != VAR_0)
    FUNC_0(VAR_2, VAR_7, VAR_4, 0, ((void*)0));
   else if (FUNC_8(VAR_1, VAR_2, VAR_7, VAR_4))
    goto next;

  }







  if (FUNC_5(VAR_7))
   goto next;
  VAR_8 = FUNC_9(VAR_1, VAR_2, VAR_7, VAR_4, VAR_8, VAR_6);
next:
  FUNC_1();
 } while (VAR_7++, VAR_4 = VAR_8, VAR_4 != VAR_5);

 return VAR_4;
}

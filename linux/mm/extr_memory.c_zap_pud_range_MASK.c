
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zap_details {int dummy; } ;
struct vm_area_struct {int dummy; } ;
struct mmu_gather {TYPE_1__* mm; } ;
typedef int pud_t ;
typedef int p4d_t ;
struct TYPE_2__ {int mmap_sem; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,struct vm_area_struct*) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vm_area_struct*,int *,unsigned long) ;
 scalar_t__ FUNC_9 (struct mmu_gather*,struct vm_area_struct*,int *,unsigned long) ;
 unsigned long FUNC_10 (struct mmu_gather*,struct vm_area_struct*,int *,unsigned long,unsigned long,struct zap_details*) ;

__attribute__((used)) static inline unsigned long FUNC_11(struct mmu_gather *VAR_1,
    struct vm_area_struct *VAR_2, p4d_t *VAR_3,
    unsigned long VAR_4, unsigned long VAR_5,
    struct zap_details *VAR_6)
{
 pud_t *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_5(VAR_3, VAR_4);
 do {
  VAR_8 = FUNC_2(VAR_4, VAR_5);
  if (FUNC_6(*VAR_7) || FUNC_3(*VAR_7)) {
   if (VAR_8 - VAR_4 != VAR_0) {
    FUNC_0(!FUNC_7(&VAR_1->mm->mmap_sem), VAR_2);
    FUNC_8(VAR_2, VAR_7, VAR_4);
   } else if (FUNC_9(VAR_1, VAR_2, VAR_7, VAR_4))
    goto next;

  }
  if (FUNC_4(VAR_7))
   continue;
  VAR_8 = FUNC_10(VAR_1, VAR_2, VAR_7, VAR_4, VAR_8, VAR_6);
next:
  FUNC_1();
 } while (VAR_7++, VAR_4 = VAR_8, VAR_4 != VAR_5);

 return VAR_4;
}

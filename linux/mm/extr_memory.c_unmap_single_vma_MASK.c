
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zap_details {int dummy; } ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; TYPE_1__* vm_file; } ;
struct mmu_gather {int dummy; } ;
struct TYPE_2__ {int f_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmu_gather*,struct vm_area_struct*,unsigned long,unsigned long,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*) ;
 unsigned long FUNC_4 (unsigned long,unsigned long) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct mmu_gather*,struct vm_area_struct*,unsigned long,unsigned long,struct zap_details*) ;
 int FUNC_8 (struct vm_area_struct*,int ,int ) ;
 int FUNC_9 (struct vm_area_struct*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct mmu_gather *VAR_1,
  struct vm_area_struct *VAR_2, unsigned long VAR_3,
  unsigned long VAR_4,
  struct zap_details *VAR_5)
{
 unsigned long VAR_6 = FUNC_4(VAR_2->vm_start, VAR_3);
 unsigned long VAR_7;

 if (VAR_6 >= VAR_2->vm_end)
  return;
 VAR_7 = FUNC_5(VAR_2->vm_end, VAR_4);
 if (VAR_7 <= VAR_2->vm_start)
  return;

 if (VAR_2->vm_file)
  FUNC_9(VAR_2, VAR_6, VAR_7);

 if (FUNC_6(VAR_2->vm_flags & VAR_0))
  FUNC_8(VAR_2, 0, 0);

 if (VAR_6 != VAR_7) {
  if (FUNC_6(FUNC_3(VAR_2))) {
   if (VAR_2->vm_file) {
    FUNC_1(VAR_2->vm_file->f_mapping);
    FUNC_0(VAR_1, VAR_2, VAR_6, VAR_7, ((void*)0));
    FUNC_2(VAR_2->vm_file->f_mapping);
   }
  } else
   FUNC_7(VAR_1, VAR_2, VAR_6, VAR_7, VAR_5);
 }
}

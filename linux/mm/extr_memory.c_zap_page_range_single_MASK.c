
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zap_details {int dummy; } ;
struct vm_area_struct {int vm_mm; } ;
struct mmu_notifier_range {int end; } ;
struct mmu_gather {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mmu_notifier_range*) ;
 int FUNC_2 (struct mmu_notifier_range*) ;
 int FUNC_3 (struct mmu_notifier_range*,int ,int ,struct vm_area_struct*,int ,unsigned long,unsigned long) ;
 int FUNC_4 (struct mmu_gather*,unsigned long,int ) ;
 int FUNC_5 (struct mmu_gather*,int ,unsigned long,int ) ;
 int FUNC_6 (struct mmu_gather*,struct vm_area_struct*,unsigned long,int ,struct zap_details*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct vm_area_struct *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, struct zap_details *VAR_4)
{
 struct mmu_notifier_range VAR_5;
 struct mmu_gather VAR_6;

 FUNC_0();
 FUNC_3(&VAR_5, VAR_0, 0, VAR_1, VAR_1->vm_mm,
    VAR_2, VAR_2 + VAR_3);
 FUNC_5(&VAR_6, VAR_1->vm_mm, VAR_2, VAR_5.end);
 FUNC_7(VAR_1->vm_mm);
 FUNC_2(&VAR_5);
 FUNC_6(&VAR_6, VAR_1, VAR_2, VAR_5.end, VAR_4);
 FUNC_1(&VAR_5);
 FUNC_4(&VAR_6, VAR_2, VAR_5.end);
}

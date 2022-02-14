
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_notifier {int dummy; } ;
struct mm_struct {int mmap_sem; } ;


 int FUNC_0 (struct mmu_notifier*,struct mm_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mmu_notifier *VAR_0, struct mm_struct *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->mmap_sem);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->mmap_sem);
 return VAR_2;
}

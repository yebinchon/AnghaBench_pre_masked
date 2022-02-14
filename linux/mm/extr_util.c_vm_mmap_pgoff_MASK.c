
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int mmap_sem; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 unsigned long FUNC_1 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long*,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (struct file*,unsigned long,unsigned long) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mm_struct*,int *) ;

unsigned long FUNC_7(struct file *VAR_3, unsigned long VAR_4,
 unsigned long VAR_5, unsigned long VAR_6,
 unsigned long VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9;
 struct mm_struct *VAR_10 = VAR_1->mm;
 unsigned long VAR_11;
 FUNC_0(VAR_2);

 VAR_9 = FUNC_4(VAR_3, VAR_6, VAR_7);
 if (!VAR_9) {
  if (FUNC_2(&VAR_10->mmap_sem))
   return -VAR_0;
  VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
        &VAR_11, &VAR_2);
  FUNC_5(&VAR_10->mmap_sem);
  FUNC_6(VAR_10, &VAR_2);
  if (VAR_11)
   FUNC_3(VAR_9, VAR_11);
 }
 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; scalar_t__ vm_pgoff; int vm_mm; struct file* vm_file; } ;
struct file {int f_mapping; } ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long,int ) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct file*,int,unsigned long,int ) ;
 int FUNC_10 (int ,unsigned long,unsigned long,int *,struct vm_area_struct*) ;

__attribute__((used)) static long FUNC_11(struct vm_area_struct *VAR_5,
        struct vm_area_struct **VAR_6,
        unsigned long VAR_7, unsigned long VAR_8)
{
 struct file *VAR_9 = VAR_5->vm_file;
 loff_t VAR_10;

 *VAR_6 = VAR_5;
 if (!VAR_9)
  return -VAR_0;


 if (FUNC_0(FUNC_2(VAR_9))) {

  return 0;
 }







 *VAR_6 = ((void*)0);
 FUNC_5(VAR_9);
 FUNC_8(&VAR_3->mm->mmap_sem);
 VAR_10 = (loff_t)(VAR_7 - VAR_5->vm_start)
   + ((loff_t)VAR_5->vm_pgoff << VAR_1);
 FUNC_9(VAR_9, VAR_10, VAR_8 - VAR_7, VAR_2);
 FUNC_4(VAR_9);
 FUNC_1(&VAR_3->mm->mmap_sem);
 return 0;
}

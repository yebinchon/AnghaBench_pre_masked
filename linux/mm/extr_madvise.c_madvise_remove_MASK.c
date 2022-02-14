
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_start; scalar_t__ vm_pgoff; struct file* vm_file; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_5__ {int mmap_sem; } ;
struct TYPE_4__ {int host; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_5 (struct file*,int,int,unsigned long) ;

__attribute__((used)) static long FUNC_6(struct vm_area_struct *VAR_9,
    struct vm_area_struct **VAR_10,
    unsigned long VAR_11, unsigned long VAR_12)
{
 loff_t VAR_13;
 int VAR_14;
 struct file *VAR_15;

 *VAR_10 = ((void*)0);

 if (VAR_9->vm_flags & VAR_5)
  return -VAR_1;

 VAR_15 = VAR_9->vm_file;

 if (!VAR_15 || !VAR_15->f_mapping || !VAR_15->f_mapping->host) {
   return -VAR_1;
 }

 if ((VAR_9->vm_flags & (VAR_6|VAR_7)) != (VAR_6|VAR_7))
  return -VAR_0;

 VAR_13 = (loff_t)(VAR_11 - VAR_9->vm_start)
   + ((loff_t)VAR_9->vm_pgoff << VAR_4);







 FUNC_2(VAR_15);
 if (FUNC_4(VAR_9, VAR_11, VAR_12)) {

  FUNC_3(&VAR_8->mm->mmap_sem);
 }
 VAR_14 = FUNC_5(VAR_15,
    VAR_3 | VAR_2,
    VAR_13, VAR_12 - VAR_11);
 FUNC_1(VAR_15);
 FUNC_0(&VAR_8->mm->mmap_sem);
 return VAR_14;
}

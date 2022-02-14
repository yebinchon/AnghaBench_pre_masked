
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_start; scalar_t__ vm_end; struct file* vm_file; } ;
struct mm_struct {int mmap_sem; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (struct file*,char*,int ) ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *) ;

void FUNC_9(char *VAR_3, unsigned long VAR_4)
{
 struct mm_struct *VAR_5 = VAR_2->mm;
 struct vm_area_struct *VAR_6;




 if (!FUNC_2(&VAR_5->mmap_sem))
  return;

 VAR_6 = FUNC_4(VAR_5, VAR_4);
 if (VAR_6 && VAR_6->vm_file) {
  struct file *VAR_7 = VAR_6->vm_file;
  char *VAR_8 = (char *)FUNC_1(VAR_0);
  if (VAR_8) {
   char *VAR_9;

   VAR_9 = FUNC_3(VAR_7, VAR_8, VAR_1);
   if (FUNC_0(VAR_9))
    VAR_9 = "?";
   FUNC_7("%s%s[%lx+%lx]", VAR_3, FUNC_6(VAR_9),
     VAR_6->vm_start,
     VAR_6->vm_end - VAR_6->vm_start);
   FUNC_5((unsigned long)VAR_8);
  }
 }
 FUNC_8(&VAR_5->mmap_sem);
}

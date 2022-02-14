
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; int vm_flags; } ;
struct task_struct {int dummy; } ;
struct mm_struct {int mmap_sem; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_area_struct*,int *,unsigned long,void*,void*,int) ;
 int FUNC_1 (struct vm_area_struct*,int *,unsigned long,void*,void*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct task_struct *VAR_3, struct mm_struct *VAR_4,
  unsigned long VAR_5, void *VAR_6, int VAR_7, unsigned int VAR_8)
{
 struct vm_area_struct *VAR_9;
 int VAR_10 = VAR_8 & VAR_0;

 if (FUNC_2(&VAR_4->mmap_sem))
  return 0;


 VAR_9 = FUNC_3(VAR_4, VAR_5);
 if (VAR_9) {

  if (VAR_5 + VAR_7 >= VAR_9->vm_end)
   VAR_7 = VAR_9->vm_end - VAR_5;


  if (VAR_10 && VAR_9->vm_flags & VAR_2)
   FUNC_1(VAR_9, ((void*)0), VAR_5,
      (void *) VAR_5, VAR_6, VAR_7);
  else if (!VAR_10 && VAR_9->vm_flags & VAR_1)
   FUNC_0(VAR_9, ((void*)0), VAR_5,
         VAR_6, (void *) VAR_5, VAR_7);
  else
   VAR_7 = 0;
 } else {
  VAR_7 = 0;
 }

 FUNC_4(&VAR_4->mmap_sem);

 return VAR_7;
}

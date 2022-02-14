
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ anon_vma; struct vm_area_struct* vm_next; } ;
struct mm_struct {int mmap_sem; struct vm_area_struct* mmap; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vm_area_struct*,unsigned int,int,unsigned long*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mm_struct *VAR_0, unsigned int VAR_1,
      bool VAR_2, unsigned long *VAR_3)
{
 struct vm_area_struct *VAR_4;
 int VAR_5 = 0;

 FUNC_1(&VAR_0->mmap_sem);
 for (VAR_4 = VAR_0->mmap; VAR_4; VAR_4 = VAR_4->vm_next) {
  if (VAR_4->anon_vma) {
   VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_2,
     VAR_3);
   if (VAR_5)
    break;
  }
  FUNC_0();
 }
 FUNC_3(&VAR_0->mmap_sem);
 return VAR_5;
}

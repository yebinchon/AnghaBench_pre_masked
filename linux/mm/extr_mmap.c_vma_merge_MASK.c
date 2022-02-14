
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_userfaultfd_ctx {int dummy; } ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int anon_vma; struct vm_area_struct* vm_next; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;
struct mempolicy {int dummy; } ;
struct file {int dummy; } ;
struct anon_vma {int dummy; } ;
typedef unsigned long pgoff_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int *,struct vm_area_struct*) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,struct anon_vma*,struct file*,unsigned long,struct vm_userfaultfd_ctx) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,unsigned long,struct anon_vma*,struct file*,unsigned long,struct vm_userfaultfd_ctx) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_6 (struct mempolicy*,struct mempolicy*) ;
 struct mempolicy* FUNC_7 (struct vm_area_struct*) ;

struct vm_area_struct *FUNC_8(struct mm_struct *VAR_2,
   struct vm_area_struct *VAR_3, unsigned long VAR_4,
   unsigned long VAR_5, unsigned long VAR_6,
   struct anon_vma *VAR_7, struct file *VAR_8,
   pgoff_t VAR_9, struct mempolicy *VAR_10,
   struct vm_userfaultfd_ctx VAR_11)
{
 pgoff_t VAR_12 = (VAR_5 - VAR_4) >> VAR_0;
 struct vm_area_struct *VAR_13, *VAR_14;
 int VAR_15;





 if (VAR_6 & VAR_1)
  return ((void*)0);

 if (VAR_3)
  VAR_14 = VAR_3->vm_next;
 else
  VAR_14 = VAR_2->mmap;
 VAR_13 = VAR_14;
 if (VAR_13 && VAR_13->vm_end == VAR_5)
  VAR_14 = VAR_14->vm_next;


 FUNC_0(VAR_3 && VAR_4 <= VAR_3->vm_start);
 FUNC_0(VAR_13 && VAR_5 > VAR_13->vm_end);
 FUNC_0(VAR_4 >= VAR_5);




 if (VAR_3 && VAR_3->vm_end == VAR_4 &&
   FUNC_6(FUNC_7(VAR_3), VAR_10) &&
   FUNC_2(VAR_3, VAR_6,
         VAR_7, VAR_8, VAR_9,
         VAR_11)) {



  if (VAR_14 && VAR_5 == VAR_14->vm_start &&
    FUNC_6(VAR_10, FUNC_7(VAR_14)) &&
    FUNC_3(VAR_14, VAR_6,
           VAR_7, VAR_8,
           VAR_9+VAR_12,
           VAR_11) &&
    FUNC_4(VAR_3->anon_vma,
            VAR_14->anon_vma, ((void*)0))) {

   VAR_15 = FUNC_1(VAR_3, VAR_3->vm_start,
      VAR_14->vm_end, VAR_3->vm_pgoff, ((void*)0),
      VAR_3);
  } else
   VAR_15 = FUNC_1(VAR_3, VAR_3->vm_start,
      VAR_5, VAR_3->vm_pgoff, ((void*)0), VAR_3);
  if (VAR_15)
   return ((void*)0);
  FUNC_5(VAR_3, VAR_6);
  return VAR_3;
 }




 if (VAR_14 && VAR_5 == VAR_14->vm_start &&
   FUNC_6(VAR_10, FUNC_7(VAR_14)) &&
   FUNC_3(VAR_14, VAR_6,
          VAR_7, VAR_8, VAR_9+VAR_12,
          VAR_11)) {
  if (VAR_3 && VAR_4 < VAR_3->vm_end)
   VAR_15 = FUNC_1(VAR_3, VAR_3->vm_start,
      VAR_4, VAR_3->vm_pgoff, ((void*)0), VAR_14);
  else {
   VAR_15 = FUNC_1(VAR_13, VAR_4, VAR_14->vm_end,
      VAR_14->vm_pgoff - VAR_12, ((void*)0), VAR_14);





   VAR_13 = VAR_14;
  }
  if (VAR_15)
   return ((void*)0);
  FUNC_5(VAR_13, VAR_6);
  return VAR_13;
 }

 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_mm; struct vm_area_struct* vm_next; int vm_userfaultfd_ctx; int vm_file; int anon_vma; int vm_flags; scalar_t__ vm_pgoff; struct vm_area_struct* vm_prev; } ;
struct mm_struct {int dummy; } ;
struct mempolicy {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct vm_area_struct* FUNC_0 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ,struct mempolicy*) ;
 int FUNC_4 (int ,struct vm_area_struct*,unsigned long,int) ;
 struct vm_area_struct* FUNC_5 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,int ,int ,int ,scalar_t__,struct mempolicy*,int ) ;
 int FUNC_6 (struct vm_area_struct*) ;
 int FUNC_7 (struct vm_area_struct*,struct mempolicy*) ;

__attribute__((used)) static int FUNC_8(struct mm_struct *VAR_2, unsigned long VAR_3,
         unsigned long VAR_4, struct mempolicy *VAR_5)
{
 struct vm_area_struct *VAR_6;
 struct vm_area_struct *VAR_7;
 struct vm_area_struct *VAR_8;
 int VAR_9 = 0;
 pgoff_t VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;

 VAR_8 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_8 || VAR_8->vm_start > VAR_3)
  return -VAR_0;

 VAR_7 = VAR_8->vm_prev;
 if (VAR_3 > VAR_8->vm_start)
  VAR_7 = VAR_8;

 for (; VAR_8 && VAR_8->vm_start < VAR_4; VAR_7 = VAR_8, VAR_8 = VAR_6) {
  VAR_6 = VAR_8->vm_next;
  VAR_11 = FUNC_1(VAR_3, VAR_8->vm_start);
  VAR_12 = FUNC_2(VAR_4, VAR_8->vm_end);

  if (FUNC_3(FUNC_6(VAR_8), VAR_5))
   continue;

  VAR_10 = VAR_8->vm_pgoff +
   ((VAR_11 - VAR_8->vm_start) >> VAR_1);
  VAR_7 = FUNC_5(VAR_2, VAR_7, VAR_11, VAR_12, VAR_8->vm_flags,
     VAR_8->anon_vma, VAR_8->vm_file, VAR_10,
     VAR_5, VAR_8->vm_userfaultfd_ctx);
  if (VAR_7) {
   VAR_8 = VAR_7;
   VAR_6 = VAR_8->vm_next;
   if (FUNC_3(FUNC_6(VAR_8), VAR_5))
    continue;

   goto replace;
  }
  if (VAR_8->vm_start != VAR_11) {
   VAR_9 = FUNC_4(VAR_8->vm_mm, VAR_8, VAR_11, 1);
   if (VAR_9)
    goto out;
  }
  if (VAR_8->vm_end != VAR_12) {
   VAR_9 = FUNC_4(VAR_8->vm_mm, VAR_8, VAR_12, 0);
   if (VAR_9)
    goto out;
  }
 replace:
  VAR_9 = FUNC_7(VAR_8, VAR_5);
  if (VAR_9)
   goto out;
 }

 out:
 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; TYPE_1__* vm_ops; scalar_t__ vm_file; int vm_userfaultfd_ctx; int anon_vma; int vm_flags; struct mm_struct* vm_mm; } ;
struct rb_node {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef unsigned long pgoff_t ;
struct TYPE_2__ {int (* open ) (struct vm_area_struct*) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,struct vm_area_struct*) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,struct vm_area_struct*) ;
 scalar_t__ FUNC_2 (struct mm_struct*,unsigned long,unsigned long,struct vm_area_struct**,struct rb_node***,struct rb_node**) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vm_area_struct*) ;
 scalar_t__ FUNC_6 (int) ;
 struct vm_area_struct* FUNC_7 (struct vm_area_struct*) ;
 int FUNC_8 (struct vm_area_struct*) ;
 scalar_t__ FUNC_9 (struct vm_area_struct*,struct vm_area_struct*) ;
 scalar_t__ FUNC_10 (struct vm_area_struct*) ;
 int FUNC_11 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 struct vm_area_struct* FUNC_12 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,int ,int ,scalar_t__,unsigned long,int ,int ) ;
 int FUNC_13 (struct vm_area_struct*) ;

struct vm_area_struct *FUNC_14(struct vm_area_struct **VAR_1,
 unsigned long VAR_2, unsigned long VAR_3, pgoff_t VAR_4,
 bool *VAR_5)
{
 struct vm_area_struct *VAR_6 = *VAR_1;
 unsigned long VAR_7 = VAR_6->vm_start;
 struct mm_struct *VAR_8 = VAR_6->vm_mm;
 struct vm_area_struct *VAR_9, *VAR_10;
 struct rb_node **VAR_11, *VAR_12;
 bool VAR_13 = 1;





 if (FUNC_6(FUNC_10(VAR_6) && !VAR_6->anon_vma)) {
  VAR_4 = VAR_2 >> VAR_0;
  VAR_13 = 0;
 }

 if (FUNC_2(VAR_8, VAR_2, VAR_2 + VAR_3, &VAR_10, &VAR_11, &VAR_12))
  return ((void*)0);
 VAR_9 = FUNC_12(VAR_8, VAR_10, VAR_2, VAR_2 + VAR_3, VAR_6->vm_flags,
       VAR_6->anon_vma, VAR_6->vm_file, VAR_4, FUNC_13(VAR_6),
       VAR_6->vm_userfaultfd_ctx);
 if (VAR_9) {



  if (FUNC_6(VAR_7 >= VAR_9->vm_start &&
        VAR_7 < VAR_9->vm_end)) {
   FUNC_0(VAR_13, VAR_9);
   *VAR_1 = VAR_6 = VAR_9;
  }
  *VAR_5 = (VAR_9->vm_pgoff <= VAR_6->vm_pgoff);
 } else {
  VAR_9 = FUNC_7(VAR_6);
  if (!VAR_9)
   goto out;
  VAR_9->vm_start = VAR_2;
  VAR_9->vm_end = VAR_2 + VAR_3;
  VAR_9->vm_pgoff = VAR_4;
  if (FUNC_9(VAR_6, VAR_9))
   goto out_free_vma;
  if (FUNC_1(VAR_9, VAR_6))
   goto out_free_mempol;
  if (VAR_9->vm_file)
   FUNC_3(VAR_9->vm_file);
  if (VAR_9->vm_ops && VAR_9->vm_ops->open)
   VAR_9->vm_ops->open(VAR_9);
  FUNC_11(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
  *VAR_5 = 0;
 }
 return VAR_9;

out_free_mempol:
 FUNC_4(FUNC_13(VAR_9));
out_free_vma:
 FUNC_8(VAR_9);
out:
 return ((void*)0);
}

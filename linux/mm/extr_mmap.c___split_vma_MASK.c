
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; scalar_t__ vm_file; TYPE_1__* vm_ops; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {int (* split ) (struct vm_area_struct*,unsigned long) ;int (* close ) (struct vm_area_struct*) ;int (* open ) (struct vm_area_struct*) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vm_area_struct*,unsigned long) ;
 int FUNC_5 (struct vm_area_struct*) ;
 int FUNC_6 (struct vm_area_struct*) ;
 int FUNC_7 (struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_8 (struct vm_area_struct*) ;
 int FUNC_9 (struct vm_area_struct*) ;
 int FUNC_10 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,struct vm_area_struct*) ;
 int FUNC_11 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_12 (struct vm_area_struct*) ;

int FUNC_13(struct mm_struct *VAR_2, struct vm_area_struct *VAR_3,
  unsigned long VAR_4, int VAR_5)
{
 struct vm_area_struct *VAR_6;
 int VAR_7;

 if (VAR_3->vm_ops && VAR_3->vm_ops->split) {
  VAR_7 = VAR_3->vm_ops->split(VAR_3, VAR_4);
  if (VAR_7)
   return VAR_7;
 }

 VAR_6 = FUNC_8(VAR_3);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_5)
  VAR_6->vm_end = VAR_4;
 else {
  VAR_6->vm_start = VAR_4;
  VAR_6->vm_pgoff += ((VAR_4 - VAR_3->vm_start) >> VAR_1);
 }

 VAR_7 = FUNC_11(VAR_3, VAR_6);
 if (VAR_7)
  goto out_free_vma;

 VAR_7 = FUNC_0(VAR_6, VAR_3);
 if (VAR_7)
  goto out_free_mpol;

 if (VAR_6->vm_file)
  FUNC_2(VAR_6->vm_file);

 if (VAR_6->vm_ops && VAR_6->vm_ops->open)
  VAR_6->vm_ops->open(VAR_6);

 if (VAR_5)
  VAR_7 = FUNC_10(VAR_3, VAR_4, VAR_3->vm_end, VAR_3->vm_pgoff +
   ((VAR_4 - VAR_6->vm_start) >> VAR_1), VAR_6);
 else
  VAR_7 = FUNC_10(VAR_3, VAR_3->vm_start, VAR_4, VAR_3->vm_pgoff, VAR_6);


 if (!VAR_7)
  return 0;


 if (VAR_6->vm_ops && VAR_6->vm_ops->close)
  VAR_6->vm_ops->close(VAR_6);
 if (VAR_6->vm_file)
  FUNC_1(VAR_6->vm_file);
 FUNC_7(VAR_6);
 out_free_mpol:
 FUNC_3(FUNC_12(VAR_6));
 out_free_vma:
 FUNC_9(VAR_6);
 return VAR_7;
}

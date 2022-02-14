
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct mm_struct {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,unsigned long) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long,int *) ;

struct vm_area_struct *
FUNC_4(struct mm_struct *VAR_3, unsigned long VAR_4)
{
 struct vm_area_struct *VAR_5;
 unsigned long VAR_6;

 VAR_4 &= VAR_0;
 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);
 if (VAR_5->vm_start <= VAR_4)
  return VAR_5;
 if (!(VAR_5->vm_flags & VAR_1))
  return ((void*)0);

 if (!FUNC_2(VAR_3))
  return ((void*)0);
 VAR_6 = VAR_5->vm_start;
 if (FUNC_0(VAR_5, VAR_4))
  return ((void*)0);
 if (VAR_5->vm_flags & VAR_2)
  FUNC_3(VAR_5, VAR_4, VAR_6, ((void*)0));
 return VAR_5;
}

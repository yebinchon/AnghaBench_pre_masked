
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; scalar_t__ vm_end; struct vm_area_struct* vm_next; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,int,int *) ;

void FUNC_1(struct vm_area_struct *VAR_3,
        unsigned long VAR_4,
        unsigned long VAR_5,
        long VAR_6)
{





 if (VAR_4 & ~VAR_0 &&
     (VAR_4 & VAR_0) >= VAR_3->vm_start &&
     (VAR_4 & VAR_0) + VAR_1 <= VAR_3->vm_end)
  FUNC_0(VAR_3, VAR_4, 0, ((void*)0));






 if (VAR_5 & ~VAR_0 &&
     (VAR_5 & VAR_0) >= VAR_3->vm_start &&
     (VAR_5 & VAR_0) + VAR_1 <= VAR_3->vm_end)
  FUNC_0(VAR_3, VAR_5, 0, ((void*)0));






 if (VAR_6 > 0) {
  struct vm_area_struct *VAR_7 = VAR_3->vm_next;
  unsigned long VAR_8 = VAR_7->vm_start;
  VAR_8 += VAR_6 << VAR_2;
  if (VAR_8 & ~VAR_0 &&
      (VAR_8 & VAR_0) >= VAR_7->vm_start &&
      (VAR_8 & VAR_0) + VAR_1 <= VAR_7->vm_end)
   FUNC_0(VAR_7, VAR_8, 0, ((void*)0));
 }
}

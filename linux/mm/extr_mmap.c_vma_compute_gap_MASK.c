
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_prev; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (struct vm_area_struct*) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct vm_area_struct *VAR_0)
{
 unsigned long VAR_1, VAR_2;







 VAR_1 = FUNC_1(VAR_0);
 if (VAR_0->vm_prev) {
  VAR_2 = FUNC_0(VAR_0->vm_prev);
  if (VAR_1 > VAR_2)
   VAR_1 -= VAR_2;
  else
   VAR_1 = 0;
 }
 return VAR_1;
}

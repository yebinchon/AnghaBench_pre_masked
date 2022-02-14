
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; } ;
struct mm_struct {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vm_area_struct* FUNC_0 (struct mm_struct*,unsigned long) ;
 int FUNC_1 (struct vm_area_struct*,int ) ;
 int FUNC_2 (struct mm_struct*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mm_struct *VAR_6, unsigned long VAR_7,
  struct vm_area_struct **VAR_8)
{
 struct vm_area_struct *VAR_9;
 unsigned long VAR_10, VAR_11;

 if (FUNC_3(FUNC_2(VAR_6)))
  return VAR_3;

 *VAR_8 = VAR_9 = FUNC_0(VAR_6, VAR_7);
 if (!VAR_9)
  return VAR_5;

 VAR_10 = (VAR_9->vm_start + ~VAR_0) & VAR_0;
 VAR_11 = VAR_9->vm_end & VAR_0;
 if (VAR_7 < VAR_10 || VAR_7 + VAR_1 > VAR_11)
  return VAR_2;
 if (!FUNC_1(VAR_9, VAR_9->vm_flags))
  return VAR_4;
 return 0;
}

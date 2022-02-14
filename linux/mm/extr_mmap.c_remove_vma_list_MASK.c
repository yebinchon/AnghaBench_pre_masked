
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 struct vm_area_struct* FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (struct mm_struct*) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct mm_struct*,int,long) ;
 int FUNC_4 (unsigned long) ;
 long FUNC_5 (struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_6(struct mm_struct *VAR_1, struct vm_area_struct *VAR_2)
{
 unsigned long VAR_3 = 0;


 FUNC_1(VAR_1);
 do {
  long VAR_4 = FUNC_5(VAR_2);

  if (VAR_2->vm_flags & VAR_0)
   VAR_3 += VAR_4;
  FUNC_3(VAR_1, VAR_2->vm_flags, -VAR_4);
  VAR_2 = FUNC_0(VAR_2);
 } while (VAR_2);
 FUNC_4(VAR_3);
 FUNC_2(VAR_1);
}

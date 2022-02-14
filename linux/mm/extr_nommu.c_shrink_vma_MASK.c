
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_region {int vm_usage; unsigned long vm_start; unsigned long vm_top; unsigned long vm_end; } ;
struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_region* vm_region; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vm_region*) ;
 int FUNC_2 (struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_3 (struct vm_region*) ;
 int FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct mm_struct *VAR_1,
        struct vm_area_struct *VAR_2,
        unsigned long VAR_3, unsigned long VAR_4)
{
 struct vm_region *VAR_5;



 FUNC_4(VAR_2);
 if (VAR_3 > VAR_2->vm_start)
  VAR_2->vm_end = VAR_3;
 else
  VAR_2->vm_start = VAR_4;
 FUNC_2(VAR_1, VAR_2);


 VAR_5 = VAR_2->vm_region;
 FUNC_0(VAR_5->vm_usage != 1);

 FUNC_5(&VAR_0);
 FUNC_3(VAR_5);
 if (VAR_3 > VAR_5->vm_start) {
  VAR_4 = VAR_5->vm_top;
  VAR_5->vm_top = VAR_5->vm_end = VAR_3;
 } else {
  VAR_5->vm_start = VAR_4;
 }
 FUNC_1(VAR_5);
 FUNC_7(&VAR_0);

 FUNC_6(VAR_3, VAR_4);
 return 0;
}

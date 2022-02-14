
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,struct page*) ;
 unsigned long FUNC_1 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_2(struct vm_area_struct *VAR_2, struct page **VAR_3,
    unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6 = FUNC_1(VAR_2);
 unsigned long VAR_7 = VAR_2->vm_start;
 int VAR_8, VAR_9;


 if (VAR_5 >= VAR_4)
  return -VAR_0;


 if (VAR_6 > VAR_4 - VAR_5)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = FUNC_0(VAR_2, VAR_7, VAR_3[VAR_5 + VAR_9]);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_7 += VAR_1;
 }

 return 0;
}

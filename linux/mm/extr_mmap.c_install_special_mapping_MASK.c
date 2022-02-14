
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (struct vm_area_struct*) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long,unsigned long,unsigned long,void*,int *) ;
 int VAR_0 ;

int FUNC_2(struct mm_struct *VAR_1,
       unsigned long VAR_2, unsigned long VAR_3,
       unsigned long VAR_4, struct page **VAR_5)
{
 struct vm_area_struct *VAR_6 = FUNC_1(
  VAR_1, VAR_2, VAR_3, VAR_4, (void *)VAR_5,
  &VAR_0);

 return FUNC_0(VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 struct vm_area_struct* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct vm_area_struct*,struct mm_struct*) ;

struct vm_area_struct *FUNC_2(struct mm_struct *VAR_2)
{
 struct vm_area_struct *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_2);
 return VAR_3;
}

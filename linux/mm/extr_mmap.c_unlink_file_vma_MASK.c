
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct file* vm_file; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (struct vm_area_struct*,struct file*,struct address_space*) ;
 int FUNC_1 (struct address_space*) ;
 int FUNC_2 (struct address_space*) ;

void FUNC_3(struct vm_area_struct *VAR_0)
{
 struct file *VAR_1 = VAR_0->vm_file;

 if (VAR_1) {
  struct address_space *VAR_2 = VAR_1->f_mapping;
  FUNC_1(VAR_2);
  FUNC_0(VAR_0, VAR_1, VAR_2);
  FUNC_2(VAR_2);
 }
}

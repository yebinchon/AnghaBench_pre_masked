
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct file* vm_file; } ;
struct file {int f_mapping; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static gfp_t FUNC_1(struct vm_area_struct *VAR_3)
{
 struct file *VAR_4 = VAR_3->vm_file;

 if (VAR_4)
  return FUNC_0(VAR_4->f_mapping) | VAR_1 | VAR_2;





 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int exe_file; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int ,struct file*) ;
 struct file* FUNC_3 (int ) ;

void FUNC_4(struct mm_struct *VAR_0, struct file *VAR_1)
{
 struct file *VAR_2;






 VAR_2 = FUNC_3(VAR_0->exe_file);

 if (VAR_1)
  FUNC_1(VAR_1);
 FUNC_2(VAR_0->exe_file, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_2);
}

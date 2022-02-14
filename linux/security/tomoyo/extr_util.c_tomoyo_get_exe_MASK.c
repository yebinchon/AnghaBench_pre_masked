
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct file {int f_path; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct file*) ;
 struct file* FUNC_1 (struct mm_struct*) ;
 char* FUNC_2 (int *) ;

const char *FUNC_3(void)
{
 struct file *VAR_1;
 const char *VAR_2;
 struct mm_struct *VAR_3 = VAR_0->mm;

 if (!VAR_3)
  return ((void*)0);
 VAR_1 = FUNC_1(VAR_3);
 if (!VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_2(&VAR_1->f_path);
 FUNC_0(VAR_1);
 return VAR_2;
}

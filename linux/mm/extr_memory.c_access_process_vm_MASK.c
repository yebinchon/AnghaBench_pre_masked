
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (struct task_struct*,struct mm_struct*,unsigned long,void*,int,unsigned int) ;
 struct mm_struct* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct mm_struct*) ;

int FUNC_3(struct task_struct *VAR_0, unsigned long VAR_1,
  void *VAR_2, int VAR_3, unsigned int VAR_4)
{
 struct mm_struct *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_0);
 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_5);

 return VAR_6;
}

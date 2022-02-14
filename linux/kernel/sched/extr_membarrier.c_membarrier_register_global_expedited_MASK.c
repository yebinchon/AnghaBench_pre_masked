
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct mm_struct* mm; } ;
struct mm_struct {int membarrier_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 struct task_struct* VAR_2 ;
 int FUNC_2 (struct mm_struct*) ;

__attribute__((used)) static int FUNC_3(void)
{
 struct task_struct *VAR_3 = VAR_2;
 struct mm_struct *VAR_4 = VAR_3->mm;
 int VAR_5;

 if (FUNC_1(&VAR_4->membarrier_state) &
     VAR_1)
  return 0;
 FUNC_0(VAR_0, &VAR_4->membarrier_state);
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  return VAR_5;
 FUNC_0(VAR_1,
    &VAR_4->membarrier_state);

 return 0;
}

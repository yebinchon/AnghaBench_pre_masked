
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ state; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct task_struct*) ;
 struct task_struct* FUNC_1 (int ) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_2(unsigned long VAR_3)
{
 struct task_struct *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 & VAR_0)
  return 0;
 return VAR_4 && (VAR_4->state == VAR_1) &&
  !FUNC_0(VAR_4);
}

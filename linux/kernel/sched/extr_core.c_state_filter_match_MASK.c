
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {unsigned long state; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline bool
FUNC_0(unsigned long VAR_2, struct task_struct *VAR_3)
{

 if (!VAR_2)
  return 1;


 if (!(VAR_3->state & VAR_2))
  return 0;





 if (VAR_2 == VAR_1 && VAR_3->state == VAR_0)
  return 0;

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; int blocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;

__attribute__((used)) static inline bool FUNC_4(int VAR_2, struct task_struct *VAR_3)
{
 if (FUNC_0(&VAR_3->blocked, VAR_2))
  return 0;

 if (VAR_3->flags & VAR_0)
  return 0;

 if (VAR_2 == VAR_1)
  return 1;

 if (FUNC_3(VAR_3))
  return 0;

 return FUNC_2(VAR_3) || !FUNC_1(VAR_3);
}

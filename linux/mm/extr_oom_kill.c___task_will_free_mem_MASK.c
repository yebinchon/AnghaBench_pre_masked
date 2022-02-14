
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; struct signal_struct* signal; } ;
struct signal_struct {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;

__attribute__((used)) static inline bool FUNC_1(struct task_struct *VAR_3)
{
 struct signal_struct *VAR_4 = VAR_3->signal;






 if (VAR_4->flags & VAR_1)
  return 0;

 if (VAR_4->flags & VAR_2)
  return 1;

 if (FUNC_0(VAR_3) && (VAR_3->flags & VAR_0))
  return 1;

 return 0;
}

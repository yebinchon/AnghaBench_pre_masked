
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; unsigned long jobctl; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 scalar_t__ FUNC_2 (int) ;

bool FUNC_3(struct task_struct *VAR_5, unsigned long VAR_6)
{
 FUNC_0(VAR_6 & ~(VAR_0 | VAR_1 |
   VAR_2 | VAR_3));
 FUNC_0((VAR_6 & VAR_3) && !(VAR_6 & VAR_0));

 if (FUNC_2(FUNC_1(VAR_5) || (VAR_5->flags & VAR_4)))
  return 0;

 if (VAR_6 & VAR_2)
  VAR_5->jobctl &= ~VAR_2;

 VAR_5->jobctl |= VAR_6;
 return 1;
}

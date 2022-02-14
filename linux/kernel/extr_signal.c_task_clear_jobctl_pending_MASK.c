
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {unsigned long jobctl; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_4, unsigned long VAR_5)
{
 FUNC_0(VAR_5 & ~VAR_0);

 if (VAR_5 & VAR_3)
  VAR_5 |= VAR_1 | VAR_2;

 VAR_4->jobctl &= ~VAR_5;

 if (!(VAR_4->jobctl & VAR_0))
  FUNC_1(VAR_4);
}

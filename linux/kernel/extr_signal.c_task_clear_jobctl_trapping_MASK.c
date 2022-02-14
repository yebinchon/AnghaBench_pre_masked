
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int jobctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*,int ) ;

void FUNC_3(struct task_struct *VAR_2)
{
 if (FUNC_1(VAR_2->jobctl & VAR_0)) {
  VAR_2->jobctl &= ~VAR_0;
  FUNC_0();
  FUNC_2(&VAR_2->jobctl, VAR_1);
 }
}

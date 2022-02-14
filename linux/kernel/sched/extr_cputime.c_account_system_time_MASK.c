
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_struct {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*,int ,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct task_struct *VAR_4, int VAR_5, u64 VAR_6)
{
 int VAR_7;

 if ((VAR_4->flags & VAR_3) && (FUNC_4() - VAR_5 == 0)) {
  FUNC_0(VAR_4, VAR_6);
  return;
 }

 if (FUNC_2() - VAR_5)
  VAR_7 = VAR_0;
 else if (FUNC_3())
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;

 FUNC_1(VAR_4, VAR_6, VAR_7);
}

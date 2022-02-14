
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {struct sighand_struct* sighand; } ;
struct sighand_struct {int siglock; } ;


 scalar_t__ FUNC_0 (int) ;
 struct sighand_struct* FUNC_1 (struct sighand_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;

struct sighand_struct *FUNC_7(struct task_struct *VAR_0,
        unsigned long *VAR_1)
{
 struct sighand_struct *VAR_2;

 FUNC_2();
 for (;;) {
  VAR_2 = FUNC_1(VAR_0->sighand);
  if (FUNC_6(VAR_2 == ((void*)0)))
   break;
  FUNC_4(&VAR_2->siglock, *VAR_1);
  if (FUNC_0(VAR_2 == VAR_0->sighand))
   break;
  FUNC_5(&VAR_2->siglock, *VAR_1);
 }
 FUNC_3();

 return VAR_2;
}

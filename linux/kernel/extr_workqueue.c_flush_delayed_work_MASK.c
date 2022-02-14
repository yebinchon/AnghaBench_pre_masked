
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delayed_work {int work; int wq; int cpu; int timer; } ;


 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

bool FUNC_5(struct delayed_work *VAR_0)
{
 FUNC_3();
 if (FUNC_1(&VAR_0->timer))
  FUNC_0(VAR_0->cpu, VAR_0->wq, &VAR_0->work);
 FUNC_4();
 return FUNC_2(&VAR_0->work);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_work {int work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct rcu_work *VAR_1)
{
 if (FUNC_2(VAR_0, FUNC_3(&VAR_1->work))) {
  FUNC_1();
  FUNC_0(&VAR_1->work);
  return 1;
 } else {
  return FUNC_0(&VAR_1->work);
 }
}

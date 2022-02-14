
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

void FUNC_6(void)
{
 FUNC_0(FUNC_1(&VAR_1) ||
    FUNC_1(&VAR_2) ||
    FUNC_1(&VAR_3),
    "Illegal synchronize_rcu() in RCU read-side critical section");
 if (FUNC_2())
  return;
 if (FUNC_3())
  FUNC_4();
 else
  FUNC_5(VAR_0);
}

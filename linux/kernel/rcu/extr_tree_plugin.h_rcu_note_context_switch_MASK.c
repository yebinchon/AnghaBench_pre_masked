
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rcu_need_heavy_qs; int rcu_urgent_qs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

void FUNC_10(bool VAR_2)
{
 FUNC_8(FUNC_0("Start context switch"));
 FUNC_3();

 if (!FUNC_5(FUNC_6(&VAR_1.rcu_urgent_qs)))
  goto out;
 FUNC_7(VAR_1.rcu_urgent_qs, 0);
 if (FUNC_9(FUNC_1(VAR_1.rcu_need_heavy_qs)))
  FUNC_2();
 if (!VAR_2)
  FUNC_4(VAR_0);
out:
 FUNC_8(FUNC_0("End context switch"));
}

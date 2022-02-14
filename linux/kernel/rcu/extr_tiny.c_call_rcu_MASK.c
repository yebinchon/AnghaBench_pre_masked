
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_head {struct rcu_head* next; int func; } ;
typedef int rcu_callback_t ;
struct TYPE_2__ {struct rcu_head** curtail; } ;


 int VAR_0 ;
 int FUNC_0 (struct rcu_head*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6(struct rcu_head *VAR_2, rcu_callback_t VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(VAR_2);
 VAR_2->func = VAR_3;
 VAR_2->next = ((void*)0);

 FUNC_3(VAR_4);
 *VAR_1.curtail = VAR_2;
 VAR_1.curtail = &VAR_2->next;
 FUNC_2(VAR_4);

 if (FUNC_5(FUNC_1(VAR_0))) {

  FUNC_4(0);
 }
}

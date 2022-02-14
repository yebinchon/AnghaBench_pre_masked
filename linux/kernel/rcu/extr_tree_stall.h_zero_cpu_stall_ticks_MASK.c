
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_data {int last_fqs_resched; int softirq_snap; scalar_t__ ticks_this_gp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct rcu_data *VAR_2)
{
 VAR_2->ticks_this_gp = 0;
 VAR_2->softirq_snap = FUNC_1(VAR_0, FUNC_2());
 FUNC_0(VAR_2->last_fqs_resched, VAR_1);
}

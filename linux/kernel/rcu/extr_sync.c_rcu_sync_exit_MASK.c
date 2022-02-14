
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_sync {scalar_t__ gp_state; scalar_t__ gp_count; int rss_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct rcu_sync*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct rcu_sync *VAR_4)
{
 FUNC_1(FUNC_0(VAR_4->gp_state) == VAR_1);
 FUNC_1(FUNC_0(VAR_4->gp_count) == 0);

 FUNC_4(&VAR_4->rss_lock);
 if (!--VAR_4->gp_count) {
  if (VAR_4->gp_state == VAR_2) {
   FUNC_2(VAR_4->gp_state, VAR_0);
   FUNC_3(VAR_4);
  } else if (VAR_4->gp_state == VAR_0) {
   FUNC_2(VAR_4->gp_state, VAR_3);
  }
 }
 FUNC_5(&VAR_4->rss_lock);
}

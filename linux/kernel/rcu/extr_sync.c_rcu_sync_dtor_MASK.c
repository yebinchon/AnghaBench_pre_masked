
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_sync {int gp_count; int gp_state; int rss_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct rcu_sync *VAR_4)
{
 int VAR_5;

 FUNC_1(FUNC_0(VAR_4->gp_count));
 FUNC_1(FUNC_0(VAR_4->gp_state) == VAR_2);

 FUNC_4(&VAR_4->rss_lock);
 if (VAR_4->gp_state == VAR_3)
  FUNC_2(VAR_4->gp_state, VAR_0);
 VAR_5 = VAR_4->gp_state;
 FUNC_5(&VAR_4->rss_lock);

 if (VAR_5 != VAR_1) {
  FUNC_3();
  FUNC_1(VAR_4->gp_state != VAR_1);
 }
}

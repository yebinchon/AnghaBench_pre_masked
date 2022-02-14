
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_sync {int gp_state; int gp_wait; int cb_head; int rss_lock; int gp_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;

void FUNC_8(struct rcu_sync *VAR_3)
{
 int VAR_4;

 FUNC_4(&VAR_3->rss_lock);
 VAR_4 = VAR_3->gp_state;
 if (VAR_4 == VAR_1) {
  FUNC_2(VAR_3->gp_state, VAR_0);
  FUNC_1(VAR_3->gp_count);
 }
 VAR_3->gp_count++;
 FUNC_5(&VAR_3->rss_lock);

 if (VAR_4 == VAR_1) {




  FUNC_6();
  FUNC_3(&VAR_3->cb_head);

  return;
 }

 FUNC_7(VAR_3->gp_wait, FUNC_0(VAR_3->gp_state) >= VAR_2);
}

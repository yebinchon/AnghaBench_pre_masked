
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_node {long grpmask; long qsmaskinit; struct rcu_node* parent; int wait_blkd_tasks; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rcu_node*) ;
 int FUNC_2 (struct rcu_node*) ;
 int FUNC_3 (struct rcu_node*) ;

__attribute__((used)) static void FUNC_4(struct rcu_node *VAR_0)
{
 long VAR_1;
 long VAR_2;
 struct rcu_node *VAR_3 = VAR_0;

 FUNC_1(VAR_0);
 FUNC_0(VAR_3->wait_blkd_tasks);
 for (;;) {
  VAR_1 = VAR_3->grpmask;
  VAR_3 = VAR_3->parent;
  if (VAR_3 == ((void*)0))
   return;
  FUNC_2(VAR_3);
  VAR_2 = VAR_3->qsmaskinit;
  VAR_3->qsmaskinit |= VAR_1;
  FUNC_3(VAR_3);
  if (VAR_2)
   return;
 }
}

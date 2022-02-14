
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_node {int dummy; } ;
struct rcu_data {int cblist; int gp_seq_needed; int gpwrap; } ;
struct TYPE_2__ {int gp_seq; } ;


 scalar_t__ FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct rcu_node*) ;
 int FUNC_2 (struct rcu_node*) ;
 int FUNC_3 (struct rcu_node*,struct rcu_data*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct rcu_data*) ;
 int FUNC_6 (int *,unsigned long) ;
 unsigned long FUNC_7 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_8(struct rcu_node *VAR_1,
     struct rcu_data *VAR_2)
{
 unsigned long VAR_3;
 bool VAR_4;

 FUNC_5(VAR_2);
 VAR_3 = FUNC_7(&VAR_0.gp_seq);
 if (!VAR_2->gpwrap && FUNC_0(VAR_2->gp_seq_needed, VAR_3)) {

  (void)FUNC_6(&VAR_2->cblist, VAR_3);
  return;
 }
 FUNC_1(VAR_1);
 VAR_4 = FUNC_3(VAR_1, VAR_2);
 FUNC_2(VAR_1);
 if (VAR_4)
  FUNC_4();
}

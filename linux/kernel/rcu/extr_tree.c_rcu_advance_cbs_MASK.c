
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_node {int gp_seq; } ;
struct rcu_data {int cblist; } ;


 int FUNC_0 (struct rcu_node*) ;
 int FUNC_1 (struct rcu_node*,struct rcu_data*) ;
 int FUNC_2 (struct rcu_data*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct rcu_node *VAR_0, struct rcu_data *VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_0(VAR_0);


 if (!FUNC_4(&VAR_1->cblist))
  return 0;





 FUNC_3(&VAR_1->cblist, VAR_0->gp_seq);


 return FUNC_1(VAR_0, VAR_1);
}

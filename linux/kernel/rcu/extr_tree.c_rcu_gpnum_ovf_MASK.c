
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_node {scalar_t__ gp_seq; } ;
struct rcu_data {scalar_t__ rcu_iw_gp_seq; int gpwrap; int gp_seq; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct rcu_node*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct rcu_node *VAR_1, struct rcu_data *VAR_2)
{
 FUNC_2(VAR_1);
 if (FUNC_0(FUNC_3(&VAR_2->gp_seq) + VAR_0 / 4,
    VAR_1->gp_seq))
  FUNC_1(VAR_2->gpwrap, 1);
 if (FUNC_0(VAR_2->rcu_iw_gp_seq + VAR_0 / 4, VAR_1->gp_seq))
  VAR_2->rcu_iw_gp_seq = VAR_1->gp_seq + VAR_0 / 4;
}

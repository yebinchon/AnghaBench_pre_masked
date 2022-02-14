
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_node {int gp_seq; int gp_seq_needed; } ;
struct rcu_data {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 struct rcu_data* FUNC_2 (int *) ;
 int FUNC_3 (struct rcu_node*,struct rcu_data*,int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct rcu_node *VAR_1)
{
 bool VAR_2;
 struct rcu_data *VAR_3 = FUNC_2(&VAR_0);

 VAR_2 = FUNC_1(VAR_1->gp_seq, VAR_1->gp_seq_needed);
 if (!VAR_2)
  VAR_1->gp_seq_needed = VAR_1->gp_seq;
 FUNC_3(VAR_1, VAR_3, VAR_1->gp_seq,
     VAR_2 ? FUNC_0("CleanupMore") : FUNC_0("Cleanup"));
 return VAR_2;
}

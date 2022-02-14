
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_node {int dummy; } ;
struct rcu_data {int gp_seq; int cblist; } ;
struct TYPE_2__ {int name; int gp_seq; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct rcu_node*) ;
 int FUNC_2 (struct rcu_data*) ;
 scalar_t__ FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 unsigned long FUNC_6 (int *) ;
 int FUNC_7 (struct rcu_node*,struct rcu_data*,unsigned long) ;
 TYPE_1__ VAR_1 ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_9(struct rcu_node *VAR_2, struct rcu_data *VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5 = 0;

 FUNC_2(VAR_3);
 FUNC_1(VAR_2);


 if (!FUNC_4(&VAR_3->cblist))
  return 0;
 VAR_4 = FUNC_6(&VAR_1.gp_seq);
 if (FUNC_3(&VAR_3->cblist, VAR_4))
  VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4);


 if (FUNC_5(&VAR_3->cblist, VAR_0))
  FUNC_8(VAR_1.name, VAR_3->gp_seq, FUNC_0("AccWaitCB"));
 else
  FUNC_8(VAR_1.name, VAR_3->gp_seq, FUNC_0("AccReadyCB"));
 return VAR_5;
}

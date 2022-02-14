
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_data {int mynode; int cpu; int gp_seq; int dynticks_snap; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct rcu_data*) ;
 int FUNC_3 (int ,struct rcu_data*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rcu_data *VAR_1)
{
 VAR_1->dynticks_snap = FUNC_2(VAR_1);
 if (FUNC_1(VAR_1->dynticks_snap)) {
  FUNC_4(VAR_0.name, VAR_1->gp_seq, VAR_1->cpu, FUNC_0("dti"));
  FUNC_3(VAR_1->mynode, VAR_1);
  return 1;
 }
 return 0;
}

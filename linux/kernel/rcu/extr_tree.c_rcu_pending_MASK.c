
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rcu_node {int gp_seq; } ;
struct TYPE_3__ {int norm; } ;
struct TYPE_4__ {TYPE_1__ b; } ;
struct rcu_data {scalar_t__ gp_seq; int gpwrap; int cblist; TYPE_2__ cpu_no_qs; scalar_t__ core_needs_qs; struct rcu_node* mynode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rcu_data*) ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct rcu_data*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 struct rcu_data* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(void)
{
 struct rcu_data *VAR_3 = FUNC_11(&VAR_2);
 struct rcu_node *VAR_4 = VAR_3->mynode;


 FUNC_2(VAR_3);


 if (FUNC_4(VAR_3))
  return 1;


 if (FUNC_5())
  return 0;


 if (VAR_3->core_needs_qs && !VAR_3->cpu_no_qs.b.norm)
  return 1;


 if (FUNC_8(&VAR_3->cblist))
  return 1;


 if (!FUNC_3() &&
     FUNC_6(&VAR_3->cblist) &&
     (!FUNC_0(VAR_0) ||
      !FUNC_7(&VAR_3->cblist)) &&
     !FUNC_9(&VAR_3->cblist, VAR_1))
  return 1;


 if (FUNC_10(&VAR_4->gp_seq) != VAR_3->gp_seq ||
     FUNC_12(FUNC_1(VAR_3->gpwrap)))
  return 1;


 return 0;
}

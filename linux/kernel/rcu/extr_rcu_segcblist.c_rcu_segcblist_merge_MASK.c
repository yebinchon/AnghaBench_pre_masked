
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {int dummy; } ;
struct rcu_cblist {int dummy; } ;


 int FUNC_0 (struct rcu_cblist*) ;
 int FUNC_1 (struct rcu_segcblist*,struct rcu_cblist*) ;
 int FUNC_2 (struct rcu_segcblist*,struct rcu_cblist*) ;
 int FUNC_3 (struct rcu_segcblist*,struct rcu_cblist*) ;
 int FUNC_4 (struct rcu_segcblist*) ;
 int FUNC_5 (struct rcu_segcblist*,struct rcu_cblist*) ;
 int FUNC_6 (struct rcu_segcblist*,struct rcu_cblist*) ;
 int FUNC_7 (struct rcu_segcblist*,struct rcu_cblist*) ;

void FUNC_8(struct rcu_segcblist *VAR_0,
    struct rcu_segcblist *VAR_1)
{
 struct rcu_cblist VAR_2;
 struct rcu_cblist VAR_3;

 FUNC_0(&VAR_2);
 FUNC_0(&VAR_3);
 FUNC_1(VAR_1, &VAR_2);
 FUNC_2(VAR_1, &VAR_2);
 FUNC_3(VAR_1, &VAR_3);
 FUNC_5(VAR_0, &VAR_2);
 FUNC_6(VAR_0, &VAR_2);
 FUNC_7(VAR_0, &VAR_3);
 FUNC_4(VAR_1);
}

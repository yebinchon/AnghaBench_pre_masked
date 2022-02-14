
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_data {int dynticks; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct rcu_data* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct rcu_data *VAR_2 = FUNC_2(&VAR_1);

 if (FUNC_1(&VAR_2->dynticks) & VAR_0)
  return;
 FUNC_0(VAR_0, &VAR_2->dynticks);
}

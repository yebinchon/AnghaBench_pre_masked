
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_data {int dynticks; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct rcu_data* FUNC_1 (int *) ;

bool FUNC_2(void)
{
 struct rcu_data *VAR_2 = FUNC_1(&VAR_1);

 return !(FUNC_0(&VAR_2->dynticks) & VAR_0);
}

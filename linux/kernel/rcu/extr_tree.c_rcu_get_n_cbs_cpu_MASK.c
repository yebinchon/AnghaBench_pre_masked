
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_data {int cblist; } ;


 struct rcu_data* FUNC_0 (int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 long FUNC_2 (int *) ;

__attribute__((used)) static long FUNC_3(int VAR_1)
{
 struct rcu_data *VAR_2 = FUNC_0(&VAR_0, VAR_1);

 if (FUNC_1(&VAR_2->cblist))
  return FUNC_2(&VAR_2->cblist);
 return 0;
}

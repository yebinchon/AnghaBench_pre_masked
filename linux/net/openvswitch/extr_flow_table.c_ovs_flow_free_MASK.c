
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow {int rcu; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sw_flow*) ;
 int VAR_0 ;

void FUNC_2(struct sw_flow *VAR_1, bool VAR_2)
{
 if (!VAR_1)
  return;

 if (VAR_2)
  FUNC_0(&VAR_1->rcu, VAR_0);
 else
  FUNC_1(VAR_1);
}

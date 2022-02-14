
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srcu_struct {int dummy; } ;
struct rcu_synchronize {int head; int completion; } ;


 int FUNC_0 (struct srcu_struct*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void FUNC_5(struct srcu_struct *VAR_1)
{
 struct rcu_synchronize VAR_2;

 FUNC_3(&VAR_2.head);
 FUNC_2(&VAR_2.completion);
 FUNC_0(VAR_1, &VAR_2.head, VAR_0);
 FUNC_4(&VAR_2.completion);
 FUNC_1(&VAR_2.head);
}

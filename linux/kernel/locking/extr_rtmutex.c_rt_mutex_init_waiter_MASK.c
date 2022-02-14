
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_mutex_waiter {int * task; int tree_entry; int pi_tree_entry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rt_mutex_waiter*) ;

void FUNC_2(struct rt_mutex_waiter *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->pi_tree_entry);
 FUNC_0(&VAR_0->tree_entry);
 VAR_0->task = ((void*)0);
}

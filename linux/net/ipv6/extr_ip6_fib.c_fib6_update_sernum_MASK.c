
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct fib6_node {int fn_sernum; } ;
struct fib6_info {TYPE_1__* fib6_table; int fib6_node; } ;
struct TYPE_2__ {int tb6_lock; } ;


 int FUNC_0 (struct net*) ;
 int FUNC_1 (int *) ;
 struct fib6_node* FUNC_2 (int ,int ) ;

void FUNC_3(struct net *VAR_0, struct fib6_info *VAR_1)
{
 struct fib6_node *VAR_2;

 VAR_2 = FUNC_2(VAR_1->fib6_node,
   FUNC_1(&VAR_1->fib6_table->tb6_lock));
 if (VAR_2)
  VAR_2->fn_sernum = FUNC_0(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct fib6_info {TYPE_1__* fib6_table; } ;
struct TYPE_2__ {int tb6_lock; } ;


 int FUNC_0 (struct net*,struct fib6_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct net *VAR_0, struct fib6_info *VAR_1)
{
 FUNC_1(&VAR_1->fib6_table->tb6_lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->fib6_table->tb6_lock);
}

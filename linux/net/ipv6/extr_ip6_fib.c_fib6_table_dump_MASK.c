
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct fib6_walker {int * root; } ;
struct fib6_table {int tb6_lock; int tb6_root; } ;


 int FUNC_0 (struct net*,struct fib6_walker*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net *VAR_0, struct fib6_table *VAR_1,
       struct fib6_walker *VAR_2)
{
 VAR_2->root = &VAR_1->tb6_root;
 FUNC_1(&VAR_1->tb6_lock);
 FUNC_0(VAR_0, VAR_2);
 FUNC_2(&VAR_1->tb6_lock);
}

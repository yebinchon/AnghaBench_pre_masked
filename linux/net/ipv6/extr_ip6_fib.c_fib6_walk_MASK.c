
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct fib6_walker {int root; int node; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct fib6_walker*) ;
 int FUNC_1 (struct net*,struct fib6_walker*) ;
 int FUNC_2 (struct net*,struct fib6_walker*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_1, struct fib6_walker *VAR_2)
{
 int VAR_3;

 VAR_2->state = VAR_0;
 VAR_2->node = VAR_2->root;

 FUNC_1(VAR_1, VAR_2);
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 <= 0)
  FUNC_2(VAR_1, VAR_2);
 return VAR_3;
}

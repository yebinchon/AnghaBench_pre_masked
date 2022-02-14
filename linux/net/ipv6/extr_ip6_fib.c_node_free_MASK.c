
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rt6_stats; } ;
struct net {TYPE_2__ ipv6; } ;
struct fib6_node {int rcu; } ;
struct TYPE_3__ {int fib_nodes; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct net *VAR_1, struct fib6_node *VAR_2)
{
 FUNC_0(&VAR_2->rcu, VAR_0);
 VAR_1->ipv6.rt6_stats->fib_nodes--;
}

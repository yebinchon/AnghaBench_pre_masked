
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rt6_stats; } ;
struct net {TYPE_2__ ipv6; } ;
struct fib6_node {int dummy; } ;
struct TYPE_3__ {int fib_nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fib6_node* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct fib6_node *FUNC_1(struct net *VAR_2)
{
 struct fib6_node *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3)
  VAR_2->ipv6.rt6_stats->fib_nodes++;

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_info {struct net* nl_net; } ;
struct net {int dummy; } ;
struct fib6_info {int dummy; } ;


 int FUNC_0 (struct fib6_info*,struct nl_info*) ;

int FUNC_1(struct net *VAR_0, struct fib6_info *VAR_1)
{
 struct nl_info VAR_2 = { .nl_net = VAR_0 };

 return FUNC_0(VAR_1, &VAR_2);
}

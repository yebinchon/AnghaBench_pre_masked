
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nl_info {struct net* nl_net; } ;
struct TYPE_2__ {struct fib6_info* fib6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_table {int tb6_lock; } ;
struct fib6_info {struct fib6_table* fib6_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct fib6_info*,struct nl_info*) ;
 int FUNC_1 (struct fib6_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fib6_info *VAR_1, struct nl_info *VAR_2)
{
 struct net *VAR_3 = VAR_2->nl_net;
 struct fib6_table *VAR_4;
 int VAR_5;

 if (VAR_1 == VAR_3->ipv6.fib6_null_entry) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_4 = VAR_1->fib6_table;
 FUNC_2(&VAR_4->tb6_lock);
 VAR_5 = FUNC_0(VAR_1, VAR_2);
 FUNC_3(&VAR_4->tb6_lock);

out:
 FUNC_1(VAR_1);
 return VAR_5;
}

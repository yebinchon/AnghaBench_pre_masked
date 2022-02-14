
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_info {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct fib6_table {int tb6_lock; int tb6_root; } ;
struct fib6_info {struct fib6_table* fib6_table; } ;


 int FUNC_0 (int *,struct fib6_info*,struct nl_info*,struct netlink_ext_ack*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fib6_info *VAR_0, struct nl_info *VAR_1,
   struct netlink_ext_ack *VAR_2)
{
 int VAR_3;
 struct fib6_table *VAR_4;

 VAR_4 = VAR_0->fib6_table;
 FUNC_1(&VAR_4->tb6_lock);
 VAR_3 = FUNC_0(&VAR_4->tb6_root, VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_4->tb6_lock);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct fib_rule {int dummy; } ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_0, struct fib_rule *VAR_1,
         struct netlink_ext_ack *VAR_2)
{
 FUNC_0(VAR_2, "l3mdev support is not enabled in kernel");
 return -1;
}

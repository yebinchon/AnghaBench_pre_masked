
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnexthop {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct fib_info {int dummy; } ;
struct fib_config {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static int FUNC_1(struct fib_info *VAR_1, struct rtnexthop *VAR_2,
         int VAR_3, struct fib_config *VAR_4,
         struct netlink_ext_ack *VAR_5)
{
 FUNC_0(VAR_5, "Multipath support not enabled in kernel");

 return -VAR_0;
}

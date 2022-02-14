
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct fib6_nh {int dummy; } ;
struct fib6_config {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_1, struct fib6_nh *VAR_2,
         struct fib6_config *VAR_3, gfp_t VAR_4,
         struct netlink_ext_ack *VAR_5)
{
 FUNC_0(VAR_5, "IPv6 support not enabled in kernel");
 return -VAR_0;
}

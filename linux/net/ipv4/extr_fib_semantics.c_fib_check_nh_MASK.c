
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct fib_nh {scalar_t__ fib_nh_gw_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net*,struct fib_nh*,struct netlink_ext_ack*) ;
 int FUNC_1 (struct net*,struct fib_nh*,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_2 (struct net*,struct fib_nh*,int ,struct netlink_ext_ack*) ;

int FUNC_3(struct net *VAR_2, struct fib_nh *VAR_3, u32 VAR_4, u8 VAR_5,
   struct netlink_ext_ack *VAR_6)
{
 int VAR_7;

 if (VAR_3->fib_nh_gw_family == VAR_0)
  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_3->fib_nh_gw_family == VAR_1)
  VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6);
 else
  VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_6);

 return VAR_7;
}

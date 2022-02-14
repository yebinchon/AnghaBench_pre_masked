
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct fib6_result {int fib6_flags; scalar_t__ fib6_type; TYPE_3__* nh; TYPE_2__* f6i; } ;
struct fib6_config {struct in6_addr fc_gateway; } ;
struct TYPE_6__ {struct net_device const* fib_nh_dev; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_5__ {TYPE_1__ fib6_dst; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net*,struct fib6_config*,struct in6_addr const*,int ,int ,struct fib6_result*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device const*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_4,
         struct fib6_config *VAR_5,
         const struct net_device *VAR_6,
         struct netlink_ext_ack *VAR_7)
{
 u32 VAR_8 = FUNC_3(VAR_6) ? : VAR_3;
 const struct in6_addr *VAR_9 = &VAR_5->fc_gateway;
 struct fib6_result VAR_10 = {};
 int VAR_11;

 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_9, VAR_8, 0, &VAR_10);
 if (!VAR_11 && !(VAR_10.fib6_flags & VAR_1) &&

     !FUNC_2(&VAR_10.f6i->fib6_dst.addr) &&
     (VAR_10.fib6_type != VAR_2 || VAR_6 != VAR_10.nh->fib_nh_dev)) {
  FUNC_0(VAR_7,
          "Nexthop has invalid gateway or device mismatch");
  VAR_11 = -VAR_0;
 }

 return VAR_11;
}

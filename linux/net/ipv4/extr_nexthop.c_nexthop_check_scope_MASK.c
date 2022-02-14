
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int nhc_flags; scalar_t__ nhc_gw_family; } ;
struct nh_info {TYPE_1__ fib_nhc; } ;
struct nexthop {int nh_info; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct nh_info* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nexthop *VAR_4, u8 VAR_5,
          struct netlink_ext_ack *VAR_6)
{
 struct nh_info *VAR_7;

 VAR_7 = FUNC_1(VAR_4->nh_info);
 if (VAR_5 == VAR_2 && VAR_7->fib_nhc.nhc_gw_family) {
  FUNC_0(VAR_6,
          "Route with host scope can not have a gateway");
  return -VAR_0;
 }

 if (VAR_7->fib_nhc.nhc_flags & VAR_1 && VAR_5 >= VAR_3) {
  FUNC_0(VAR_6, "Scope mismatch with nexthop");
  return -VAR_0;
 }

 return 0;
}

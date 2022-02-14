
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nh_info {scalar_t__ family; } ;
struct nh_group {scalar_t__ has_v4; } ;
struct nexthop {int nh_info; int nh_grp; scalar_t__ is_group; } ;
struct netlink_ext_ack {int dummy; } ;
struct fib6_config {int fc_src; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (int *,struct netlink_ext_ack*) ;
 void* FUNC_2 (int ) ;

int FUNC_3(struct nexthop *VAR_2, struct fib6_config *VAR_3,
         struct netlink_ext_ack *VAR_4)
{
 struct nh_info *VAR_5;







 if (VAR_3 && FUNC_1(&VAR_3->fc_src, VAR_4) < 0)
  return -VAR_1;

 if (VAR_2->is_group) {
  struct nh_group *VAR_6;

  VAR_6 = FUNC_2(VAR_2->nh_grp);
  if (VAR_6->has_v4)
   goto no_v4_nh;
 } else {
  VAR_5 = FUNC_2(VAR_2->nh_info);
  if (VAR_5->family == VAR_0)
   goto no_v4_nh;
 }

 return 0;
no_v4_nh:
 FUNC_0(VAR_4, "IPv6 routes can not use an IPv4 nexthop");
 return -VAR_1;
}

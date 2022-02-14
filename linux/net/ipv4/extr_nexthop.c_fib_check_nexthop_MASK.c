
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nh_group {TYPE_1__* nh_entries; } ;
struct nexthop {int nh_grp; scalar_t__ is_group; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {struct nexthop* nh; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct nexthop*,int ,struct netlink_ext_ack*) ;
 struct nh_group* FUNC_2 (int ) ;

int FUNC_3(struct nexthop *VAR_2, u8 VAR_3,
        struct netlink_ext_ack *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_2->is_group) {
  struct nh_group *VAR_6;

  if (VAR_3 == VAR_1) {
   FUNC_0(VAR_4, "Route with host scope can not have multiple nexthops");
   VAR_5 = -VAR_0;
   goto out;
  }

  VAR_6 = FUNC_2(VAR_2->nh_grp);

  VAR_5 = FUNC_1(VAR_6->nh_entries[0].nh, VAR_3, VAR_4);
 } else {
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 }
out:
 return VAR_5;
}

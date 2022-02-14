
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nh_info {struct nexthop* nh_parent; } ;
struct nexthop {int nh_info; int nh_flags; int protocol; scalar_t__ is_group; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ,struct nh_info*) ;
 struct nh_info* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_1, struct nexthop *VAR_2,
      struct nexthop *VAR_3,
      struct netlink_ext_ack *VAR_4)
{
 struct nh_info *VAR_5, *VAR_6;

 if (VAR_3->is_group) {
  FUNC_0(VAR_4, "Can not replace a nexthop with a nexthop group.");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_2->nh_info);
 VAR_6 = FUNC_2(VAR_3->nh_info);

 VAR_6->nh_parent = VAR_2;
 VAR_5->nh_parent = VAR_3;

 VAR_2->protocol = VAR_3->protocol;
 VAR_2->nh_flags = VAR_3->nh_flags;

 FUNC_1(VAR_2->nh_info, VAR_6);
 FUNC_1(VAR_3->nh_info, VAR_5);

 return 0;
}

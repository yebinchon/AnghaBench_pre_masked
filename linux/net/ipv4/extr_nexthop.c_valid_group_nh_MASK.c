
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nh_info {scalar_t__ reject_nh; } ;
struct nh_group {scalar_t__ mpath; } ;
struct nexthop {int nh_info; int nh_grp; scalar_t__ is_group; } ;
struct netlink_ext_ack {int dummy; } ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct nexthop *VAR_0, unsigned int VAR_1,
      struct netlink_ext_ack *VAR_2)
{
 if (VAR_0->is_group) {
  struct nh_group *VAR_3 = FUNC_1(VAR_0->nh_grp);




  if (VAR_3->mpath) {
   FUNC_0(VAR_2,
           "Multipath group can not be a nexthop within a group");
   return 0;
  }
 } else {
  struct nh_info *VAR_4 = FUNC_1(VAR_0->nh_info);

  if (VAR_4->reject_nh && VAR_1 > 1) {
   FUNC_0(VAR_2,
           "Blackhole nexthop can not be used in a group with more than 1 path");
   return 0;
  }
 }

 return 1;
}

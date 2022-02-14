
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy_vendor_command {scalar_t__ policy; int maxattr; } ;
struct nlattr {int nla_type; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,struct nlattr*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct nlattr*,int ,scalar_t__,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_2(const struct wiphy_vendor_command *VAR_3,
           struct nlattr *VAR_4,
           struct netlink_ext_ack *VAR_5)
{
 if (VAR_3->policy == VAR_2) {
  if (VAR_4->nla_type & VAR_1) {
   FUNC_0(VAR_5, VAR_4,
         "unexpected nested data");
   return -VAR_0;
  }

  return 0;
 }

 if (!(VAR_4->nla_type & VAR_1)) {
  FUNC_0(VAR_5, VAR_4, "expected nested data");
  return -VAR_0;
 }

 return FUNC_1(VAR_4, VAR_3->maxattr, VAR_3->policy,
           VAR_5);
}

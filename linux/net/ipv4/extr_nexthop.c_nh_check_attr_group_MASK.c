
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nexthop_grp {int weight; scalar_t__ id; scalar_t__ resvd2; scalar_t__ resvd1; } ;
struct nexthop {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 unsigned int VAR_2 ;
 struct nexthop* FUNC_1 (struct net*,scalar_t__) ;
 struct nexthop_grp* FUNC_2 (struct nlattr*) ;
 unsigned int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nexthop*,unsigned int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_3, struct nlattr *VAR_4[],
          struct netlink_ext_ack *VAR_5)
{
 unsigned int VAR_6 = FUNC_3(VAR_4[VAR_1]);
 struct nexthop_grp *VAR_7;
 unsigned int VAR_8, VAR_9;

 if (VAR_6 & (sizeof(struct nexthop_grp) - 1)) {
  FUNC_0(VAR_5,
          "Invalid length for nexthop group attribute");
  return -VAR_0;
 }


 VAR_6 /= sizeof(*VAR_7);

 VAR_7 = FUNC_2(VAR_4[VAR_1]);
 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
  if (VAR_7[VAR_8].resvd1 || VAR_7[VAR_8].resvd2) {
   FUNC_0(VAR_5, "Reserved fields in nexthop_grp must be 0");
   return -VAR_0;
  }
  if (VAR_7[VAR_8].weight > 254) {
   FUNC_0(VAR_5, "Invalid value for weight");
   return -VAR_0;
  }
  for (VAR_9 = VAR_8 + 1; VAR_9 < VAR_6; ++VAR_9) {
   if (VAR_7[VAR_8].id == VAR_7[VAR_9].id) {
    FUNC_0(VAR_5, "Nexthop id can not be used twice in a group");
    return -VAR_0;
   }
  }
 }

 VAR_7 = FUNC_2(VAR_4[VAR_1]);
 for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
  struct nexthop *VAR_10;

  VAR_10 = FUNC_1(VAR_3, VAR_7[VAR_8].id);
  if (!VAR_10) {
   FUNC_0(VAR_5, "Invalid nexthop id");
   return -VAR_0;
  }
  if (!FUNC_4(VAR_10, VAR_6, VAR_5))
   return -VAR_0;
 }
 for (VAR_8 = VAR_1 + 1; VAR_8 < VAR_2; ++VAR_8) {
  if (!VAR_4[VAR_8])
   continue;

  FUNC_0(VAR_5,
          "No other attributes can be set in nexthop groups");
  return -VAR_0;
 }

 return 0;
}

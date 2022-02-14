
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct netlink_ext_ack {int dummy; } ;
struct if_stats_msg {scalar_t__ filter_mask; scalar_t__ ifindex; scalar_t__ pad2; scalar_t__ pad1; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_2 (struct nlmsghdr const*,int) ;
 struct if_stats_msg* FUNC_3 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const struct nlmsghdr *VAR_2, bool VAR_3,
    bool VAR_4, struct netlink_ext_ack *VAR_5)
{
 struct if_stats_msg *VAR_6;

 if (VAR_2->nlmsg_len < FUNC_4(sizeof(*VAR_6))) {
  FUNC_1(VAR_5, "Invalid header for stats dump");
  return -VAR_0;
 }

 if (!VAR_3)
  return 0;

 VAR_6 = FUNC_3(VAR_2);




 if (VAR_6->pad1 || VAR_6->pad2 || (VAR_4 && VAR_6->ifindex)) {
  FUNC_1(VAR_5, "Invalid values in header for stats dump request");
  return -VAR_0;
 }
 if (FUNC_2(VAR_2, sizeof(*VAR_6))) {
  FUNC_1(VAR_5, "Invalid attributes after stats header");
  return -VAR_0;
 }
 if (VAR_6->filter_mask >= FUNC_0(VAR_1 + 1)) {
  FUNC_1(VAR_5, "Invalid stats requested through filter mask");
  return -VAR_0;
 }

 return 0;
}

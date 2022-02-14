
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct netlink_ext_ack {int dummy; } ;
struct br_port_msg {scalar_t__ ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_2 (struct nlmsghdr const*,int) ;
 struct br_port_msg* FUNC_3 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const struct nlmsghdr *VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 struct br_port_msg *VAR_3;

 if (VAR_1->nlmsg_len < FUNC_4(sizeof(*VAR_3))) {
  FUNC_1(VAR_2, "Invalid header for mdb dump request");
  return -VAR_0;
 }

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3->ifindex) {
  FUNC_1(VAR_2, "Filtering by device index is not supported for mdb dump request");
  return -VAR_0;
 }
 if (FUNC_2(VAR_1, sizeof(*VAR_3))) {
  FUNC_0(VAR_2, "Invalid data after header in mdb dump request");
  return -VAR_0;
 }

 return 0;
}

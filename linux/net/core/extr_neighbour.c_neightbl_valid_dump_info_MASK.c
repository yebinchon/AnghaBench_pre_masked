
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct netlink_ext_ack {int dummy; } ;
struct ndtmsg {scalar_t__ ndtm_pad2; scalar_t__ ndtm_pad1; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ FUNC_1 (struct nlmsghdr const*,int) ;
 struct ndtmsg* FUNC_2 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const struct nlmsghdr *VAR_1,
        struct netlink_ext_ack *VAR_2)
{
 struct ndtmsg *VAR_3;

 if (VAR_1->nlmsg_len < FUNC_3(sizeof(*VAR_3))) {
  FUNC_0(VAR_2, "Invalid header for neighbor table dump request");
  return -VAR_0;
 }

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3->ndtm_pad1 || VAR_3->ndtm_pad2) {
  FUNC_0(VAR_2, "Invalid values in header for neighbor table dump request");
  return -VAR_0;
 }

 if (FUNC_1(VAR_1, sizeof(*VAR_3))) {
  FUNC_0(VAR_2, "Invalid data after header in neighbor table dump request");
  return -VAR_0;
 }

 return 0;
}

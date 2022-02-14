
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtgenmsg {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ifinfomsg {scalar_t__ ifi_index; scalar_t__ ifi_change; scalar_t__ ifi_flags; scalar_t__ ifi_type; scalar_t__ __ifi_pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 struct ifinfomsg* FUNC_1 (struct nlmsghdr const*) ;
 int FUNC_2 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nlmsghdr const*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (struct nlmsghdr const*,int,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_6(const struct nlmsghdr *VAR_3,
          bool VAR_4, struct nlattr **VAR_5,
          struct netlink_ext_ack *VAR_6)
{
 int VAR_7;

 if (VAR_4) {
  struct ifinfomsg *VAR_8;

  if (VAR_3->nlmsg_len < FUNC_3(sizeof(*VAR_8))) {
   FUNC_0(VAR_6, "Invalid header for link dump");
   return -VAR_0;
  }

  VAR_8 = FUNC_1(VAR_3);
  if (VAR_8->__ifi_pad || VAR_8->ifi_type || VAR_8->ifi_flags ||
      VAR_8->ifi_change) {
   FUNC_0(VAR_6, "Invalid values in header for link dump request");
   return -VAR_0;
  }
  if (VAR_8->ifi_index) {
   FUNC_0(VAR_6, "Filter by device index not supported for link dumps");
   return -VAR_0;
  }

  return FUNC_5(VAR_3, sizeof(*VAR_8), VAR_5,
           VAR_1, VAR_2,
           VAR_6);
 }
 VAR_7 = FUNC_2(VAR_3) < sizeof(struct ifinfomsg) ?
   sizeof(struct rtgenmsg) : sizeof(struct ifinfomsg);

 return FUNC_4(VAR_3, VAR_7, VAR_5, VAR_1, VAR_2,
          VAR_6);
}

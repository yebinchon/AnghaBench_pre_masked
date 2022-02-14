
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ifinfomsg {scalar_t__ ifi_index; scalar_t__ ifi_change; scalar_t__ ifi_flags; scalar_t__ ifi_type; scalar_t__ __ifi_pad; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct nlattr*) ;
 struct ifinfomsg* FUNC_2 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_6(const struct nlmsghdr *VAR_3,
        bool VAR_4, u32 *VAR_5,
        struct netlink_ext_ack *VAR_6)
{
 struct nlattr *VAR_7[VAR_1+1];
 int VAR_8, VAR_9;

 if (VAR_4) {
  struct ifinfomsg *VAR_10;

  if (VAR_3->nlmsg_len < FUNC_3(sizeof(*VAR_10))) {
   FUNC_0(VAR_6, "Invalid header for bridge link dump");
   return -VAR_0;
  }

  VAR_10 = FUNC_2(VAR_3);
  if (VAR_10->__ifi_pad || VAR_10->ifi_type || VAR_10->ifi_flags ||
      VAR_10->ifi_change || VAR_10->ifi_index) {
   FUNC_0(VAR_6, "Invalid values in header for bridge link dump request");
   return -VAR_0;
  }

  VAR_8 = FUNC_5(VAR_3,
          sizeof(struct ifinfomsg),
          VAR_7, VAR_1, VAR_2,
          VAR_6);
 } else {
  VAR_8 = FUNC_4(VAR_3, sizeof(struct ifinfomsg),
          VAR_7, VAR_1, VAR_2,
          VAR_6);
 }
 if (VAR_8 < 0)
  return VAR_8;


 for (VAR_9 = 0; VAR_9 <= VAR_1; ++VAR_9) {
  if (!VAR_7[VAR_9])
   continue;

  switch (VAR_9) {
  case 128:
   *VAR_5 = FUNC_1(VAR_7[VAR_9]);
   break;
  default:
   if (VAR_4) {
    FUNC_0(VAR_6, "Unsupported attribute in bridge link dump request");
    return -VAR_0;
   }
  }
 }

 return 0;
}

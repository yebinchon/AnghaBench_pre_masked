
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netconfmsg {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int FUNC_4 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3,
          const struct nlmsghdr *VAR_4,
          struct nlattr **VAR_5,
          struct netlink_ext_ack *VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_4->nlmsg_len < FUNC_2(sizeof(struct netconfmsg))) {
  FUNC_0(VAR_6,
       "Invalid header for netconf get request");
  return -VAR_0;
 }

 if (!FUNC_1(VAR_3))
  return FUNC_3(VAR_4, sizeof(struct netconfmsg),
           VAR_5, VAR_1,
           VAR_2, VAR_6);

 VAR_8 = FUNC_4(VAR_4, sizeof(struct netconfmsg),
         VAR_5, VAR_1,
         VAR_2, VAR_6);
 if (VAR_8)
  return VAR_8;

 for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++) {
  if (!VAR_5[VAR_7])
   continue;

  switch (VAR_7) {
  case 128:
   break;
  default:
   FUNC_0(VAR_6, "Unsupported attribute in netconf get request");
   return -VAR_0;
  }
 }

 return 0;
}

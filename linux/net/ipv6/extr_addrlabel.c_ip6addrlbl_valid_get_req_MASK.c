
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct ifaddrlblmsg {scalar_t__ ifal_seq; scalar_t__ ifal_flags; scalar_t__ __ifal_reserved; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 struct ifaddrlblmsg* FUNC_2 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3,
        const struct nlmsghdr *VAR_4,
        struct nlattr **VAR_5,
        struct netlink_ext_ack *VAR_6)
{
 struct ifaddrlblmsg *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_4->nlmsg_len < FUNC_3(sizeof(*VAR_7))) {
  FUNC_0(VAR_6, "Invalid header for addrlabel get request");
  return -VAR_0;
 }

 if (!FUNC_1(VAR_3))
  return FUNC_4(VAR_4, sizeof(*VAR_7), VAR_5,
           VAR_1, VAR_2, VAR_6);

 VAR_7 = FUNC_2(VAR_4);
 if (VAR_7->__ifal_reserved || VAR_7->ifal_flags || VAR_7->ifal_seq) {
  FUNC_0(VAR_6, "Invalid values in header for addrlabel get request");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_4, sizeof(*VAR_7), VAR_5, VAR_1,
         VAR_2, VAR_6);
 if (VAR_9)
  return VAR_9;

 for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++) {
  if (!VAR_5[VAR_8])
   continue;

  switch (VAR_8) {
  case 128:
   break;
  default:
   FUNC_0(VAR_6, "Unsupported attribute in addrlabel get request");
   return -VAR_0;
  }
 }

 return 0;
}

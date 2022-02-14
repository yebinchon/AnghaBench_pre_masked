
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtmsg {int rtm_src_len; int rtm_dst_len; scalar_t__ rtm_flags; scalar_t__ rtm_type; scalar_t__ rtm_scope; scalar_t__ rtm_protocol; scalar_t__ rtm_table; scalar_t__ rtm_tos; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

 int VAR_1 ;


 int FUNC_1 (struct sk_buff*) ;
 struct rtmsg* FUNC_2 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3,
           const struct nlmsghdr *VAR_4,
           struct nlattr **VAR_5,
           struct netlink_ext_ack *VAR_6)
{
 struct rtmsg *VAR_7;
 int VAR_8, VAR_9;

 if (VAR_4->nlmsg_len < FUNC_3(sizeof(*VAR_7))) {
  FUNC_0(VAR_6, "ipv4: Invalid header for multicast route get request");
  return -VAR_0;
 }

 if (!FUNC_1(VAR_3))
  return FUNC_4(VAR_4, sizeof(*VAR_7), VAR_5, VAR_1,
           VAR_2, VAR_6);

 VAR_7 = FUNC_2(VAR_4);
 if ((VAR_7->rtm_src_len && VAR_7->rtm_src_len != 32) ||
     (VAR_7->rtm_dst_len && VAR_7->rtm_dst_len != 32) ||
     VAR_7->rtm_tos || VAR_7->rtm_table || VAR_7->rtm_protocol ||
     VAR_7->rtm_scope || VAR_7->rtm_type || VAR_7->rtm_flags) {
  FUNC_0(VAR_6, "ipv4: Invalid values in header for multicast route get request");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_4, sizeof(*VAR_7), VAR_5, VAR_1,
         VAR_2, VAR_6);
 if (VAR_9)
  return VAR_9;

 if ((VAR_5[129] && !VAR_7->rtm_src_len) ||
     (VAR_5[130] && !VAR_7->rtm_dst_len)) {
  FUNC_0(VAR_6, "ipv4: rtm_src_len and rtm_dst_len must be 32 for IPv4");
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 <= VAR_1; VAR_8++) {
  if (!VAR_5[VAR_8])
   continue;

  switch (VAR_8) {
  case 129:
  case 130:
  case 128:
   break;
  default:
   FUNC_0(VAR_6, "ipv4: Unsupported attribute in multicast route get request");
   return -VAR_0;
  }
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtmsg {int rtm_src_len; int rtm_dst_len; int rtm_flags; scalar_t__ rtm_type; scalar_t__ rtm_scope; scalar_t__ rtm_protocol; scalar_t__ rtm_table; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;





 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 struct rtmsg* FUNC_2 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6,
           const struct nlmsghdr *VAR_7,
           struct nlattr **VAR_8,
           struct netlink_ext_ack *VAR_9)
{
 struct rtmsg *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_7->nlmsg_len < FUNC_3(sizeof(*VAR_10))) {
  FUNC_0(VAR_9,
          "ipv4: Invalid header for route get request");
  return -VAR_0;
 }

 if (!FUNC_1(VAR_6))
  return FUNC_4(VAR_7, sizeof(*VAR_10), VAR_8, VAR_1,
           VAR_5, VAR_9);

 VAR_10 = FUNC_2(VAR_7);
 if ((VAR_10->rtm_src_len && VAR_10->rtm_src_len != 32) ||
     (VAR_10->rtm_dst_len && VAR_10->rtm_dst_len != 32) ||
     VAR_10->rtm_table || VAR_10->rtm_protocol ||
     VAR_10->rtm_scope || VAR_10->rtm_type) {
  FUNC_0(VAR_9, "ipv4: Invalid values in header for route get request");
  return -VAR_0;
 }

 if (VAR_10->rtm_flags & ~(VAR_4 |
          VAR_3 |
          VAR_2)) {
  FUNC_0(VAR_9, "ipv4: Unsupported rtm_flags for route get request");
  return -VAR_0;
 }

 VAR_12 = FUNC_5(VAR_7, sizeof(*VAR_10), VAR_8, VAR_1,
         VAR_5, VAR_9);
 if (VAR_12)
  return VAR_12;

 if ((VAR_8[129] && !VAR_10->rtm_src_len) ||
     (VAR_8[135] && !VAR_10->rtm_dst_len)) {
  FUNC_0(VAR_9, "ipv4: rtm_src_len and rtm_dst_len must be 32 for IPv4");
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 <= VAR_1; VAR_11++) {
  if (!VAR_8[VAR_11])
   continue;

  switch (VAR_11) {
  case 134:
  case 131:
  case 129:
  case 135:
  case 133:
  case 130:
  case 136:
  case 132:
  case 128:
   break;
  default:
   FUNC_0(VAR_9, "ipv4: Unsupported attribute in route get request");
   return -VAR_0;
  }
 }

 return 0;
}

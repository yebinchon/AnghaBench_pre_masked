
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
 int FUNC_1 (struct sk_buff*) ;
 struct rtmsg* FUNC_2 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4,
     const struct nlmsghdr *VAR_5,
     struct nlattr **VAR_6,
     struct netlink_ext_ack *VAR_7)
{
 struct rtmsg *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5->nlmsg_len < FUNC_3(sizeof(*VAR_8))) {
  FUNC_0(VAR_7,
       "Invalid header for get route request");
  return -VAR_0;
 }

 if (!FUNC_1(VAR_4))
  return FUNC_4(VAR_5, sizeof(*VAR_8), VAR_6, VAR_1,
           VAR_3, VAR_7);

 VAR_8 = FUNC_2(VAR_5);
 if ((VAR_8->rtm_src_len && VAR_8->rtm_src_len != 128) ||
     (VAR_8->rtm_dst_len && VAR_8->rtm_dst_len != 128) ||
     VAR_8->rtm_table || VAR_8->rtm_protocol || VAR_8->rtm_scope ||
     VAR_8->rtm_type) {
  FUNC_0(VAR_7, "Invalid values in header for get route request");
  return -VAR_0;
 }
 if (VAR_8->rtm_flags & ~VAR_2) {
  FUNC_0(VAR_7,
       "Invalid flags for get route request");
  return -VAR_0;
 }

 VAR_10 = FUNC_5(VAR_5, sizeof(*VAR_8), VAR_6, VAR_1,
         VAR_3, VAR_7);
 if (VAR_10)
  return VAR_10;

 if ((VAR_6[129] && !VAR_8->rtm_src_len) ||
     (VAR_6[135] && !VAR_8->rtm_dst_len)) {
  FUNC_0(VAR_7, "rtm_src_len and rtm_dst_len must be 128 for IPv6");
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 <= VAR_1; VAR_9++) {
  if (!VAR_6[VAR_9])
   continue;

  switch (VAR_9) {
  case 129:
  case 135:
  case 134:
  case 131:
  case 132:
  case 128:
  case 130:
  case 136:
  case 133:
   break;
  default:
   FUNC_0(VAR_7, "Unsupported attribute in get route request");
   return -VAR_0;
  }
 }

 return 0;
}

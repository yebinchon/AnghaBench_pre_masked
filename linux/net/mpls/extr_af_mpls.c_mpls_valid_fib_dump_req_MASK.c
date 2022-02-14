
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmsg {scalar_t__ rtm_protocol; scalar_t__ rtm_flags; scalar_t__ rtm_type; scalar_t__ rtm_scope; scalar_t__ rtm_table; scalar_t__ rtm_tos; scalar_t__ rtm_src_len; scalar_t__ rtm_dst_len; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_callback {int answer_flags; struct netlink_ext_ack* extack; } ;
struct net {int dummy; } ;
struct fib_dump_filter {int filter_set; int dev; scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net*,int) ;
 int FUNC_2 (struct nlattr*) ;
 struct rtmsg* FUNC_3 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct net *VAR_6, const struct nlmsghdr *VAR_7,
       struct fib_dump_filter *VAR_8,
       struct netlink_callback *VAR_9)
{
 struct netlink_ext_ack *VAR_10 = VAR_9->extack;
 struct nlattr *VAR_11[VAR_3 + 1];
 struct rtmsg *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_7->nlmsg_len < FUNC_4(sizeof(*VAR_12))) {
  FUNC_0(VAR_10, "Invalid header for FIB dump request");
  return -VAR_0;
 }

 VAR_12 = FUNC_3(VAR_7);
 if (VAR_12->rtm_dst_len || VAR_12->rtm_src_len || VAR_12->rtm_tos ||
     VAR_12->rtm_table || VAR_12->rtm_scope || VAR_12->rtm_type ||
     VAR_12->rtm_flags) {
  FUNC_0(VAR_10, "Invalid values in header for FIB dump request");
  return -VAR_0;
 }

 if (VAR_12->rtm_protocol) {
  VAR_8->protocol = VAR_12->rtm_protocol;
  VAR_8->filter_set = 1;
  VAR_9->answer_flags = VAR_2;
 }

 VAR_13 = FUNC_5(VAR_7, sizeof(*VAR_12), VAR_11, VAR_3,
         VAR_5, VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 for (VAR_14 = 0; VAR_14 <= VAR_3; ++VAR_14) {
  int VAR_15;

  if (VAR_14 == VAR_4) {
   VAR_15 = FUNC_2(VAR_11[VAR_14]);
   VAR_8->dev = FUNC_1(VAR_6, VAR_15);
   if (!VAR_8->dev)
    return -VAR_1;
   VAR_8->filter_set = 1;
  } else if (VAR_11[VAR_14]) {
   FUNC_0(VAR_10, "Unsupported attribute in dump request");
   return -VAR_0;
  }
 }

 return 0;
}

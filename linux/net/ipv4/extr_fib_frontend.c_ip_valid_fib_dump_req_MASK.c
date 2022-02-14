
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmsg {int rtm_flags; scalar_t__ rtm_family; void* rtm_table; int rtm_type; int rtm_protocol; scalar_t__ rtm_scope; scalar_t__ rtm_tos; scalar_t__ rtm_src_len; scalar_t__ rtm_dst_len; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_callback {int answer_flags; struct netlink_ext_ack* extack; } ;
struct net {int dummy; } ;
struct fib_dump_filter {int dump_routes; int dump_exceptions; int dump_all_families; int flags; int filter_set; scalar_t__ dev; void* table_id; int rt_type; int protocol; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct net*,int) ;
 void* FUNC_3 (struct nlattr*) ;
 struct rtmsg* FUNC_4 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 int VAR_7 ;

int FUNC_7(struct net *VAR_8, const struct nlmsghdr *VAR_9,
     struct fib_dump_filter *VAR_10,
     struct netlink_callback *VAR_11)
{
 struct netlink_ext_ack *VAR_12 = VAR_11->extack;
 struct nlattr *VAR_13[VAR_4 + 1];
 struct rtmsg *VAR_14;
 int VAR_15, VAR_16;

 FUNC_0();

 if (VAR_9->nlmsg_len < FUNC_5(sizeof(*VAR_14))) {
  FUNC_1(VAR_12, "Invalid header for FIB dump request");
  return -VAR_1;
 }

 VAR_14 = FUNC_4(VAR_9);
 if (VAR_14->rtm_dst_len || VAR_14->rtm_src_len || VAR_14->rtm_tos ||
     VAR_14->rtm_scope) {
  FUNC_1(VAR_12, "Invalid values in header for FIB dump request");
  return -VAR_1;
 }

 if (VAR_14->rtm_flags & ~(VAR_5 | VAR_6)) {
  FUNC_1(VAR_12, "Invalid flags for FIB dump request");
  return -VAR_1;
 }
 if (VAR_14->rtm_flags & VAR_5)
  VAR_10->dump_routes = 0;
 else
  VAR_10->dump_exceptions = 0;

 VAR_10->dump_all_families = (VAR_14->rtm_family == VAR_0);
 VAR_10->flags = VAR_14->rtm_flags;
 VAR_10->protocol = VAR_14->rtm_protocol;
 VAR_10->rt_type = VAR_14->rtm_type;
 VAR_10->table_id = VAR_14->rtm_table;

 VAR_15 = FUNC_6(VAR_9, sizeof(*VAR_14), VAR_13, VAR_4,
         VAR_7, VAR_12);
 if (VAR_15 < 0)
  return VAR_15;

 for (VAR_16 = 0; VAR_16 <= VAR_4; ++VAR_16) {
  int VAR_17;

  if (!VAR_13[VAR_16])
   continue;

  switch (VAR_16) {
  case 128:
   VAR_10->table_id = FUNC_3(VAR_13[VAR_16]);
   break;
  case 129:
   VAR_17 = FUNC_3(VAR_13[VAR_16]);
   VAR_10->dev = FUNC_2(VAR_8, VAR_17);
   if (!VAR_10->dev)
    return -VAR_2;
   break;
  default:
   FUNC_1(VAR_12, "Unsupported attribute in dump request");
   return -VAR_1;
  }
 }

 if (VAR_10->flags || VAR_10->protocol || VAR_10->rt_type ||
     VAR_10->table_id || VAR_10->dev) {
  VAR_10->filter_set = 1;
  VAR_11->answer_flags = VAR_3;
 }

 return 0;
}

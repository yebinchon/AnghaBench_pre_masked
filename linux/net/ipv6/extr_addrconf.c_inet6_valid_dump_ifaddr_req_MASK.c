
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_callback {int answer_flags; struct netlink_ext_ack* extack; } ;
struct net {int dummy; } ;
struct inet6_fill_args {int netnsid; int flags; int ifindex; } ;
struct ifaddrmsg {int ifa_index; scalar_t__ ifa_scope; scalar_t__ ifa_flags; scalar_t__ ifa_prefixlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net*) ;
 int VAR_3 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct net*) ;
 int VAR_4 ;
 int FUNC_3 (struct nlattr*) ;
 struct ifaddrmsg* FUNC_4 (struct nlmsghdr const*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 struct net* FUNC_7 (struct sock*,int) ;

__attribute__((used)) static int FUNC_8(const struct nlmsghdr *VAR_5,
           struct inet6_fill_args *VAR_6,
           struct net **VAR_7, struct sock *VAR_8,
           struct netlink_callback *VAR_9)
{
 struct netlink_ext_ack *VAR_10 = VAR_9->extack;
 struct nlattr *VAR_11[VAR_1+1];
 struct ifaddrmsg *VAR_12;
 int VAR_13, VAR_14;

 if (VAR_5->nlmsg_len < FUNC_5(sizeof(*VAR_12))) {
  FUNC_1(VAR_10, "Invalid header for address dump request");
  return -VAR_0;
 }

 VAR_12 = FUNC_4(VAR_5);
 if (VAR_12->ifa_prefixlen || VAR_12->ifa_flags || VAR_12->ifa_scope) {
  FUNC_1(VAR_10, "Invalid values in header for address dump request");
  return -VAR_0;
 }

 VAR_6->ifindex = VAR_12->ifa_index;
 if (VAR_6->ifindex) {
  VAR_9->answer_flags |= VAR_3;
  VAR_6->flags |= VAR_3;
 }

 VAR_13 = FUNC_6(VAR_5, sizeof(*VAR_12), VAR_11, VAR_1,
         VAR_4, VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 for (VAR_14 = 0; VAR_14 <= VAR_1; ++VAR_14) {
  if (!VAR_11[VAR_14])
   continue;

  if (VAR_14 == VAR_2) {
   struct net *VAR_15;

   VAR_6->netnsid = FUNC_3(VAR_11[VAR_14]);
   VAR_15 = FUNC_7(VAR_8, VAR_6->netnsid);
   if (FUNC_0(VAR_15)) {
    VAR_6->netnsid = -1;
    FUNC_1(VAR_10, "Invalid target network namespace id");
    return FUNC_2(VAR_15);
   }
   *VAR_7 = VAR_15;
  } else {
   FUNC_1(VAR_10, "Unsupported attribute in dump request");
   return -VAR_0;
  }
 }

 return 0;
}

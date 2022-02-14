
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int add_ref; } ;
struct rtnl_net_dump_cb {struct net* tgt_net; struct net* ref_net; TYPE_1__ fillargs; } ;
struct rtgenmsg {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_callback {struct netlink_ext_ack* extack; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr*) ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlmsghdr const*,int,struct nlattr**,int,int ,struct netlink_ext_ack*) ;
 struct net* FUNC_6 (struct sock*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(const struct nlmsghdr *VAR_4, struct sock *VAR_5,
       struct rtnl_net_dump_cb *VAR_6,
       struct netlink_callback *VAR_7)
{
 struct netlink_ext_ack *VAR_8 = VAR_7->extack;
 struct nlattr *VAR_9[VAR_1 + 1];
 int VAR_10, VAR_11;

 VAR_10 = FUNC_5(VAR_4, sizeof(struct rtgenmsg), VAR_9,
         VAR_1, VAR_3,
         VAR_8);
 if (VAR_10 < 0)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 <= VAR_1; VAR_11++) {
  if (!VAR_9[VAR_11])
   continue;

  if (VAR_11 == VAR_2) {
   struct net *VAR_12;

   VAR_12 = FUNC_6(VAR_5, FUNC_4(VAR_9[VAR_11]));
   if (FUNC_0(VAR_12)) {
    FUNC_1(VAR_8, VAR_9[VAR_11]);
    FUNC_2(VAR_8,
            "Invalid target network namespace id");
    return FUNC_3(VAR_12);
   }
   VAR_6->fillargs.add_ref = 1;
   VAR_6->ref_net = VAR_6->tgt_net;
   VAR_6->tgt_net = VAR_12;
  } else {
   FUNC_1(VAR_8, VAR_9[VAR_11]);
   FUNC_2(VAR_8,
           "Unsupported attribute in dump request");
   return -VAR_0;
  }
 }

 return 0;
}

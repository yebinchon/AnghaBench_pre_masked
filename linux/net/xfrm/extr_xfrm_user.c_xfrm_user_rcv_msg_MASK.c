
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_link {int (* doit ) (struct sk_buff*,struct nlmsghdr*,struct nlattr**) ;scalar_t__ nla_pol; scalar_t__ nla_max; int done; int * dump; int start; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_dump_control {int done; int * dump; int start; } ;
struct TYPE_2__ {int nlsk; } ;
struct net {TYPE_1__ xfrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,struct sk_buff*,struct nlmsghdr*,struct netlink_dump_control*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct nlmsghdr*,int ,struct nlattr**,int ,int ,struct netlink_ext_ack*) ;
 struct net* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*,struct nlattr**) ;
 struct xfrm_link* VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_13, struct nlmsghdr *VAR_14,
        struct netlink_ext_ack *VAR_15)
{
 struct net *VAR_16 = FUNC_4(VAR_13->sk);
 struct nlattr *VAR_17[VAR_5+1];
 const struct xfrm_link *VAR_18;
 int VAR_19, VAR_20;

 if (FUNC_0())
  return -VAR_2;

 VAR_19 = VAR_14->nlmsg_type;
 if (VAR_19 > VAR_9)
  return -VAR_1;

 VAR_19 -= VAR_6;
 VAR_18 = &VAR_10[VAR_19];


 if (!FUNC_2(VAR_13, VAR_0))
  return -VAR_3;

 if ((VAR_19 == (VAR_8 - VAR_6) ||
      VAR_19 == (VAR_7 - VAR_6)) &&
     (VAR_14->nlmsg_flags & VAR_4)) {
  if (VAR_18->dump == ((void*)0))
   return -VAR_1;

  {
   struct netlink_dump_control VAR_21 = {
    .start = VAR_18->start,
    .dump = VAR_18->dump,
    .done = VAR_18->done,
   };
   return FUNC_1(VAR_16->xfrm.nlsk, VAR_13, VAR_14, &VAR_21);
  }
 }

 VAR_20 = FUNC_3(VAR_14, VAR_11[VAR_19], VAR_17,
         VAR_18->nla_max ? : VAR_5,
         VAR_18->nla_pol ? : VAR_12, VAR_15);
 if (VAR_20 < 0)
  return VAR_20;

 if (VAR_18->doit == ((void*)0))
  return -VAR_1;

 return VAR_18->doit(VAR_13, VAR_14, VAR_17);
}

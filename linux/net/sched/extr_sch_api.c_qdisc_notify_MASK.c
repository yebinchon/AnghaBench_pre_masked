
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct net {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct Qdisc*,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct Qdisc*,int) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_9, struct sk_buff *VAR_10,
   struct nlmsghdr *VAR_11, u32 VAR_12,
   struct Qdisc *VAR_13, struct Qdisc *VAR_14)
{
 struct sk_buff *VAR_15;
 u32 VAR_16 = VAR_10 ? FUNC_0(VAR_10).portid : 0;

 VAR_15 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_15)
  return -VAR_1;

 if (VAR_13 && !FUNC_5(VAR_13, 0)) {
  if (FUNC_4(VAR_15, VAR_13, VAR_12, VAR_16, VAR_11->nlmsg_seq,
      0, VAR_6) < 0)
   goto err_out;
 }
 if (VAR_14 && !FUNC_5(VAR_14, 0)) {
  if (FUNC_4(VAR_15, VAR_14, VAR_12, VAR_16, VAR_11->nlmsg_seq,
      VAR_13 ? VAR_5 : 0, VAR_7) < 0)
   goto err_out;
 }

 if (VAR_15->len)
  return FUNC_3(VAR_15, VAR_9, VAR_16, VAR_8,
          VAR_11->nlmsg_flags & VAR_4);

err_out:
 FUNC_2(VAR_15);
 return -VAR_0;
}

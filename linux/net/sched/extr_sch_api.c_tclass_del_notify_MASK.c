
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_seq; } ;
struct net {int dummy; } ;
struct Qdisc_class_ops {int (* delete ) (struct Qdisc*,unsigned long) ;} ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ,int) ;
 int FUNC_4 (struct Qdisc*,unsigned long) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct Qdisc*,unsigned long,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_8,
        const struct Qdisc_class_ops *VAR_9,
        struct sk_buff *VAR_10, struct nlmsghdr *VAR_11,
        struct Qdisc *VAR_12, unsigned long VAR_13)
{
 u32 VAR_14 = VAR_10 ? FUNC_0(VAR_10).portid : 0;
 struct sk_buff *VAR_15;
 int VAR_16 = 0;

 if (!VAR_9->delete)
  return -VAR_2;

 VAR_15 = FUNC_1(VAR_4, VAR_3);
 if (!VAR_15)
  return -VAR_1;

 if (FUNC_5(VAR_15, VAR_12, VAR_13, VAR_14, VAR_11->nlmsg_seq, 0,
      VAR_6) < 0) {
  FUNC_2(VAR_15);
  return -VAR_0;
 }

 VAR_16 = VAR_9->delete(VAR_12, VAR_13);
 if (VAR_16) {
  FUNC_2(VAR_15);
  return VAR_16;
 }

 VAR_16 = FUNC_3(VAR_15, VAR_8, VAR_14, VAR_7,
        VAR_11->nlmsg_flags & VAR_5);
 if (VAR_16 > 0)
  VAR_16 = 0;
 return VAR_16;
}

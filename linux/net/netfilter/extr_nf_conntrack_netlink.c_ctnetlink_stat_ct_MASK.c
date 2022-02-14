
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_6, struct sock *VAR_7,
        struct sk_buff *VAR_8, const struct nlmsghdr *VAR_9,
        const struct nlattr * const VAR_10[],
        struct netlink_ext_ack *VAR_11)
{
 struct sk_buff *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_5(VAR_5, VAR_3);
 if (VAR_12 == ((void*)0))
  return -VAR_2;

 VAR_13 = FUNC_2(VAR_12, FUNC_0(VAR_8).portid,
       VAR_9->nlmsg_seq,
       FUNC_1(VAR_9->nlmsg_type),
       FUNC_6(VAR_8->sk));
 if (VAR_13 <= 0)
  goto free;

 VAR_13 = FUNC_4(VAR_7, VAR_12, FUNC_0(VAR_8).portid, VAR_4);
 if (VAR_13 < 0)
  goto out;

 return 0;

free:
 FUNC_3(VAR_12);
out:

 return VAR_13 == -VAR_0 ? -VAR_1 : VAR_13;
}

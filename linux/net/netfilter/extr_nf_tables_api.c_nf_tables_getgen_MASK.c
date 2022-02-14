
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct net*,int ,int ) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_3, struct sock *VAR_4,
       struct sk_buff *VAR_5, const struct nlmsghdr *VAR_6,
       const struct nlattr * const VAR_7[],
       struct netlink_ext_ack *VAR_8)
{
 struct sk_buff *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_2, VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_9, VAR_3, FUNC_0(VAR_5).portid,
          VAR_6->nlmsg_seq);
 if (VAR_10 < 0)
  goto err;

 return FUNC_4(VAR_4, VAR_9, FUNC_0(VAR_5).portid);
err:
 FUNC_2(VAR_9);
 return VAR_10;
}

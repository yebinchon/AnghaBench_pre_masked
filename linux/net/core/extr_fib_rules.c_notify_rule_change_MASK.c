
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct net {int dummy; } ;
struct fib_rules_ops {int nlgroup; struct net* fro_net; } ;
struct fib_rule {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct fib_rule*,int ,int ,int,int ,struct fib_rules_ops*) ;
 int FUNC_2 (struct fib_rules_ops*,struct fib_rule*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ,struct nlmsghdr*,int ) ;
 int FUNC_6 (struct net*,int ,int) ;

__attribute__((used)) static void FUNC_7(int VAR_3, struct fib_rule *VAR_4,
          struct fib_rules_ops *VAR_5, struct nlmsghdr *VAR_6,
          u32 VAR_7)
{
 struct net *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10 = -VAR_1;

 VAR_8 = VAR_5->fro_net;
 VAR_9 = FUNC_4(FUNC_2(VAR_5, VAR_4), VAR_2);
 if (VAR_9 == ((void*)0))
  goto errout;

 VAR_10 = FUNC_1(VAR_9, VAR_4, VAR_7, VAR_6->nlmsg_seq, VAR_3, 0, VAR_5);
 if (VAR_10 < 0) {

  FUNC_0(VAR_10 == -VAR_0);
  FUNC_3(VAR_9);
  goto errout;
 }

 FUNC_5(VAR_9, VAR_8, VAR_7, VAR_5->nlgroup, VAR_6, VAR_2);
 return;
errout:
 if (VAR_10 < 0)
  FUNC_6(VAR_8, VAR_5->nlgroup, VAR_10);
}

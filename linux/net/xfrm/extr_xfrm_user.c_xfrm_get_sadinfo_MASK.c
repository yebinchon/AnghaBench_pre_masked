
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int nlsk; } ;
struct net {TYPE_1__ xfrm; } ;
struct TYPE_4__ {int portid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net*,int ,int ,int ) ;
 int * FUNC_3 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct sk_buff*,int ) ;
 struct net* FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_2, struct nlmsghdr *VAR_3,
  struct nlattr **VAR_4)
{
 struct net *VAR_5 = FUNC_6(VAR_2->sk);
 struct sk_buff *VAR_6;
 u32 *VAR_7 = FUNC_3(VAR_3);
 u32 VAR_8 = FUNC_1(VAR_2).portid;
 u32 VAR_9 = VAR_3->nlmsg_seq;
 int VAR_10;

 VAR_6 = FUNC_4(FUNC_7(), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_6, VAR_5, VAR_8, VAR_9, *VAR_7);
 FUNC_0(VAR_10 < 0);

 return FUNC_5(VAR_5->xfrm.nlsk, VAR_6, VAR_8);
}

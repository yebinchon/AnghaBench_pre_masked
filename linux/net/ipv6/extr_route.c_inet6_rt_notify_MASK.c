
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nl_info {TYPE_1__* nlh; int portid; struct net* nl_net; } ;
struct net {int dummy; } ;
struct fib6_info {int dummy; } ;
struct TYPE_2__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct net*,struct sk_buff*,struct fib6_info*,int *,int *,int *,int ,int,int ,int ,unsigned int) ;
 int FUNC_5 (struct fib6_info*) ;
 int FUNC_6 (struct sk_buff*,struct net*,int ,int ,TYPE_1__*,int ) ;
 int FUNC_7 (struct net*,int ,int) ;

void FUNC_8(int VAR_3, struct fib6_info *VAR_4, struct nl_info *VAR_5,
       unsigned int VAR_6)
{
 struct sk_buff *VAR_7;
 struct net *VAR_8 = VAR_5->nl_net;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = -VAR_1;
 VAR_9 = VAR_5->nlh ? VAR_5->nlh->nlmsg_seq : 0;

 VAR_7 = FUNC_3(FUNC_5(VAR_4), FUNC_1());
 if (!VAR_7)
  goto errout;

 VAR_10 = FUNC_4(VAR_8, VAR_7, VAR_4, ((void*)0), ((void*)0), ((void*)0), 0,
       VAR_3, VAR_5->portid, VAR_9, VAR_6);
 if (VAR_10 < 0) {

  FUNC_0(VAR_10 == -VAR_0);
  FUNC_2(VAR_7);
  goto errout;
 }
 FUNC_6(VAR_7, VAR_8, VAR_5->portid, VAR_2,
      VAR_5->nlh, FUNC_1());
 return;
errout:
 if (VAR_10 < 0)
  FUNC_7(VAR_8, VAR_2, VAR_10);
}

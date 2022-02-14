
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nl_info {TYPE_1__* nlh; int portid; } ;
struct net {int dummy; } ;
struct fib6_info {int dummy; } ;
struct TYPE_2__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net*,int ,struct fib6_info*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct net*,struct sk_buff*,struct fib6_info*,int *,int *,int *,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct fib6_info*) ;
 int FUNC_7 (struct sk_buff*,struct net*,int ,int ,TYPE_1__*,int ) ;
 int FUNC_8 (struct net*,int ,int) ;

void FUNC_9(struct net *VAR_6, struct fib6_info *VAR_7,
      struct nl_info *VAR_8)
{
 u32 VAR_9 = VAR_8->nlh ? VAR_8->nlh->nlmsg_seq : 0;
 struct sk_buff *VAR_10;
 int VAR_11 = -VAR_1;




 FUNC_1(VAR_6, VAR_2, VAR_7, ((void*)0));

 VAR_10 = FUNC_4(FUNC_6(VAR_7), FUNC_2());
 if (!VAR_10)
  goto errout;

 VAR_11 = FUNC_5(VAR_6, VAR_10, VAR_7, ((void*)0), ((void*)0), ((void*)0), 0,
       VAR_4, VAR_8->portid, VAR_9, VAR_3);
 if (VAR_11 < 0) {

  FUNC_0(VAR_11 == -VAR_0);
  FUNC_3(VAR_10);
  goto errout;
 }
 FUNC_7(VAR_10, VAR_6, VAR_8->portid, VAR_5,
      VAR_8->nlh, FUNC_2());
 return;
errout:
 if (VAR_11 < 0)
  FUNC_8(VAR_6, VAR_5, VAR_11);
}

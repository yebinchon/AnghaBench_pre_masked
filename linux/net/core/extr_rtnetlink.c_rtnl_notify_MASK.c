
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net {struct sock* rtnl; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sock*,struct sk_buff*,int ,int ,int,int ) ;
 int FUNC_1 (struct nlmsghdr*) ;

void FUNC_2(struct sk_buff *VAR_0, struct net *VAR_1, u32 VAR_2, u32 VAR_3,
   struct nlmsghdr *VAR_4, gfp_t VAR_5)
{
 struct sock *VAR_6 = VAR_1->rtnl;
 int VAR_7 = 0;

 if (VAR_4)
  VAR_7 = FUNC_1(VAR_4);

 FUNC_0(VAR_6, VAR_0, VAR_2, VAR_3, VAR_7, VAR_5);
}

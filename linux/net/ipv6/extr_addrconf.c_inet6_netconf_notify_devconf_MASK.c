
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_devconf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int,struct ipv6_devconf*,int ,int ,int,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ,int *,int ) ;
 int FUNC_6 (struct net*,int ,int) ;

void FUNC_7(struct net *VAR_4, int VAR_5, int VAR_6,
      int VAR_7, struct ipv6_devconf *VAR_8)
{
 struct sk_buff *VAR_9;
 int VAR_10 = -VAR_1;

 VAR_9 = FUNC_4(FUNC_2(VAR_6), VAR_2);
 if (!VAR_9)
  goto errout;

 VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_8, 0, 0,
      VAR_5, 0, VAR_6);
 if (VAR_10 < 0) {

  FUNC_0(VAR_10 == -VAR_0);
  FUNC_3(VAR_9);
  goto errout;
 }
 FUNC_5(VAR_9, VAR_4, 0, VAR_3, ((void*)0), VAR_2);
 return;
errout:
 FUNC_6(VAR_4, VAR_3, VAR_10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dev; scalar_t__ tstamp; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,int ,int ) ;
 int VAR_2 ;

int FUNC_1(struct net *VAR_3, struct sock *VAR_4, struct sk_buff *VAR_5)
{
 VAR_5->tstamp = 0;
 return FUNC_0(VAR_0, VAR_1,
         VAR_3, VAR_4, VAR_5, ((void*)0), VAR_5->dev,
         VAR_2);

}

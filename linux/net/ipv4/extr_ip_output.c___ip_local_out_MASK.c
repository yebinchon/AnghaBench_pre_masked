
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {void* protocol; int len; } ;
struct net {int dummy; } ;
struct iphdr {void* tot_len; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct iphdr*) ;
 struct sk_buff* FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (int ,int ,struct net*,struct sock*,struct sk_buff*,int *,int ,int ) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct net *VAR_4, struct sock *VAR_5, struct sk_buff *VAR_6)
{
 struct iphdr *VAR_7 = FUNC_1(VAR_6);

 VAR_7->tot_len = FUNC_0(VAR_6->len);
 FUNC_2(VAR_7);




 VAR_6 = FUNC_3(VAR_5, VAR_6);
 if (FUNC_6(!VAR_6))
  return 0;

 VAR_6->protocol = FUNC_0(VAR_0);

 return FUNC_4(VAR_1, VAR_2,
         VAR_4, VAR_5, VAR_6, ((void*)0), FUNC_5(VAR_6)->dev,
         VAR_3);
}

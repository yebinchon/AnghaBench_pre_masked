
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dev; } ;
struct ipv6hdr {int daddr; int saddr; } ;
typedef int __be16 ;


 struct sock* FUNC_0 (int ,int *,int ,int *,int ,int ,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 int VAR_0 ;

struct sock *FUNC_5(struct sk_buff *VAR_1,
     __be16 VAR_2, __be16 VAR_3)
{
 const struct ipv6hdr *VAR_4 = FUNC_4(VAR_1);

 return FUNC_0(FUNC_1(VAR_1->dev), &VAR_4->saddr, VAR_2,
     &VAR_4->daddr, VAR_3, FUNC_2(VAR_1),
     FUNC_3(VAR_1), &VAR_0, ((void*)0));
}

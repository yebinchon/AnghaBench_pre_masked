
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct sk_buff {int dev; } ;
struct net {int dummy; } ;
struct ipv6hdr {int saddr; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct net* FUNC_0 (int ) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int *) ;
 int FUNC_3 (struct net*,int const*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1)
{
 struct net *VAR_2 = FUNC_0(VAR_1->dev);
 const struct ipv6hdr *VAR_3 = FUNC_1(VAR_1);
 __be32 VAR_4;

 VAR_4 = FUNC_3(VAR_2, (const xfrm_address_t *)&VAR_3->saddr);
 return FUNC_2(VAR_1, VAR_0, VAR_4, ((void*)0));
}
